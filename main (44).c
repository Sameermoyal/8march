// 6)
// 53---->89 even number print 

#include <stdio.h>

int main()
{
    int num =53;
     while(num<=89){
         if(num%2==0){
               printf("%d ",num);
        }
         num+=1;
     }
  

    return 0;
}