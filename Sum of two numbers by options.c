#include <stdio.h>
int main()
{
    int num1,num2,choice,Result;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&num1,&num2);
    printf("1 for adiition\n2 for subtraction\n3 for multiplication\n4 for division\nEnter your choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        Result=num1+num2;
        printf("The result is:%d",Result);
    }
    else if(choice==2)
    {
        Result=num1-num2;
        printf("The result is:%d",Result);
    }
    else if(choice==3)
    {
        Result=num1*num2;
        printf("The result is:%d",Result);
    }
    else if(choice==4)
    {
        Result=num1/num2;
        printf("The result is:%d",Result);
    }
    else
    printf("fool!!!!!!");
    
    return 0;
}
    
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
