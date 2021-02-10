int gt (long x, long y)
{
    return x>y;
}

void main()
{
  gt(110L, 135L);
}

/*
Register     Use(s)
%rdi         Argument x
%rsi         Argument y
%rax         Return value
*/


/*
cmpq   %rsi    %rdi   # Compare x:y
setg   %al            # Set when >
movzbl %al, %eax      # Zero rest of %rax(eax is the last 32 bytes of %rax)
ret
*/