long pcount_do
(unsigned long x){
    long result = 0;
    do {
        result += x &0x1;
        x >>= 1;
    }while(x);
    return result;
}
//gcc -Og -S -fno-if-conversion pcount_do.c