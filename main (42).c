//14. armstrong  153 
#include <stdio.h>

int main()
{   
    int num=153;
    int sum,rem,temp=0;
     temp =num;
   
   
    
     while(num>0){
         rem=num%10;
         sum=sum+rem*rem*rem;
         num=num/10;
        }
     
    if(temp==sum){
        printf("this number is Armstrong");
    }else{
         printf("this number is not Armstronge");
    }
        
  

    return 0;
}
