#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Room {
    int room_no;
    char type[50];
    float price;
    int available;
};

void addRoom(struct Room *rooms, int *count) {
    printf("Enter Room Number: ");
    scanf("%d", &rooms[*count].room_no);
    printf("Enter Room Type: ");
    scanf("%s", rooms[*count].type);
    printf("Enter Price: ");
    scanf("%f", &rooms[*count].price);
    rooms[*count].available = 1;
    (*count)++;
    printf("Room added successfully!\n");
}

void displayRooms(struct Room *rooms, int count) {
    printf("\nRoom Details:\n");
    for (int i = 0; i < count; i++) {
        printf("Room No: %d, Type: %s, Price: %.2f, Available: %s\n", rooms[i].room_no, rooms[i].type, rooms[i].price, rooms[i].available ? "Yes" : "No");
    }
}

int main() {
    struct Room rooms[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Room\n2. Display Rooms\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addRoom(rooms, &count);
                break;
            case 2:
                displayRooms(rooms, count);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}