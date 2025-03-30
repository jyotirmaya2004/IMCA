#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Question {
    char question[100];
    char options[4][50];
    int correct_option;
};

struct Player {
    char name[50];
    int score;
};

void displayQuestion(struct Question q) {
    printf("\n%s\n", q.question);
    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, q.options[i]);
    }
}

int main() {
    struct Question questions[5] = {
        {"What is the capital of France?", {"Paris", "London", "Berlin", "Madrid"}, 1},
        {"Which planet is known as the Red Planet?", {"Earth", "Mars", "Jupiter", "Saturn"}, 2},
        {"What is 2 + 2?", {"3", "4", "5", "6"}, 2},
        {"Who wrote 'Romeo and Juliet'?", {"Shakespeare", "Hemingway", "Tolstoy", "Dostoevsky"}, 1},
        {"What is the largest ocean?", {"Atlantic", "Indian", "Arctic", "Pacific"}, 4}
    };

    struct Player player;
    printf("Enter your name: ");
    scanf("%[^\n]", player.name);
    player.score = 0;
    fflush(stdin);

    for (int i = 0; i < 5; i++) {
        displayQuestion(questions[i]);
        int answer;
        printf("Your answer (1-4): ");
        scanf("%d", &answer);

        if (answer == questions[i].correct_option) {
            printf("Correct!\n");
            player.score++;
        } else {
            printf("Wrong! Correct answer: %d\n", questions[i].correct_option);
        }
    }

    printf("\n%s, your final score is: %d/5\n", player.name, player.score);

    return 0;
}