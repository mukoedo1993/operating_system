long pcount_goto
(unsigned long x){
    long result = 0;
    Loop:
        result += x &0x1;
        x >>= 1;
     if(x) goto Loop;
    return result;
}
//gcc -Og -S -fno-if-conversion pcount_goto.c
/*
COunt number of 1's in argument x("popcount")
Use conditional branch to either continue looping or
to exit the loop.
*/