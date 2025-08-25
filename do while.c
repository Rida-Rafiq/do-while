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
