#include <stdio.h>
#include <string.h>

int main() {
    char ch1[50];
    char ch2[1000]="hello hi";
    char ch3[1000]="good i'm good ";
    char ch4[1000]={'help','can you'};

    printf("=== chat bot en anglais ===\n\n");
    printf("you: ");
    fgets(ch1, sizeof(ch1), stdin);
    ch1[strcspn(ch1, "\n")] = 0;

    if (strstr(ch1, ch2) != NULL) {
        printf("enter un autre discor");
    } else {
        printf("Hi! how are u to day! \n");
    }

    printf("you: ");
    fgets(ch1, sizeof(ch1), stdin);
    ch1[strcspn(ch1, "\n")] = 0;

    if (strstr(ch1, ch3) != NULL) {
        printf("enter un autre discor");
    } else {
        printf("Great to hear that!how Can help you?");
    }

    return 0;
}