//
// Created by oz on 17/11/22.
//
int isArmstrong(int);
int isPalindrome(int);

/* will return if a number is Armstrong number
 An Armstrong number is an n-digit number that equal to the sum of the nth powers its digits.
 For Example:407+4^3+0^3+7^3 */
int isArmstrong(int n)
{
    int digit =0;
    int tmp=n;
    while(tmp>0)
    {
        digit++;
        tmp=tmp/10;
    }
    int sum=0;
    tmp=n;
    int digimsum=1;
    while(tmp>0)
    {
        digimsum=1;
        for(int i=1;i<=digit;i++)
              digimsum*=tmp%10;
        tmp/=10;
        sum = sum +digimsum;
    }
    if(sum==n)
        return 1;
    return 0;
}


int isPalindrome(int n)
{

    int tmp=n;
    int n2=0;
    int digit;
    while (tmp>0)
    {
        digit=tmp%10;
        n2=n2*10+digit;
        tmp/=10;
    }
    if(n==n2)
    {
        return 1;
    }
    return 0;
}
