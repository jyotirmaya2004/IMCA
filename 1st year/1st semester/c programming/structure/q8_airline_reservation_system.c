#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Flight {
    int flight_no;
    char destination[50];
    int seats_available;
};

struct Passenger {
    char name[50];
    int flight_no;
};

void addFlight(struct Flight *flights, int *count) {
    printf("Enter Flight Number: ");
    scanf("%d", &flights[*count].flight_no);
    printf("Enter Destination: ");
    scanf("%s", flights[*count].destination);
    printf("Enter Seats Available: ");
    scanf("%d", &flights[*count].seats_available);
    (*count)++;
    printf("Flight added successfully!\n");
}

void bookTicket(struct Flight *flights, int flight_count, struct Passenger *passengers, int *passenger_count) {
    int flight_no;
    printf("Enter Flight Number: ");
    scanf("%d", &flight_no);

    for (int i = 0; i < flight_count; i++) {
        if (flights[i].flight_no == flight_no) {
            if (flights[i].seats_available > 0) {
                printf("Enter Passenger Name: ");
                scanf("%s", passengers[*passenger_count].name);
                passengers[*passenger_count].flight_no = flight_no;
                flights[i].seats_available--;
                (*passenger_count)++;
                printf("Ticket booked successfully!\n");
            } else {
                printf("No seats available!\n");
            }
            return;
        }
    }
    printf("Flight not found!\n");
}

void displayFlights(struct Flight *flights, int count) {
    printf("\nFlight Details:\n");
    for (int i = 0; i < count; i++) {
        printf("Flight No: %d, Destination: %s, Seats Available: %d\n", flights[i].flight_no, flights[i].destination, flights[i].seats_available);
    }
}

int main() {
    struct Flight flights[100];
    struct Passenger passengers[100];
    int flight_count = 0, passenger_count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Flight\n2. Book Ticket\n3. Display Flights\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addFlight(flights, &flight_count);
                break;
            case 2:
                bookTicket(flights, flight_count, passengers, &passenger_count);
                break;
            case 3:
                displayFlights(flights, flight_count);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}