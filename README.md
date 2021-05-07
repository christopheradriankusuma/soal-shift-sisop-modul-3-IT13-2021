# soal-shift-sisop-modul-3-IT13-2021

### <b> Nama Anggota Kelompok: </b>
#### 1. Asiyah Hanifah (05311940000002)
#### 2. Muhammad Yasykur Rafii (05311940000017)
#### 3. Christopher Adrian Kusuma (05311940000022)
---

## Soal 1

Keverk adalah orang yang cukup ambisius dan terkenal di angkatannya. Sebelum dia menjadi ketua departemen di HMTC, dia pernah mengerjakan suatu proyek dimana keverk tersebut meminta untuk membuat server database buku. Proyek ini diminta agar dapat digunakan oleh pemilik aplikasi dan diharapkan bantuannya dari pengguna aplikasi ini.</br>
</br>
Di dalam proyek itu, Keverk diminta: </br>

(a) Pada saat client tersambung dengan server, terdapat dua pilihan pertama, yaitu register dan login. Jika memilih register, client akan diminta input id dan passwordnya untuk dikirimkan ke server. User juga dapat melakukan login. Login berhasil jika id dan password yang dikirim dari aplikasi client sesuai dengan list akun yang ada didalam aplikasi server. Sistem ini juga dapat menerima multi-connections. Koneksi terhitung ketika aplikasi client tersambung dengan server. Jika terdapat 2 koneksi atau lebih maka harus menunggu sampai client pertama keluar untuk bisa melakukan login dan mengakses aplikasinya. Keverk menginginkan lokasi penyimpanan id dan password pada file bernama akun.txt dengan format :

<b>akun.txt</b></br>
> id:password </br>
> id2:password2

</br>
(b) Sistem memiliki sebuah database yang bernama files.tsv. Isi dari files.tsv ini adalah path file saat berada di server, publisher, dan tahun publikasi. Setiap penambahan dan penghapusan file pada folder file yang bernama  FILES pada server akan memengaruhi isi dari files.tsv. Folder FILES otomatis dibuat saat server dijalankan. 
</br>
(c) Tidak hanya itu, Keverk juga diminta membuat fitur agar client dapat menambah file baru ke dalam server. Direktori FILES memiliki struktur direktori di bawah ini :

Direktori <b>FILES</b>
> File1.ekstensi </br>
> File2.ekstensi

Pertama client mengirimkan input ke server dengan struktur sebagai berikut :</br>
Contoh Command Client :
> add

Output Client Console:
     
> Publisher: </br>
> Tahun Publikasi:</br>
> Filepath:

Kemudian, dari aplikasi client akan dimasukan data buku tersebut (perlu diingat bahwa Filepath ini merupakan path file yang akan dikirim ke server). Lalu client nanti akan melakukan pengiriman file ke aplikasi server dengan menggunakan socket. Ketika file diterima di server, maka row dari files.tsv akan bertambah sesuai dengan data terbaru yang ditambahkan.

</br>
(d) Dan client dapat mendownload file yang telah ada dalam folder FILES di server, sehingga sistem harus dapat mengirim file ke client. Server harus melihat dari files.tsv untuk melakukan pengecekan apakah file tersebut valid. Jika tidak valid, maka mengirimkan pesan error balik ke client. Jika berhasil, file akan dikirim dan akan diterima ke client di folder client tersebut. 

Contoh Command client
> download TEMPfile.pdf

</br>
(e) Setelah itu, client juga dapat menghapus file yang tersimpan di server. Akan tetapi, Keverk takut file yang dibuang adalah file yang penting, maka file hanya akan diganti namanya menjadi ‘old-NamaFile.ekstensi’. Ketika file telah diubah namanya, maka row dari file tersebut di file.tsv akan terhapus.

Contoh Command Client:

> delete TEMPfile.pdf

</br>
(f) Client dapat melihat semua isi files.tsv dengan memanggil suatu perintah yang bernama see. Output dari perintah tersebut keluar dengan format. 

