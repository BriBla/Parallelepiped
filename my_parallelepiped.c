/*
** ETNA PROJECT, 20/03/2021 by blanch_b
** DEV C Quest = Rush
** File description:
**      Parallelepiped
*/

#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

int spaceX(int i) 
{
    int j = 0;
    while (j < i) {
        my_putchar(' ');
        j++;
    }
}

void horizontal_line_low(int x) 
{
    int i = 0;
    if (x != 0) {
        my_putchar('*');
    }
    while (i < (x - 2)) {
        if (x > 2) {
            my_putchar('-');
        }
        if ((x > 0) && (x <= 2)) {
            my_putchar('*');
        }
        i++;
    }
    if (x > 1) {
            my_putchar('*');
    }
}

void horizontal_line_up(int x, int y, int z) 
{
    int i = 0;
    if (x != 0) {
        my_putchar('*');
    }
    while (i < (x - 2)) {
        if (x > 2) {
            my_putchar('-');
        }
        if ((x > 0) && (x <= 2)) {
            my_putchar('*');
        }
        i++;
    }
    if (x > 1) {
            my_putchar('*');
    }
//    spaceX(z - 2);
//    my_putchar('*');
}

void back_horizontal_line(int x, int y, int z) 
{
    if (z != 0) {
        int k = 0;
        while (k < z - 1) {
        my_putchar(' ');
        k++;
        }
        horizontal_line_low(x);
        my_putchar('\n');
    }
}

void vertical_bar(int x,int y, int z) 
{
    int i = 0;
    while (i < (y - 2)) {
        my_putchar('\n');
        my_putchar('|');
        spaceX(x - 2);
        my_putchar('|');
        i++;
        if (i < (z - 2)) {
            spaceX(y - i - 2);
            my_putchar('/');
        }
    }
    my_putchar('\n');
}

void slash_depth(int x, int y, int z) 
{
    int l = 0;
    while (l < (z - 2)) {
        spaceX(z - l - 2);
        my_putchar('/');
        spaceX(x - 2);
        my_putchar('/');
        spaceX(l);
        if (l < (y - 2)) {
            my_putchar('|');
        }
        my_putchar('\n');
        l++;
    }

}

int my_parallelepiped(int x, int y, int z) 
{
    if (x > 0) {
        back_horizontal_line(x, y, z);
        slash_depth(x, y, z);
        horizontal_line_up(x, y, z);
        vertical_bar(x, y, z);
        horizontal_line_low(x);
        my_putchar('\n');
    }
}
