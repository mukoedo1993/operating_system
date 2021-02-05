/*Even better than the soln. given by error1_soln.c*/
/*
Data type size_t defined as unisgned value with length = word size
code will work even if cnt = UMax


*/


#include<stdio.h>

size_t i;
size_t cnt=12;
void main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    /*
for(i = cnt-2; i >=0; --i)
{
    a[i] += a[i+1];

}
*/

for(i = cnt -2; i<cnt;--i)
{
   printf("The a[%i] before is: %d\n",i,a[i]);
    a[i]+=a[i+1];
     printf("The a[%i] after is: %d\n",i,a[i]);
}

}

//gcc -o error1_soln1.exe  error1_soln1.c