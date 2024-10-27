#include <stdio.h>
void main()
{
    int n;
    int digit;
    int rev=0;
    printf("Enter any number");
    scanf("%d",n);
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
  if (rev==n)
  printf("it is a palindrome");  
}