Contoh Command Client :
>see

Contoh Format Output pada Client:
> Nama:<br>
Publisher: <br>
Tahun publishing:<br>
Ekstensi File : <br>
Filepath : <br>

>Nama: <br>
Publisher: <br>
Tahun publishing: <br>
Ekstensi File : <br>
Filepath : <br>

</br>
(g) Aplikasi client juga dapat melakukan pencarian dengan memberikan suatu string. Hasilnya adalah semua nama file yang mengandung string tersebut. Format output seperti format output f.

Contoh Client Command:
> find TEMP

</br>
(h) Dikarenakan Keverk waspada dengan pertambahan dan penghapusan file di server, maka Keverk membuat suatu log untuk server yang bernama running.log. Contoh isi dari log ini adalah

<b>running.log</b></br>
>Tambah : File1.ektensi (id:pass)</br>
Hapus : File2.ektensi (id:pass)

Akan tetapi, kevek saat itu masih belum paham dengan sistem server dan client.

Bantulah Keverk untuk menyelesaikan proyek ini!
### <b>Note:</b>
- Dilarang menggunakan system() dan execv(). Silahkan dikerjakan sepenuhnya dengan thread dan socket programming. 
- Untuk download dan upload silahkan menggunakan file teks dengan ekstensi dan isi bebas (yang ada isinya bukan touch saja dan tidak kosong) dan requirement untuk benar adalah percobaan dengan minimum 5 data.

Struktur Direktori:
> ├── Client</br>
│ ... ├── client.c</br>
│ ... ├── File2.extensi</br>
│ ... └── File1.extensi</br>
└── Server</br>
  ...... ├── akun.txt</br>
  ...... ├── files.tsv</br>
  ...... ├── server.c</br>
......  ├── running.log</br>
......     └── FILES</br>
     ..............       ├── File2.extensi</br>
    ..............       └── File1.ekstensi</br>

## Penyelesaian:

### Code:

### Penjelasan Code:


## Kendala yang Dihadapi: 

## Screeshoot Hasil:


---

## Soal 2

Crypto (kamu) adalah teman Loba. Suatu pagi, Crypto melihat Loba yang sedang kewalahan mengerjakan tugas dari bosnya. Karena Crypto adalah orang yang sangat menyukai tantangan, dia ingin membantu Loba mengerjakan tugasnya. Detil dari tugas tersebut adalah:

</br>
(a) Membuat program perkalian matrix (4x3 dengan 3x6) dan menampilkan hasilnya. Matriks nantinya akan berisi angka 1-20 (tidak perlu dibuat filter angka).

</br>
</br>
(b) Membuat program dengan menggunakan matriks output dari program sebelumnya (program soal2a.c)</br>

### <b>Catatan:</b>
Gunakan shared memory 

Kemudian matriks tersebut akan dilakukan perhitungan dengan matrix baru (input user) sebagai berikut contoh perhitungan untuk matriks yang ada. Perhitungannya adalah setiap cel yang berasal dari matriks A menjadi angka untuk faktorial, lalu cel dari matriks B menjadi batas maksimal faktorialnya (dari paling besar ke paling kecil)

### <b>Catatan:</b>
gunakan thread untuk perhitungan di setiap cel

>If a >= b  -> a!/(a-b)!</br>
If b > a -> a!</br>
If 0 -> 0</br>

Contoh :</br>
(gambar tabel 1)</br>
Contoh: </br>
(gambar tabel 2)

(c) Karena takut lag dalam pengerjaannya membantu Loba, Crypto juga membuat program (soal2c.c) untuk mengecek 5 proses teratas apa saja yang memakan resource komputernya dengan command “ps aux | sort -nrk 3,3 | head -5” 

### <b>Catatan:</b>
Harus menggunakan IPC Pipes

### <b>Note:</b>
- Semua matriks berasal dari input ke program.
- Dilarang menggunakan system()

## Penyelesaian:

