#include<stdio.h>
int main()
{
int Arr[5] = {10,20,30,40,50};

printf("Base address of array : %d\n",Arr);
printf("Base address of array : %d\n",&Arr);
printf("Size of arry is : %d\n",sizeof(Arr));
return 0;
}