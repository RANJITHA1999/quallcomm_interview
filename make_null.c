#include<stdio.h>
void modify(int *a)
{
*a=NULL;
//a=NULL;
}
int main()
{
int x=5;
int *p=&x;
printf("%p %u\n",p,x);
modify(p);
printf("%p %u\n",p,x);
return 0;
}
