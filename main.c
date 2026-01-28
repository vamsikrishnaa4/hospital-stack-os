#include <stdio.h>
#include "stack.h"

int main() {
    int choice, id;

    while (1) {
        printf("\n--- HOSPITAL EMERGENCY SYSTEM ---\n");
        printf("1. Admit Patient\n");
        printf("2. Treat Patient\n");
        printf("3. Display Patients\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Patient ID: ");
                scanf("%d", &id);
                push(id);
                break;

            case 2:
                id = pop();
                if (id != -1)
                    printf("Patient %d treated\n", id);
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
