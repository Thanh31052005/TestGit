#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Hello World");
    int a, b;
    printf("Nhap vao a: ");
    scanf("%d", &a);
    printf("Nhap vao b: ");
    scanf("%d", &b);
    printf("\nHieu 2 so: %d", a - b);
    getch();
    return 0;
}