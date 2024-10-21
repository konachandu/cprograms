#include <stdio.h>

int main() 
{
    int a;
    printf("enter the age of person:");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("person is elligible to vote");
    }
    else
    {
        printf("person is not elligible to vote");
    }
}
    