### Code:
<b>2a.c</b>
```c
#include <stdlib.h>
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>

typedef unsigned long long ull;

void main() {
    key_t key = 1234;
    ull *value;
    int shmid = shmget(key, sizeof(int), IPC_CREAT | 0666);
    value = shmat(shmid, NULL, 0);

    ull mat1[4][3]; // = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    ull mat2[3][6]; // = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}};

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%llu", &mat1[i][j]);
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 6; ++j) {
            scanf("%llu", &mat2[i][j]);
        }
    }

    ull sum = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            for (int k = 0; k < 3; ++k) {
                sum += mat1[i][k] * mat2[k][j];
            }
            *(value + 6*i + j) = sum;
            sum = 0;
        }
    }

    printf("Matriks 1:\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%llu\t", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Matriks 2:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 6; ++j) {
            printf("%llu\t", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Matriks perkalian:\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            printf("%llu\t", *(value + 6*i + j));
        }
        printf("\n");
    }

    sleep(10);

    shmdt(value);
    shmctl(shmid, IPC_RMID, NULL);
}
```

<b>2b.c</b>
```c
#include <stdlib.h>
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <pthread.h>

typedef unsigned long long ull;

struct data {
    ull A;
    ull B;
    ull factorial;
};

ull custom_factorial(ull a, ull b) {
    if (a == 0 || b == 0) return 0;
    b = b > a ? a : b;

    ull ans = 1;
    for (ull i = a; i > a-b; --i) ans *= i;
    return ans;
}

void *func(void *arg) {
    struct data *d = (struct data *)arg;
    d->factorial = custom_factorial(d->A, d->B);
}

void main() {
    key_t key = 1234;
    ull *value;
    int shmid = shmget(key, sizeof(int), IPC_CREAT | 0666);
    value = shmat(shmid, NULL, 0);

    pthread_t tid[24];
    struct data d[24];

    printf("Matriks A:\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            printf("%llu\t", *(value + 6*i + j));
            d[6*i + j].A = *(value + 6*i + j);
        }
        printf("\n");
    }
    printf("\n");

    ull matB[4][6];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            scanf("%llu", &matB[i][j]);
            d[6*i + j].B = matB[i][j];
        }
    }

    for (ull i = 0; i < 4; ++i) {
        for (ull j = 0; j < 6; ++j) {
            pthread_create(&tid[6*i + j], NULL, func, (void*)&d[6*i + j]);
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            pthread_join(tid[6*i + j], NULL);
        }
    }

    printf("Matriks B:\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            printf("%llu\t", matB[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Matriks faktorial:\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            printf("%llu\t", d[6*i + j].factorial);
        }
        printf("\n");
    }

    shmdt(value);
    shmctl(shmid, IPC_RMID, NULL);
}
```

<b>2c.c</b>
```c
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
 
int main() {
	pid_t child_id;
	int status;
	int fp1[2];
	int fp2[2];
	char output[1000];
	
	if (pipe(fp1) == -1){
		fprintf(stderr, "Pipe Failed" );
		return 1;
	}
	
	if (pipe(fp2) == -1){
		fprintf(stderr, "Pipe Failed" );
		return 1;
	}
	
	child_id = fork();
	if (child_id < 0) {
		exit(EXIT_FAILURE);
	}
	
	if (child_id == 0) {
		close(fp1[0]);
		dup2(fp1[1], STDOUT_FILENO);
		char *argv[] = {"ps", "aux", NULL};
		execv("/bin/ps", argv);
        exit(EXIT_SUCCESS);
	} else {
		while ((wait(&status)) > 0);
		child_id = fork();
		if (child_id < 0) {
			exit(EXIT_FAILURE);
		}
		if (child_id == 0){
			close(fp1[1]);
			dup2(fp1[0], STDIN_FILENO);
			close(fp2[0]);
			dup2(fp2[1], STDOUT_FILENO);
			char *argv[] = {"sort", "-nrk 3,3", NULL};
			execv("/usr/bin/sort", argv);
            exit(EXIT_SUCCESS);
		} 
        else{
			close(fp2[1]);
			dup2(fp2[0], STDIN_FILENO);
            close(fp1[1]);
            close(fp1[0]);
			char *argv[] = {"head", "-5", NULL};
			execv("/usr/bin/head", argv);
            exit(EXIT_SUCCESS);
		}
	}
}
```
### Penjelasan Code:


