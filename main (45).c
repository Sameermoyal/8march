//12 .reverse of number :56234 

#include <stdio.h>

int main()
{
    printf("enter the number ");
          int num;
          int sum,rem=0;
         scanf("%d",&num);        
        
     
         while(num>0){
            rem=num%10;
            sum=sum*10+rem;
            num=num/10;
        }
        printf("reverse number is %d",sum);

    return 0;
}