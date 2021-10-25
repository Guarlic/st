#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define red "\x1B[31m"
#define blu "\x1B[34m"
#define wht "\x1B[37m"

typedef struct _Student {
    char name[30];
    int grade;
    int class;
    int num;
} Student;

int main(int argc, char** argv) {
    Student* st = (Student*)malloc(sizeof(Student));

    if (argc > 5) {
        printf("Too mouch arguments.\n");
        free(st);
        return 0;
    }

    if (!strcmp(argv[1], "--version")) {
        printf(blu "st ");
        printf(wht "vesion: ");
        printf(red "v1.1.0\n");
        free(st);
        return 0;
    }

    else if (!strcmp(argv[1], "--help")) {
        printf("st manual\n\n");
        printf("options:\n");
        printf(red "\tNULL\n\n");
        printf(wht "manual:\n");
        printf("\tst [name] [grade] [class] [number]\n");
        return 0;
    }

    for (int i = 1; i <= 4; i++) {
        if (argv[i] == NULL) {
            printf("st: Require more arguments.\n");
            free(st);
            return 1;
        }
    }

    strcpy(st->name, argv[1]);
    st->grade = atoi(argv[2]);
    st->class = atoi(argv[3]);
    st->num = atoi(argv[4]);

    system("clear");

    for (int i = 0; i < 20; i++) printf("\n");
    
    for (int i = 0; i < 20; i++) printf("\t"); printf("****************************\n\n");
    for (int i = 0; i < 20; i++) printf("\t"); printf("       Name: %s\n", st->name);
    for (int i = 0; i < 20; i++) printf("\t"); printf("       Grade: %d\n", st->grade);
    for (int i = 0; i < 20; i++) printf("\t"); printf("       Class: %d\n", st->class);
    for (int i = 0; i < 20; i++) printf("\t"); printf("       Number: %d\n\n", st->num);
    for (int i = 0; i < 20; i++) printf("\t"); printf("****************************");

    for (int i = 0; i < 20; i++) printf("\n");

    system("read");
    system("clear");

    free(st);
    return 0;
}
