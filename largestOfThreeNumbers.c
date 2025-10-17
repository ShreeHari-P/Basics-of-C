#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a > b){
        if(a > c){
            printf("A is the Greatest Number, %d",a);
        }
    } else{
        if(b > c){
            printf("B is the Greatest Number, %d",b);
        } else {
            printf("C is the Greatest Number, %d",c);
        }
    }
}