## Kendala yang Dihadapi: 

## Screeshoot Hasil:


---

## Soal 3

Seorang mahasiswa bernama Alex sedang mengalami masa gabut. Di saat masa gabutnya, ia memikirkan untuk merapikan sejumlah file yang ada di laptopnya. Karena jumlah filenya terlalu banyak, Alex meminta saran ke Ayub. Ayub menyarankan untuk membuat sebuah program C agar file-file dapat dikategorikan. Program ini akan memindahkan file sesuai ekstensinya ke dalam folder sesuai ekstensinya yang folder hasilnya terdapat di working directory ketika program kategori tersebut dijalankan.

Contoh apabila program dijalankan:
> #Program soal3 terletak di /home/izone/soal3 </br>

> $ ./soal3 -f path/to/file1.jpg path/to/file2.c path/to/file3.zip
#Hasilnya adalah sebagai berikut
/home/izone </br>
|-jpg </br>
........|--file1.jpg </br>
|-c </br>
........|--file2.c </br>
|-zip </br>
........|--file3.zip </br>

</br>
(a) Program menerima opsi -f seperti contoh di atas, jadi pengguna bisa menambahkan argumen file yang bisa dikategorikan sebanyak yang diinginkan oleh pengguna. 
Output yang dikeluarkan adalah seperti ini :

