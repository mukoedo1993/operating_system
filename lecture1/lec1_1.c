/*Memory Referencing Bug Example*/
#include<stdio.h>
typedef struct{
	int a[2];
	double d;
}struct_t;

double fun(int i){
volatile struct_t s;
s.d=3.14;
s.a[i]=1073741824;/*Possibly out of bounds*/
return s.d;
}

int main()
{
printf("%f\n",fun(0));
printf("%f\n",fun(1));
printf("%f\n",fun(2));
printf("%f\n",fun(3));
printf("%f\n",fun(4));
printf("%f\n",fun(5));
/*printf("%f\n",fun(6));   segmentation fault*/
return 0;
}


