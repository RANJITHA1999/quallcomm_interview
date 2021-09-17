#include <stdio.h>
int main()
{
    unsigned int number;
    int count = 0;
 
    printf("Enter the unsigned integer:\n");
    scanf("%d", &number);//2
    while (number != 0)//2!=0(T)   1!=0(T)    0!=0(F)
    {
        if ((number & 1) == 1) //2&1!=1  1&1==1
            count++;          //count=0   count=1
        number = number >> 1;//2=2>>1=>1   1=1>>1=0
    }
    printf("number of one's are :\n%d\n", count);//1
    return 0;
}
