#include <stdio.h>
int main()
{
    int num, n, newNum;
    printf("Enter any number: ");
    scanf("%d", &num); //010
    printf("Enter nth bit to toggle (0-31): ");
    scanf("%d", &n); //0 th position
    newNum = num ^ (1 << n);//010 ^ (1<<0)
    printf("Bit toggled successfully.\n\n");
    printf("Number before toggling %d bit:%d(in decimal)\n", n, num);//010
    printf("Number after toggling %d bit:%d(in decimal)\n",n,newNum);//011
    return 0;
}
