#include <stdio.h>

int halfPyramid(){
    int row = 10;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        putchar('\n');
    }
    return 0;
}

int main(){
    halfPyramid();
}