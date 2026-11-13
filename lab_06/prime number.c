#include <stdio.h>
 int main()
 {
    printf("poonam girwar\n");
    int n , num , i , flag , count = 0 ;
    printf("enter n:");
    scanf("%d", &n);

    for(num = 2 ; num <= n ; num++)
    {
        flag = 0 ;
        for(i = 2 ; i * i <= num ; i++)  
        {
            if(num % i == 0)
            {
                flag = 1 ;
                break;
            }
        }
          if(flag == 0)
            count++ ;

    }
    printf("total prime number = %d", count);
    return 0 ;
 }
