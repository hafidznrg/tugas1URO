// Tuliskan Header Terlebih dahulu

/**
 * @param n_peta menyatakan ukuran peta yang akan dinyatakan dalam matriks nxn
 * @result mengisi elemen ujung peta dengan x dan elemen tengah peta dengan -
 */
char** BuatPeta(int n_peta);

/**
 * @param peta menyatakan alamat dari matriks yang berisi peta
 * @param n_peta ukuran peta
 * @result menampilkan peta dari sisi depan
 */
void PrintPeta(char** peta, int n_peta);

/**
 * @result menampilkan peta dari sisi kiri
 */
void PrintViewKiri(); // Silahkan sesuaikan parameternya

/**
 * @result menampilkan peta dari sisi kanan
 */
void PrintViewKanan(); // Silahkan sesuaikan parameternya