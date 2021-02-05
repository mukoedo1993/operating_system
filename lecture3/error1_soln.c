/*
See Robert Seacord, Secure coding for C and C++
1: C standard guarantees that unsigned addition will behave like modular arithmetic

0-1 ->UMax

*/


#include<stdio.h>

unsigned int i;
unsigned int cnt=12;
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

/*
(base) zcw@mukoedo1993:~/operating_system_clone/operating_system/lecture3$ gcc -o error1_soln  error1_soln.c
(base) zcw@mukoedo1993:~/operating_system_clone/operating_system/lecture3$ ./error1_soln
The a[10] before is: 11
The a[10] after is: 23
The a[9] before is: 10
The a[9] after is: 33
The a[8] before is: 9
The a[8] after is: 42
The a[7] before is: 8
The a[7] after is: 50
The a[6] before is: 7
The a[6] after is: 57
The a[5] before is: 6
The a[5] after is: 63
The a[4] before is: 5
The a[4] after is: 68
The a[3] before is: 4
The a[3] after is: 72
The a[2] before is: 3
The a[2] after is: 75
The a[1] before is: 2
The a[1] after is: 77
The a[0] before is: 1
The a[0] after is: 78

*/
