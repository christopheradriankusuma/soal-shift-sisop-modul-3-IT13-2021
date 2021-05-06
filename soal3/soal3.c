#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

void err() {
    printf("Usage:\n\t./soal3 -f /path/to/file1 /path/to/file2 ...\n\t./soal3 -d /path/to/dir\n\t./soal3 \\*");
    exit(EXIT_FAILURE);
}

char *file_ext(char *file) {
    if (file[0] == '.') return "Hidden";

    char *p = strchr(file, '.');
    if (p == NULL) return "Unknown";

    char *ext;
    ext = (char *)malloc(sizeof(char*) * 10);
    sprintf(ext, "%.*s", strlen(file) - (p - file + 1), p + 1);
    for (size_t i = 0; i < strlen(ext); ++i) {
        *(ext + i) = tolower(*(ext + i));
    }
    return ext;
}

void categorize_dir(char *directory_to_be_opened, char *should_be_active_directory, char *current_directory) {
    DIR *directory = opendir(directory_to_be_opened);
    struct dirent *d;

    if (chdir(current_directory) < 0) {
        printf("Error chdir %s\n", current_directory);
    }

    if (!directory) {
        printf("Error opening %s from %s\n", directory_to_be_opened, current_directory);
        return;
    }

    while (d = readdir(directory)) {
        if (strcmp(".", d->d_name) != 0 && strcmp("..", d->d_name) != 0) {
            DIR *tmp = opendir(d->d_name);

            if (tmp) {
                char next_directory[1024];
                sprintf(next_directory, "%s/%s", current_directory, d->d_name);
                categorize_dir(d->d_name, should_be_active_directory, next_directory);
                chdir("..");
            } else  {
                char current_file[1024];
                sprintf(current_file, "%s/%s", current_directory, d->d_name);

                char *ext;
                ext = (char *)malloc(sizeof(char) * 1024);
                sprintf(ext, "%s/%s", should_be_active_directory, file_ext(d->d_name));

                mkdir(ext, 0755);
                char new[1024];
                sprintf(new, "%s/%s", ext, d->d_name);

                if (rename(current_file, new) < 0) {
                    printf("%s: Sad, gagal :(\n", d->d_name);
                    printf("%s: mv %s %s\n", current_directory, current_file, new);
                } else {
                    printf("%s : Berhasil dikategorikan\n", d->d_name);
                }
            }
        }
    }
}

void categorize_files(char *files[]) {

}

int main(int argc, char *argv[]) {

    if (argc < 2) {
        printf("Error\n");
        exit(EXIT_FAILURE);
    }

    char dir[1024];
    char active_dir[1024];
    getcwd(active_dir, 1024);

    if (strcmp("-f", argv[1]) == 0) {
        if (argc < 3) err();

        categorize_files(argv);
    } else if (strcmp("-d", argv[1]) == 0) {
        if (argc != 3) err();

        sprintf(dir, "%s", argv[2]);

        if (chdir(dir) < 0) {
            printf("No such directory :(\n");
            exit(EXIT_FAILURE);
        }

        categorize_dir(dir, active_dir, active_dir);
    } else if (strcmp("*", argv[1]) == 0) {
        if (argc > 2) err();

        getcwd(dir, 1024);
        printf("%s\n", dir);

        categorize_dir(dir, active_dir, active_dir);
    } else {
        err();
    }

    exit(EXIT_SUCCESS);
}