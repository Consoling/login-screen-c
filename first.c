#include <stdio.h>
#include <conio.h>

int main() {
    char ch;
    char pass[20];
    int i=0;
    
    ch = getch();


    if(ch == 13) {
        pass[i] = '\0';
        break;
        
    } else {
        pass[i++] = ch;
        
        printf("*");
    }

    printf('Your entered password is: %s\n', pass );
   FILE * ptr;
   ptr = fopen('password.txt', 'r');

   sca
    return 0;
}