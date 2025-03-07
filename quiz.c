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