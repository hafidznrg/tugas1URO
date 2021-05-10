#include <iostream>
#include <string>
#include "objek.h"
using namespace std;

void TambahKorban(char** peta, string nama, int x, int y, korban* korban_baru){
    peta[x][y] = korban_baru->simbol;
}

void TambahLilin(char** peta, int x, int y, lilin* lilin_baru){
    peta[x][y] = lilin_baru->simbol;
}