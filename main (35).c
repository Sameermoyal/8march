// 5)
// 100---->1 even number print 

#include <stdio.h>

int main()
{
    int num =100;
     while(num>=1){
         if(num%2==0){
               printf("%d ",num);
        }
         num-=1;
     }
  

    return 0;
}
