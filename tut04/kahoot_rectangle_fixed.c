// Author: Finbar Berkon
// Date: June 2020
// A program to print out a rectangle of hashes

#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 10

int main(void) {
    int i = 0;
    while (i < MAX_ROW) {
        int j = 0;
        while (j < MAX_COL) {
            printf("# ");
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
}
