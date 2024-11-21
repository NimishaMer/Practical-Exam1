#include <stdio.h>


int main() {
    char ch;
  
    printf("Enter a character: ");
    scanf("%c", &ch);
  
    switch (1) {
       
        case 1: 
            if (isalpha(ch)) {
                printf("The character '%c' is an alphabet.\n", ch);
                break;
            }
       
           if (isdigit(ch)) {
                printf("The character '%c' is a digit.\n", ch);
                break;
            }
      
            printf("The character '%c' is a special character.\n", ch);
            break;
    }

    return 0;
}