> File 1 : Berhasil Dikategorikan (jika berhasil)</br>
File 2 : Sad, gagal :( (jika gagal)</br>
File 3 : Berhasil Dikategorikan</br>

</br>
(b) Program juga dapat menerima opsi -d untuk melakukan pengkategorian pada suatu directory. Namun pada opsi -d ini, user hanya bisa memasukkan input 1 directory saja, tidak seperti file yang bebas menginput file sebanyak mungkin. Contohnya adalah seperti ini:

> $ ./soal3 -d /path/to/directory/

Perintah di atas akan mengkategorikan file di /path/to/directory, lalu hasilnya akan disimpan di working directory dimana program C tersebut berjalan (hasil kategori filenya bukan di /path/to/directory).
Output yang dikeluarkan adalah seperti ini :
> Jika berhasil, print “Direktori sukses disimpan!”
Jika gagal, print “Yah, gagal disimpan :(“


(c) Selain menerima opsi-opsi di atas, program ini menerima opsi *, contohnya ada di bawah ini:
> $ ./soal3 \* </br>

Opsi ini akan mengkategorikan seluruh file yang ada di working directory ketika menjalankan program C tersebut.

(d) Semua file harus berada di dalam folder, jika terdapat file yang tidak memiliki ekstensi, file disimpan dalam folder “Unknown”. Jika file hidden, masuk folder “Hidden”.

(e) Setiap 1 file yang dikategorikan dioperasikan oleh 1 thread agar bisa berjalan secara paralel sehingga proses kategori bisa berjalan lebih cepat.

Namun karena Ayub adalah orang yang hanya bisa memberi ide saja, tidak mau bantuin buat bikin programnya, Ayub meminta bantuanmu untuk membuatkan programnya. Bantulah agar program dapat berjalan!

### <b>Catatan: </b>

- Kategori folder tidak dibuat secara manual, harus melalui program C
- Program ini tidak case sensitive. Contoh: JPG dan jpg adalah sama
- Jika ekstensi lebih dari satu (contoh “.tar.gz”) maka akan masuk ke folder dengan titik terdepan (contoh “tar.gz”)
- Dilarang juga menggunakan fork-exec dan system()
- Bagian b dan c berlaku rekursif


## Penyelesaian:
### Code:
```C
#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

pthread_t tid[1024];
int current_thread = 0;

struct file_data {
    char file_name[1024];
    char should_be_active_directory[1024];
    char current_directory[1024];
};

int status = 1;
int mode = 0;

struct file_data fds[1024];

void print_fd(struct file_data fd) {
    printf("%s %s %s\n", fd.file_name, fd.should_be_active_directory, fd.current_directory);
}

void err() {
    printf("Usage:\n\t./soal3 -f /path/to/file1 /path/to/file2 ...\n\t./soal3 -d /path/to/dir\n\t./soal3 \\*");
    exit(EXIT_FAILURE);
}

char *file_ext(char *file) {
    if (file[0] == '.') return "Hidden";

    char *p = strchr(file, '.');
    if (p == NULL) return "Unknown";

    char *ext;
    ext = (char *)malloc(sizeof(char*) * 50);
    sprintf(ext, "%.*s", strlen(file) - (p - file + 1), p + 1);
    for (size_t i = 0; i < strlen(ext); ++i) {
        *(ext + i) = tolower(*(ext + i));
    }
    return ext;
}

void *categorize_file(void *argv) {
    struct file_data *fd = (struct file_data *)argv;

    char current_file[1024];
    sprintf(current_file, "%s/%s", fd->current_directory, fd->file_name);

    char ext[1024];
    sprintf(ext, "%s/%s", fd->should_be_active_directory, file_ext(fd->file_name));

    mkdir(ext, 0755);
    char new[1024];
    sprintf(new, "%s/%s", ext, fd->file_name);

    if (rename(current_file, new) < 0 && mode == 0) {
        printf("%s: Sad, gagal :(\n", fd->file_name);
        status = 0;
    } else if (mode == 0) {
        printf("%s : Berhasil dikategorikan\n", fd->file_name);
    }

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
                sprintf(fds[current_thread].file_name, "%s", d->d_name);
                sprintf(fds[current_thread].should_be_active_directory, "%s", should_be_active_directory);
                sprintf(fds[current_thread].current_directory, "%s", current_directory);

                pthread_create(&tid[current_thread], NULL, categorize_file, (void *)&fds[current_thread]);
                ++current_thread;
            }
        }
    }
    for (int i = 0; i < current_thread; ++i) {
        pthread_join(tid[i], NULL);
    }

}

void categorize_files(int argc, char *files[], char *should_be_active_directory) {
    for (int i = 2; i < argc; ++i) {
        char *p = strrchr(files[i], '/');

        sprintf(fds[current_thread].file_name, "%.*s", strlen(files[i]) - (p - files[i] + 1), p + 1);
        sprintf(fds[current_thread].should_be_active_directory, "%s", should_be_active_directory);
        sprintf(fds[current_thread].current_directory, "%.*s", p - files[i], files[i]);

        pthread_create(&tid[current_thread], NULL, categorize_file, (void *)&fds[current_thread]);
        ++current_thread;
    }

    for (int i = 0; i < current_thread; ++i) {
        pthread_join(tid[i], NULL);
    }
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

        categorize_files(argc, argv, active_dir);
    } else if (strcmp("-d", argv[1]) == 0) {
        if (argc != 3) err();
        mode = 1;

        sprintf(dir, "%s", argv[2]);

        categorize_dir(dir, active_dir, dir);

        if (status) {
            printf("Direktori sukses disimpan!\n");
        } else {
            printf("Yah, gagal disimpan :(\n");
        }
    } else if (strcmp("*", argv[1]) == 0) {
        if (argc > 2) err();
        mode = 1;

        getcwd(dir, 1024);

        categorize_dir(dir, active_dir, active_dir);

        if (status) {
            printf("Direktori sukses disimpan!\n");
        } else {
            printf("Yah, gagal disimpan :(\n");
        }
    } else {
        err();
    }

    exit(EXIT_SUCCESS);
}
```

### Penjelasan

## Kendala yang Dihadapi: 

## Screeshoot Hasil: