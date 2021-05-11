#include <iostream>
#include <string>
#include "objek.h"
using namespace std;

void TambahKorban(char** peta, string nama, int x, int y, korban* korban_baru){
    korban korbanBaru;
    korbanBaru.nama = nama;
    korbanBaru.x = x;
    korbanBaru.y = y;
    korbanBaru.simbol = nama[0];
    korban_baru = &korbanBaru;
    peta[x][y] = korban_baru->simbol;
}

void TambahLilin(char** peta, int x, int y, lilin* lilin_baru){
    lilin lilinBaru;
    lilinBaru.x = x;
    lilinBaru.y = y;
    lilinBaru.status = on;
    lilin_baru = &lilinBaru;
    peta[x][y] = lilin_baru->simbol;
}