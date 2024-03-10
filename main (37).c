//8. user :
// start :7
// end :9

// 7 se 9 tak k user input :even number 

#include <stdio.h>

int main()
{   printf("start  you want to satart and end even number : ");
    int num,end;
    scanf("%d %d",&num,&end);
    
    
     while(num<=end){
         if(num%2==0){
               printf("%d ",num);
        }
         num+=1;
     }
  

    return 0;
}
