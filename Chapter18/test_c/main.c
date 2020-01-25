/*
    by neuezeal.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h> //SetConsoleOutputCP()

int main(int argc, char *argv[])
{
    const UINT default_cp = GetConsoleOutputCP();
    printf("%u\n", default_cp);

    int ch;
    FILE* fr, * fw;

    const char* in_file_name = "원본.txt";
    const char* out_file_name = "사본.txt";

    unsigned long count = 0;

    /*if (argc != 2)
    {
        printf("Usage: %s filename", argv[0]);
        exit(EXIT_FAILURE);
    }*/

    if ((fr = fopen(in_file_name, "r")) == NULL)    // Open a text file for writing.
    {
        printf("Cant't open a %s", argv[1]);
        exit(EXIT_FAILURE);

    }
    if ((fw = fopen(out_file_name, "w")) == NULL)
    {
        printf("Cant't open a %s", out_file_name);
        exit(EXIT_FAILURE);
    }

     SetConsoleOutputCP(CP_UTF8); // UTF-8 mode

    while ((ch = fgetc(fr)) != EOF)
    {
        fputc(ch, stdout);  // same as putchar(ch);
        fputc(ch, fw);
        count++;
    }

    fclose(fr);
    fclose(fw);

    SetConsoleOutputCP(default_cp); // ISO 2022 Korean

    printf("%s File has a %lu Characters\n", in_file_name, count);
    printf("Copied to %s\n", out_file_name);

    printf("한글 출력 확인");

    return 0;
}
