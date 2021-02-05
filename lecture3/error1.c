unsigned int i;
unsigned int cnt=3;
void main()
{
    int a[13U];
for(i = cnt-2; i >=0; --i)
{
    a[i] += a[i+1];
    /*
    when i changes to -1, it will convert to a strange unnegative number automatically.
    
    */
}
}