// 11. count digit :
// 34534645 :dry run +laptop 

#include <stdio.h>

int main()
{   
    int num=34534645;
    int  count=0;
   
    
     while(num>0){
         num=num/10;
         count+=1;
         
     }
     printf("the count digit is %d",count);
        
  

    return 0;
}
