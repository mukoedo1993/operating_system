long switch_ (long x)
{
    switch(x){
    case 0:
    return(2*x);
    break;
    case 1:
    case 2:
    case 3:
    x*=3;
    case 4:
    return x;
    break;
    case 5:
    default:
    break;
    }
    return x;
}