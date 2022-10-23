#include<stdio.h>

int main () {
    int amount;
    int total;

    printf("Input you witdrawal Amount : ");
    scanf("%d", &amount);

    total = amount / 5000;
    printf("Note(s) of 5000 : %d\n" , total);
    amount = amount - (total*5000);
    
    total = amount/1000;
    printf("Note(s) of 1000 : %d\n" , total);
    amount = amount - (total*1000);

    total = amount / 500;
    printf("Note(s) of 500 : %d\n" , total);
    amount = amount - (total*500);

    total = amount / 100;
    printf("Note(s) of 100 : %d\n" , total);
    amount = amount - (total*100);

    total = amount / 50;
    printf("Note(s) of 50 : %d\n" , total);
    amount = amount - (total*50);

    total = amount / 20;
    printf("Note(s) of 20 : %d\n " , total);
    amount = amount - (total*50);

    total = amount / 10;
    printf("Note(s) of 10 : %d\n" , total);
    amount = amount - (total*10);

    total = amount / 5;
    printf("Note(s) of 5 : %d\n" , total);
    amount = amount - 

    total = amount / 4;
    printf("Note(s) of 4 : %d\n" , total);

    total = amount / 3;
    printf("Notes(s) of 3 : %d\n" , total);

    total = amount / 2;
    printf("Note(s) of 2 : %d\n" , total);

    total = amount / 1;
    printf("Note(s) of 1 : %d\n" , total);




}