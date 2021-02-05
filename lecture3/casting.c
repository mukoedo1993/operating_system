
//Casting pointer to unsigned char * allows treatment as a byte array
#include"stdio.h"
typedef unsigned char* pointer;

void show_bytes(pointer start, size_t len){
   
        size_t i;
         for( i=0; i<len;i++)
            printf("%p\t0x%.2x\n",start+i,start[i]);
            printf("\n");
}

void main()
{
    int a =15213;
    printf("int a=15213\n");
    
    show_bytes((pointer)(&a), sizeof(int));


      int b =-15213;
      int *B = &b;
    printf("\n\n\nint b = -15213\n");
    
    show_bytes((pointer)(B), sizeof(int));


}

//%p: print pointer
//%x: print hexadecimal

/*
(base) zcw@mukoedo1993:~/operating_system_clone/operating_system/lecture3$ gcc -o casting.exe casting.c
(base) zcw@mukoedo1993:~/operating_system_clone/operating_system/lecture3$ ./casting.exe
int a=15213
0x7fff9dde0a28  0x6d
0x7fff9dde0a29  0x3b
0x7fff9dde0a2a  0x00
0x7fff9dde0a2b  0x00




int b = -15213
0x7fff9dde0a2c  0x93
0x7fff9dde0a2d  0xc4
0x7fff9dde0a2e  0xff
0x7fff9dde0a2f  0xff


*/