# do-while
A simple C program that demonstrates a menu-driven interface using a do-while loop and if-else statements. Users can select options to print messages or exit the program.
# Menu-Driven Program in C

This C program implements a simple menu-driven interface. Users can choose options to display messages ("Hello" or "Bye") or exit the program. It demonstrates the use of loops and conditional statements in C.

## Features

- Menu-driven interface with 3 options
- Uses `do-while` loop to repeat the menu until the user chooses to exit
- Simple `if-else` statements for decision making
- Beginner-friendly C program for practicing loops and conditional logic

## Code Example

```c
#include <stdio.h>

int main() {
    int choice;
    do {
        printf("Menu:\n1. Hello\n2. Bye\n3. Exit\nChoose: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Hello\n");
        } else if(choice == 2) {
            printf("Bye\n");
        }
    } while(choice != 3);

    return 0;
}
