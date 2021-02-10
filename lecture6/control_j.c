long absdiff
(long x, long y)
{
    long result;
    int ntest = x<=y;
    if(ntest) goto Else;
    result = x - y;
    goto Done;
    
    Else:
       result = y-x;
    Done:
        return result;

}
//gcc -Og -S -fno-if-conversion control_j.c