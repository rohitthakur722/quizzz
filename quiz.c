#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayQuestion(char question[], char options[][50], char correctOption, int *score) {
    char answer;
    printf("%s\n", question);
    for (int i = 0; i < 4; i++) {
        printf("%c. %s\n", 'A' + i, options[i]);
    }
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    
    if (answer == correctOption) {
        printf("Correct!\n");
        (*score)++;
    } else {
        printf("Wrong! The correct answer is %c\n", correctOption);
    }
    printf("\n");
}


    int score = 0;
    printf("Welcome to the Quiz Game!\n\n");

    displayQuestion("What is the capital of Nepal?", (char[][50]){"Kathmandu", "Biratnagar", "Pokhara", "Kirtipur"}, 'A', &score);
    displayQuestion("where is Softwarica collage located?", (char[][50]){"Near Dilli bazar", "Near MaitiDevi", "Near Bagbazar", "Near  Gyaneshwor"}, 'A', &score);
    displayQuestion("How many Province are in Nepal?", (char[][50]){"8", "7", "9", "10"}, 'B', &score);
    displayQuestion("Who wrote 'Romeo and Juliet'?", (char[][50]){"William Shakespeare", "Charles Dickens", "Jane Austen", "Mark Twain"}, 'A', &score);

    printf("Your final score is: %d/4\n", score);

    if (score == 4) {
        printf("Excellent! You got all answers correct!\n");
    } else if (score >= 2) {
        printf("Good job! Keep practicing.\n");
    } else {
        printf("Better luck next time!\n");
    }

    return 0;
}