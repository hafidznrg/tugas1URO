#ifndef OBJEK_H
#define OBJEK_H
using namespace std;

// Status dari lilin
typedef enum {on, off} status;

typedef struct {
    string nama;
    int x;
    int y;
    char simbol;
} korban;

typedef struct {
    int x;
    int y;
    status status;
    const char simbol = 'L';
} lilin;

/**
 * @param peta double pointer menuju matriks peta
 * @param nama nama dari korban
 * @param x koordinat korban (x)
 * @param y koordinat korban (y)
 * @param korban_baru pointer menuju data korban baru
 * @result membuat korban baru dan mengubah simbol pada peta sesuai koordinat yang diberikan
 */
void TambahKorban(char** peta, string nama, int x, int y, korban* korban_baru);

/**
 * @param peta double pointer menuju matriks peta
 * @param x koordinat korban (x)
 * @param y koordinat korban (y)
 * @param lilin_baru pointer menuju data lilin
 * @result membuat lilin baru dan mengubah simbol pada peta sesuai koordinat yang diberikan
 */
void TambahLilin(char** peta, int x, int y, lilin* lilin_baru);

#endif