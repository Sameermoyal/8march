//13. c program to check a number is pallindrome : 12321

#include <stdio.h>

int main()
{   
    int num=12321;
    int sum,rem,temp=0;
     temp =num;
   
   
    
     while(num>0){
         rem=num%10;
         sum=sum*10+rem;
         num=num/10;
        }
     
    if(temp==sum){
        printf("this number is palindrome");
    }else{
         printf("this number is not palindrome");
    }
        
  

    return 0;
}
