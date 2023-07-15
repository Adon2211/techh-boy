#include <stdio.h>
int main()
{
    int i,num,count=0,n,temp=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(i=num;i>0;i++)
    {
    count++;
    temp=temp+pow(0,count);
    }
    if(temp==num)
    {
    printf("%d is an armstrong number",num);
    }
    else
    {
    printf("%d is an armstrong number",num);
}
return 0;
    
}
