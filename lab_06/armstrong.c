#include <stdio.h>
  int main()
  {
    int n , sum = 0 , x , rem ;
    printf("poonam girwar\n");
    printf("enter a number:");
    scanf("%d", &n);
    x = n ;
    while(n>0)
    {
        rem = n%10 ;
        sum = sum + rem * rem * rem ;
        n = n/10 ;
    }
    if(sum == x)
      printf("armstrong number");
      else
        printf("not an armstrong number");

        return 0 ;
  }
