//
// Created by oz on 17/11/22.
//
int isArmstrong(int);
int isPalindrome(int);
int isPalindrome1(int ,int);
int isArmstrong1(int,int,int);
int power(int,int);


int isPalindrome(int n) {
    int reverse = 0;
    return isPalindrome1(n, reverse);
}

int isPalindrome1(int n,int reverse)
{
    if(n/10==reverse || n==reverse)
        return 1;
    if(n==0 && reverse!=0)
        return 0;
    if(reverse==0 && n%10==0)
        return 0;
    return isPalindrome1(n/10,reverse*10+n%10);
}

int isArmstrong(int n)
{
    int tmp=n;
    int reverse=0;
    int length=0;
    while(tmp>0)
    {
        length++;
        tmp=tmp/10;
    }
    if(isArmstrong1(n,reverse,length)==n)
        return 1;
    return 0;
}
int isArmstrong1(int n,int reverse,int length)
{
    if(n==0)
        return reverse;
    reverse+=power(n%10,length);
    return isArmstrong1(n/10,reverse,length);
}
int power(int n,int length)
{
    int sum = 1;
    for (int i = 1; i <= length; ++i)
        sum *= n;
    return sum;
}


