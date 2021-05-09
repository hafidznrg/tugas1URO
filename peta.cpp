#include "peta.h"

// Petunjuk: Elemen pada double pointer dapat diakses seperti array biasa.
// Misalkan ingin mengakses elemen baris i kolom j, maka cukup buat matrix[i][j]

char** BuatPeta(int n_peta){
    // Buat baris yang berisi pointer ke elemen masing-masing baris
    char** peta = new char*[n_peta];
    // Isi masing-masing baris dengan elemen kolom
    for(int i=0; i<n_peta; i++){
        peta[i] = new char[n_peta];
    } 
    // Isikan elemen ke peta untuk pertama kalinya
    // Silahkan tuliskan implementasi

    return peta;
}

void PrintPeta(char** peta, int n_peta){
    cout << "Tampilan Peta Dilihat dari Depan" << endl;
    // Tuliskan implementasi untuk menampilkan peta apabila dilihat dari depan
}

void PrintViewKanan(char** peta, int n_peta){
    cout << "Tampilan Peta Dilihat dari Kanan" << endl;
    // Tuliskan implementasi untuk menampilkan peta apabila dilihat dari belakang
}

void PrintViewKiri(char** peta, int n_peta){
    cout << "Tampilan Peta Dilihat dari Kiri" << endl;
    // Tuliskan implementasi untuk menampilkan peta apabila dilihat dari kiri
}