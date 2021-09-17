#include <stdio.h>
 

int main()
{
   
int num;
   
int tempNum,flag;
     
   
printf("Enter an integer number: ");
 
scanf("%d",&num);
  //2   
  
tempNum=num;
  //tempNum=2  
flag=0;
 
while(tempNum!=1)
  //(2!=1) yes (1!=1) no
{
    
    if(tempNum%2!=0) //(2%2!=0) no
{
           
	 flag=1;
         
         break;
      
  }
       
 tempNum=tempNum/2;
 // 2/2=1
  }
  
   
 if(flag==0)
     
 printf("%d is a number that is the power of 2.",num);
   
 else
       
 printf("%d is not the power of 2.",num);
   
 return 0;

}
