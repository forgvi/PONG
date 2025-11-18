#include <stdio.h>

void print_field(int width, int height);

int main (void) 
{   
    int field_x = 80;
    int field_y = 25;
    char exit;

    print_field(field_x, field_y);
    // do {
    //     scanf("%c", &exit);
    //     if (exit == 's') {
    //         print_field(field_x, field_y);
    //         printf("\033[2J\033[H");
    //     }
    // } while (exit != 'e');
  

    return  0;
}
// fix github 
// redo
// void init_field(int width, int height) 
// {
//     for (int i = 0; i < height; i++) {
//         for (int j = 0; j < width; j++) {
//             if (i == 0 || i == (height - 1)) printf("%c",'-');
//             else if (j == 0 || j == (width -1)) printf("%c", '|');
//             else if ((i > 0 && i < width) && (j == (width / 2) - 1)) printf("%c", '|');
//             else printf("%c", ' ');
//         }
//         printf("\n");
//     }
// }

void print_field(int width, int height) 
{
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == (height - 1)) printf("%c", '-');
            else if (j == 0 || j == (width -1)) printf("%c", '|');
            else if ((i > 0 && i < width) && (j == (width / 2) - 1)) printf("%c", '|');
            else printf("%c", ' ');
        }
        printf("\n");
    }
}