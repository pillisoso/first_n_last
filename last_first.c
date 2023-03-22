#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(void){
    char first[20], last[10];
    int on = 0, i = 0;

    printf("Enter First name :");
    gets(first);

    printf("\nEnter Last name :");
    gets(last);

    strcat(first, last);
    
    printf("Hi %s %s! \nHow Ya Doin?", first, last);

    while(!(int)on){
        printf("Enter any number to exit :");
        on = getche();
    }

    return 0;
}
