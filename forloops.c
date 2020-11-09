#include <stdio.h>
#include <stdlib.h>


int main(){
    int start = 0;
    int start_inner = 0;
    int number = 1;
    for (start = 0; start < 6; start ++){
        printf ("Iteration number: %d\n", start);
        if (start == 0){
            printf ("null");
        }
        for (start_inner = 0; start_inner < start; start_inner ++){
            printf ("%d", number);
            printf(" ");
            number++;
        }
        printf ("\n");
    }
    printf ("Cleaner version:");
    number = 1;
    for (start = 0; start < 6; start ++){
        for (start_inner = 0; start_inner < start; start_inner ++){
            printf ("%d", number);
            printf(" ");
            number++;
        }
        printf ("\n");
    }
}
