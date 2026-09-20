#include <stdio.h>

int main() {
  // Tipe data ini adalah fondasi dalam bahasa C yang merepresentasikan nilai numerik tunggal dan karakter.
  printf("Tipe data di bahasa C\n");

  // Integer
  int angka = 8163264; // ukuran 4 byte dengan rentang nilai sekitar -2,147,483,648 hingga 2,147,483,647.
  printf("- Integer / bilangan bulat (int): %d\n", angka);

  // Character
  char huruf = 'A'; // ukuran 1 byte dengan rentang nilai -128 hingga 127 atau 0 hingga 255.
  printf("- Character / huruf (char): %c\n", huruf);

  // Floating point
  float pecahan = 1.234567; // ukuran 4 byte dengan presisi hingga 6-7 digit desimal.
  printf("- Floating point / pecahan presisi tunggal (float): %f\n", pecahan);

  // Double precision floating point
  double pecahan_ganda = 1.234567890123456; // ukuran 8 byte dengan presisi hingga 15-17 digit desimal.
  printf("- Double precision floating point / pecahan presisi ganda (double): %f\n", pecahan_ganda);

  return 0;
}
