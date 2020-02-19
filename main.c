#include <.stdio.h>
int main()
{
    int i, j;
    printf("chess board:\n");
    for (i = 0; i <= 7; i++) {
        for (j = 0; j <= 7; j++) {
            if (i % 2 == 1)
                if (j % 2 == 1)
                    printf("  ");
                else
                    printf("*");
            else if (j % 2 == 1)
                printf("*");
            else
                printf("  ");
        }printf("\n");
    }
}

