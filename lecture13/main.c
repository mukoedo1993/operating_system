int sum (int *a, int n);

int array[2] = {1, 2};

int main()
{
    int val = sum(array, 2);
    return val;
}

/*
(base) zcw@mukoedo1993:~/operating_system_clone/operating_system/lecture13$ gcc -Og -o prog main.c sum.c
(base) zcw@mukoedo1993:~/operating_system_clone/operating_system/lecture13$ ./prog
(base) zcw@mukoedo1993:~/operating_system_clone/operating_system/lecture13$ #Two statements above have run smoothly.
(base) zcw@mukoedo1993:~/operating_system_clone/operating_system/lecture13$ 
*/