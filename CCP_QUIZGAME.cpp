#include <stdio.h>
#include <stdlib.h>


void uses(int use_1, int use_2);

int main() {
    char c;
    int scr = 0;
    int option, use_1 = 1, use_2 = 1;

    
    printf("What is the capital of Turkey?\n"
           "a. Istanbul\nb. Ankara\nc. Antalya\nd. Lahore\n");
    printf("Would you like to use a life line? (y/n): ");
    scanf(" %c", &c);

    if (c == 'y') {
        printf("\nChoose your option:\n1. 50/50\n2. Hint\nYour answer: ");
        scanf("%d", &option);
        if (option == 1) {
            if (use_1 > 0) {
                printf("\n'a' and 'c' are wrong.\n");
                use_1--;
            } else {
                printf("\nYou already used the 50/50 lifeline.\n");
            }
        } else if (option == 2) {
            if (use_2 > 0) {
                printf("\nLetter starts with A.\n");
                use_2--;
            } else {
                printf("\nYou already used the Hint lifeline.\n");
            }
        } else {
            printf("\nWrong entry.\n");
        }
    }

    uses(use_1, use_2);

    printf("\nYour answer: ");
    scanf(" %c", &c);

    if (c == 'b') {
        printf("Correct!\n");
        scr++;
    } else {
        printf("Wrong answer!\n");
    }

    
    printf("\nWhat is the largest human bone?\n"
           "a. Femur\nb. Tibia\nc. Fibula\nd. Patella\n");
    printf("Would you like to use a life line? (y/n): ");
    scanf(" %c", &c);

    if (c == 'y') {
        printf("\nChoose your option:\n1. 50/50\n2. Hint\nYour answer: ");
        scanf("%d", &option);
        if (option == 1) {
            if (use_1 > 0) {
                printf("\n'b' and 'd' are wrong.\n");
                use_1--;
            } else {
                printf("\nYou already used the 50/50 lifeline.\n");
            }
        } else if (option == 2) {
            if (use_2 > 0) {
                printf("\nLetter starts with F.\n");
                use_2--;
            } else {
                printf("\nYou already used the Hint lifeline.\n");
            }
        } else {
            printf("\nWrong entry.\n");
        }
    }

    uses(use_1, use_2);

    printf("Your answer: ");
    scanf(" %c", &c);

    if (c == 'a') {
        printf("Correct!\n");
        scr++;
    } else {
        printf("Wrong answer!\n");
    }

   
    printf("\nWho is known as the father of computers?\n"
           "a. Steve Jobs\nb. Bill Gates\nc. Charles Babbage\nd. Leonardo Da Vinci\n");
    printf("Would you like to use a life line? (y/n): ");
    scanf(" %c", &c);

    if (c == 'y') {
        printf("\nChoose your option:\n1. 50/50\n2. Hint\nYour answer: ");
        scanf("%d", &option);
        if (option == 1) {
            if (use_1 > 0) {
                printf("\n'b' and 'd' are wrong.\n");
                use_1--;
            } else {
                printf("\nYou already used the 50/50 lifeline.\n");
            }
        } else if (option == 2) {
            if (use_2 > 0) {
                printf("\nLast name rhymes with cabbage.\n");
                use_2--;
            } else {
                printf("\nYou already used the Hint lifeline.\n");
            }
        } else {
            printf("\nWrong entry.\n");
        }
    }

    uses(use_1, use_2);

    printf("Your answer: ");
    scanf(" %c", &c);

    if (c == 'c') {
        printf("Correct!\n");
        scr++;
    } else {
        printf("Wrong answer!\n");
    }

    
    
    printf("\nWho discovered gravity?\n"
           "a. Albert Einstein\nb. Professor Heisenberg\nc. Isaac Newton\nd. Nikola Tesla\n");
    printf("Would you like to use a life line? (y/n): ");
    scanf(" %c", &c);

    if (c == 'y') {
        printf("\nChoose your option:\n1. 50/50\n2. Hint\nYour answer: ");
        scanf("%d", &option);
        if (option == 1) {
            if (use_1 > 0) {
                printf("\n'a' and 'd' are wrong.\n");
                use_1--;
            } else {
                printf("\nYou already used the 50/50 lifeline.\n");
            }
        } else if (option == 2) {
            if (use_2 > 0) {
                printf("\nLast name is an SI unit.\n");
                use_2--;
            } else {
                printf("\nYou already used the Hint lifeline.\n");
            }
        } else {
            printf("\nWrong entry.\n");
        }
    }

    uses(use_1, use_2);

    printf("Your answer: ");
    scanf(" %c", &c);

    if (c == 'c') {
        printf("Correct!\n");
        scr++;
    } else {
        printf("Wrong answer!\n");
    }

    printf("\nYour final score is: %d\n", scr);
    return 0;
}


void uses(int use_1, int use_2) {
    if (use_1 == 0 && use_2 == 0)
        printf("\nYou have exhausted all your lifelines.\n");
    else if (use_1 == 0)
        printf("\nYou can no longer use the 50/50 lifeline.\n");
    else if (use_2 == 0)
        printf("\nYou can no longer use the Hint lifeline.\n");
}

