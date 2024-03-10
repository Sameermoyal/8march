// user input :

// e : 23---89 even number

// o :67---->23 odd number 

// r :reverse number print 

// p :pallindrome 

// a :armstrong 

// s :swap 
// 	w :with 
// 	o:without 

// g :for gender 
// 	m :male 
// 	f :female 
// 	o :others 

// m :month check 

// c :count of digit 

#include <stdio.h>

int main()
{   
   
     char a;
     printf("enter the input respectively : e for even , o for odd , r for reverse , p for pallindrome , a for Armstrong , s for swap , g for gender, m for month check , c for count  ");
     scanf("%c",&a);
     
     if(a=='a'){
         printf("enter the number ");
          int num;
          int sum,rem,temp=0;
         scanf("%d",&num);        
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
       }else  if(a=='p'){
         printf("enter the number ");
          int num;
          int sum,rem,temp=0;
         scanf("%d",&num);        
         temp =num;
     
         while(num>0){
            rem=num%10;
            sum=sum*10+rem;
            num=num/10;
        }
     
        if(temp==sum){
            printf("this number is Pallindrome");
        }else{
            printf("this number is not Pallindrome");
         }
       }else if(a=='r'){
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
     
       }else if(a=='s'){
           printf("swap -   w :with ,o:without ");
           int b,c;
           char d;
           scanf(" %c",&d);
           
           if(d=='w'){
               printf("enter two values ");
               scanf("%d %d",&b,&c);
               int e;
               e=b;b=c;c=e;
               printf("swap number is %d  %d",b,c);
           }else if(d=='o'){
                printf("enter two var");
               scanf("%d %d",&b,&c);
              b=b+c;
              c=b-c;
              b=b-c;
              
               printf("swap number is %d  %d",b,c);
           }else{
               printf("try again");
           }
           
           
           
       }
       else if(a=='g'){
               char v;
               printf("m :male ,f :female ,o :others ");
               scanf(" %c",&v);
               
               if(v=='m'){
                   printf("this is male");
               }else if(v=='f'){
                   printf("this is female");
               }else if(v=='o'){
                   printf("this is other");
               }else{
                   printf("try again gender");
               }
               
               }else if(a=='m'){
                   int a;
                   
                   printf("month chacker : enter month");
                   scanf("%d",&a);
                   if(a==1){
                       printf("january");
                   }else if(a==2){
                       printf("Febuary");
                   }else if(a==3){
                       printf("March");
                   }else if(a==4){
                       printf("Aprail");
                   }else if(a==5){
                       printf("May");
                   }else if(a==6){
                       printf("June");
                   }else if(a==7){
                       printf("July");
                   }else if(a==8){
                       printf("August");
                   }else if(a==9){
                       printf("September");
                   }else if(a==19){
                       printf("October");
                   }else if(a==11){
                       printf("November");
                   }else if(a==12){
                       printf("December");
                   }else{
                       printf("you enter wrong number of month");
                   }
               }else if(a=='c'){
                   printf("enter the number");
                   int a;
                   scanf("%d",&a);
                   int count=0;
                   while(a>0){
                       count+=1;
                       a=a/10;
                   }
                   printf("count is %d",count);
               }else if(a=='e'){
                   printf("enter the two number");
                   int a,b;
                   scanf("%d %d",&a,&b);
                   while(a<=b){
                       if(a%2==0){
                           printf("%d ",a);
                           
                       }
                       a+=1;
                       
                   }
                   
               }else if(a=='o'){
                   printf("enter the two number");
                   int a,b;
                   scanf("%d %d",&a,&b);
                   while(a<=b){
                       if(a%2!=0){
                           printf("%d ",a);
                           
                       }
                       a+=1;
                       
                   }
                   
               }else {
           printf("input mismatch");
       }
       
   
    
     
        
  

    return 0;
}
