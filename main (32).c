// 2)
// 1---->100 even number print 

#include <stdio.h>

int main()
{
    int num =1;
     while(num<=100){
         if(num%2==0){
               printf("%d ",num);
        }
         num+=1;
     }
  

    return 0;
}
