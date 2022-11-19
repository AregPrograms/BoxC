#include <stdio.h>

int main(int argc, char **argv)
{
    printf("WARNING: TEXT WRAPPING MAY BREAK THE OUTPUT\n");
    int x = 10;
    int y = 10;
    int border_width = 1;
    if (argc >= 2)
    {
        x = atoi(argv[1]);
        
        if (argc >= 3)
        {
            y = atoi(argv[2]);
        };
    }
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (((j <= border_width-1) || (i <= border_width-1) || (j >= x - 1 - (border_width-1)) || (i >= y - 1 - (border_width-1))) ||((j <= border_width-1) && (i <= border_width-1))){
                printf("%c ", '#');
            } else {
                printf("%c ", '%');
            }
        }
        printf("\n");
    }
}