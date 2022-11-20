#include <stdio.h>
#include "NumClass.h"

int main() {
    int tmpsmall,small,big;
    printf("Enter two numbers:\n");
    scanf("%d%d",&small,&big);
   printf("the prime numbers:");
    for(tmpsmall=small;tmpsmall<=big;tmpsmall++)
        if(isPrime(tmpsmall))
            printf(" %d,",tmpsmall);
    printf("\n");
    printf("the strong are:");
    for(tmpsmall=small;tmpsmall<=big;tmpsmall++)
        if(isStrong(tmpsmall))
            printf(" %d,",tmpsmall);
    printf("\n");
    printf("the palindrome numbers:");
    for(tmpsmall=small;tmpsmall<=big;tmpsmall++)
        if(isPalindrome(tmpsmall))
            printf(" %d,",tmpsmall);
    printf("\n");
    printf("the armstrong numbers:");
    for(tmpsmall=small;tmpsmall<=big;tmpsmall++)
        if(isArmstrong(tmpsmall))
            printf(" %d,",tmpsmall);
    printf("\n");

}
/* will return if a number is Armstrong number
 An Armstrong number is an n-digit number that equal to the sum of the nth powers its digits.
 For Example:407+4^3+0^3+7^3 */
