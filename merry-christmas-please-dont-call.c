#include <stdio.h>
#include <string.h>
#include <unistd.h>

struct Lyrics {
    char *text;
    int delay;
};

void printWithTyping(char *text, int speed) {
    for (int i = 0; text[i] != '\0'; i++) {
        putchar(text[i]);
        fflush(stdout);
        usleep(speed * 1000);
    }
    printf("\n");
}

int main() {
    printf("# Merry Christmas, Please Don't Call\n\n");

    struct Lyrics music[] = {
        { "I want one ticket out of your heavy gaze", 1.95 },
        { "I want one ticket off of your carousel", 1 },
        { "But you should know that I die slow", 2 },
        { "Running through the halls of your haunted home", 1.2 },
        { "And the toughest part is that we both know", 1 },
        { "What happened to you", 1 },
        { "Why you're out on your own", 1.5 },
        { "Merry Christmas, please don't call", 1.8 },
        { "Merry Christmas, I'm not yours at all", 2 },
        { "Merry Christmas, please don't call", 4 }
    };

    int typingSpeed = 75;
    int lines = sizeof(music) / sizeof(music[0]);

    for (int i = 0; i < lines; i++) {
        printWithTyping(music[i].text, typingSpeed);
        sleep(music[i].delay);
    }

    return 0;
}
