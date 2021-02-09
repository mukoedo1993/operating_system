#include<stdio.h>
#include<stdlib.h>
long plus(long x, long y)
{
    return x+y;
}


void sumstore(long x, long y, 
                long *dest)
{
    long t = plus(x, y);
    *dest = t;
}


int main(int argc, char *argv[])
{
    long x =atoi(argv[1]);
    long y =atoi(argv[2]);
    long z;
    sumstore(x,y,&z);
    printf("%ld + %ld --> %ld\n", x, y, z);
    return 0;
}



//In ubuntu machine, a g file is generated in the same directory.
/*
Glossary: 

pushq: push sth onto the stack
movq: move copy from some place to another
call: to call some procedure
popq: the counterpart of pushq
ret: exit return out of this function
*/

/*
(base) zcw@mukoedo1993:~/operating_system_clone/operating_system/lecture5$ gcc -Og sum.c -o sum
(base) zcw@mukoedo1993:~/operating_system_clone/operating_system/lecture5$ ls -l sum
-rwxrwxr-x 1 zcw zcw 16864  2月  8 13:48 sum
(base) zcw@mukoedo1993:~/operating_system_clone/operating_system/lecture5$ ./sum 2 3
2 + 3 --> 5

*/