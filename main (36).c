// 7)
// 78---->65 even number print 

#include <stdio.h>

int main()
{
    int num =78;
     while(num>=65){
         if(num%2==0){
               printf("%d ",num);
        }
         num-=1;
     }
  

    return 0;
}
