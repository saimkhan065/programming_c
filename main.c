#include <stdio.h>

int areaRectangle(int length, int breadth); //function declaration
void printPattern();

int main() {
    printf("Hello, World!\n"); // test print

    enum myEnum  {pizza, lasagna, pasta}; // declare enum
    enum myEnum foodItem1 = pizza;
    enum myEnum foodItem2 = pasta; // declare enum vars + assign value
    enum myEnum foodItem3 = lasagna;
    printf("item 1 : %d\n", foodItem1); // print enum vars
    printf("item 2 : %d\n", foodItem2);
    printf("item 3 : %d\n", foodItem3);

    printf("area of rectangle: %d",areaRectangle(5, 10)); // function call
    printPattern();
    return 0;
}

int areaRectangle(int length, int breadth){ //function definition
    return length*breadth;
}

void printPattern(){
    for (int i = 0 ; i < 5 ; i++){
        printf("\n");
        for (int j = 0 ; j <= i ; j++){
            printf("*");
        }
    }
}
