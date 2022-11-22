#include <stdio.h>
#include "NumClass.h"

int main() {
    int tmpsmall,small,big;
    printf("Enter two numbers:\n");
    scanf("%d%d",&small,&big);
    printf("The Armstrong numbers are:");
    for(tmpsmall=small;tmpsmall<=big;tmpsmall++)
        if(isArmstrong(tmpsmall))
            printf(" %d",tmpsmall);
    printf("\n");
    printf("The Palindrome are:");
    for(tmpsmall=small;tmpsmall<=big;tmpsmall++)
        if(isPalindrome(tmpsmall))
            printf(" %d",tmpsmall);
    printf("\n");
   printf("The Prime numbers are:");
    for(tmpsmall=small;tmpsmall<=big;tmpsmall++)
        if(isPrime(tmpsmall))
            printf(" %d",tmpsmall);
    printf("\n");
    printf("The Strong numbers are:");
    for(tmpsmall=small;tmpsmall<=big;tmpsmall++)
        if(isStrong(tmpsmall))
            printf(" %d",tmpsmall);
    printf("\n");


    return 0;
}

