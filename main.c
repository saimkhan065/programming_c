#include <stdio.h>

int areaRectangle(int length, int breadth); //function declaration

int main() {
    printf("Hello, World!\n"); // test print
    enum myEnum  {pizza, lasagna, pasta}; // declare enum
    enum myEnum foodItem1 = pizza;
    enum myEnum foodItem2 = pasta; // declare enum vars + assign value
    enum myEnum foodItem3 = lasagna;
    printf("item 1 : %d\n", foodItem1); // print enum vars
    printf("item 2 : %d\n", foodItem2);
    printf("item 3 : %d\n", foodItem3);
    return 0;
}

int areaRectangle(int length, int breadth){ //function definition
    return length*breadth;
}
