long absdiff
(long x, long y)
{
    long result;
    if(x>y)
    result = x-y;
    else
    result = y-x;
    return result;
}

//gcc -Og -S -fno-if-conversion control.c

/*
absdiff:
    cmpq   %rsi, %rdi   # x:y
    jle    .L4
    movq   %rdi, %rax
    subq   %rdi,  %rax
    ret

Register     Use(s)
%rdi         Argument x
%rsi         Argument y
%rax         Return Value
*/