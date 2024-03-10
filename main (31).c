// 1)
// 1---->10 even number print 

#include <stdio.h>

int main()
{
    int num =1;
     while(num<=10){
         if(num%2==0){
               printf("%d ",num);
        }
         num+=1;
     }
  

    return 0;
}
