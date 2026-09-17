#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <time.h>

// config
#define SHOW_SECRET 0
#define LINE_LENGTH 48

// functions
void clearScreen() {
  printf("\033[2J\033[H");
}

void drawLineH(char symbol, int length) {
  if (length >= 100) length = 99;
  char str[100];
  memset(str, symbol, length);
  str[length] = '\0';
  puts(str);
}

void handleSigint(int sig) {
  puts("\n- See ya!\n");
  drawLineH('=', LINE_LENGTH);
  exit(0);
}

// main
int main() {
  signal(SIGINT, handleSigint);

  srand((unsigned int)time(NULL));
  char choice;

  do {
    clearScreen();
    drawLineH('=', LINE_LENGTH);
    puts("|| Guess The Number v1.0.0");
    puts("|| Simple program to learn about C language");
    puts("|| Press CTRL+C to quit");
    drawLineH('=', LINE_LENGTH);

    int secret = rand() % 100 + 1;
    int guess;
    int test = 0;

    if (SHOW_SECRET == 1) {
      printf("\n- Guess the number i already choose from 1 to 100! (%d)\n", secret);
    } else {
      puts("\n- Guess the number i already choose from 1 to 100!");
    }

    do {
      printf("> Type your guess: ");
      
      if (scanf(" %d", &guess) != 1) {
        puts("- Input must be number!");

        while (getchar() != '\n');
        continue;
      }

      test++;

      if (guess > secret) {
        puts("- Nu'uh. Too high! try again");
      } else if (guess < secret) {
        puts("- Nu'uh. Too low! try again");
      } else {
        printf("- GG bro. You right! (%d)\n", secret);
        printf("- Succesfully guessed in %d tries\n\n", test);
      }

    } while (guess != secret);

    do {
      printf("> Play again? (Y/n): ");
      scanf(" %c", &choice);
    } while (choice != 'Y' && choice != 'N' && choice != 'y' && choice != 'n');

  } while (choice == 'Y' || choice == 'y');

  puts("- See ya!\n");
  drawLineH('=', LINE_LENGTH);

  return 0;
}
