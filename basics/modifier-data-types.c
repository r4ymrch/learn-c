#include <stdio.h>

int main() {
  // Tipe data dasar (kecuali float, double, dan void) dapat dimodifikasi menggunakan kata kunci pengubah untuk mengubah rentang nilai atau ukurannya:
  printf("Modifikator Tipe Data\n\n");

  // Signed
  // Dapat bernilai positif dan negatif (bawaan/default untuk int dan char).
  printf("# Signed (default untuk int dan char) (positif/negatif)\n");

  signed int angka_signed_1 = 64;
  signed int angka_signed_2 = -64;

  printf(
    "- angka1 (positif): %d\n"
    "- angka2 (negatif): %d\n",
    angka_signed_1, angka_signed_2
  );
  
  // Unsigned
  // Hanya dapat bernilai positif saja, sehingga rentang nilai positifnya menjadi dua kali lipat lebih besar.
  printf("\n# Unsigned (hanya positif) (rentang nilai lebih besar 2x)\n");

  unsigned int angka_unsigned = 816326412;
  printf("- angka1 (positif): %d\n", angka_unsigned);
  
  // Short
  // Ukuran lebih kecil (biasanya 2 byte untuk int).
  printf("\n# Short (ukuran lebih kecil) (2 byte untuk int)\n");

  short int angka_short = 8163;
  printf("- angka1 (short): %d\n", angka_short);
  
  // Long / Long Long
  // Ukuran lebih besar (biasanya 4 atau 8 byte untuk long, dan minimal 8 byte untuk long long).
  printf("\n# Long / Long Long (ukuran lebih besar) (4-8 byte untuk long) (minimal 8 byte untuk long long)\n");

  long int angka_long = 8163264128256512102;
  long long int angka_long_long = 8163264128256512102;
  printf(
    "- angka1 (long): %ld\n" 
    "- angka2 (long long): %lld\n", 
    angka_long, angka_long_long
  );

  return 0;
}
