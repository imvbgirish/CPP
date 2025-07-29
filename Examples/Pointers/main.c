#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void sum(int array[]){

// for(int i=0; i<5; i++) {
//     printf("%d ",array[i]);
//   }
// printf("\n");
// }

// struct Student{
//   char studentName[10];
//   int rollNo;
// };

// void display(struct Student* s){
//   printf("%s\n",s->studentName);
//   printf("%d\n",s->rollNo);
// }

int numOfLines = 0;
char* lines = NULL;

void addData(char *line) {
    // Calculate the length of the new line (+1 for '\n' or '\0')
    int lineLen = strlen(line);

    if (lines == NULL) {
        lines = (char *)malloc(lineLen + 2);
        if (lines == NULL) {
            printf("Memory allocation failed\n");
            return;
        }
        lines[0] = '\0';  // initialize as empty string
    } else {
        // Resize to fit the new line + newline + null terminator
        lines = (char *)realloc(lines, strlen(lines) + lineLen + 2);
        if (lines == NULL) {
            printf("Memory reallocation failed\n");
            return;
        }
    }

    strcat(lines, line);
    strcat(lines, "\n");

    numOfLines++;
}

void readData() {
    FILE *fp = fopen("Data.txt", "r");
    if (fp == NULL) {
        printf("Failed to open file\n");
        return;
    }

    char line[256];
    while (fscanf(fp, "%255s", line) != EOF) {
        addData(line);
    }
}

void displayData(){

}

int main()
{
    // int arr[5] = {1,2,4,5,5};
    // sum(arr);

    // struct Student s1 = {"Girish",10};

    // display(&s1);

    return 0;
}



