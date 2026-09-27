#include<stdio.h>
int main()
{
    int a = 5 , b = 10 ;
    int c ;
    printf("value of a is %d and value of b is %d\n", a , b);
    c = a ;
    a = b ;
    b = c ;
    printf("value of a is %d and value of b is %d\n", a , b);

    return 0 ;
}
