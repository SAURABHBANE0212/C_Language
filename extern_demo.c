#include<stdio.h>

int A = 10;

extern int B; // B is integer which is outside the file

extern int C;  // C is integer which is outside the file

int main()
{
    printf("Value of A %d\n",A);

    printf("Value of B %d\n",B);

    printf("Value of C %d\n",C);

    return 0;
}

// gcc  extern_demo.c   extern.c    -o  Myexe