#include<stdio.h>

int main()
{
    int num;

    printf("Enter a Number to check odd or Even: ");
    scanf("%d",&num);

    if(num%2 == 0){
        printf("%d is Even...",num);
    } else{
        printf("%d is Odd...",num);
    }
}
