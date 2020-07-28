void sieve()
{
    a[0]=a[1]=1;
    for(long long int i=2; i*i<2000000; i++)
    {
        if(!a[i])
        {
            for(long long int j=i*i; j<2000000; j=j+i)
                a[j]=1;
        }
    }
}

void sieve()
{
    a[0]=a[1]=1;
  a[2]=0;
  for(long long i=4;i<2000000;i=i+2)
    a[i]=1;
     for(long long i=3;i<2000000;i=i+2){
        if(!a[i]){
            for(long long j=i*i;j<2000000;j=j+2*i)
                a[j]=1;
        }
     }
}
