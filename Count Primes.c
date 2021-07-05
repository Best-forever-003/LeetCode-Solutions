
int countPrimes(int n) {
    if(n<=2)
        return 0;
    int i,j,k,t=0;
    for(i=2;i<n;i++)
    {
        k=sqrt(i);
        for(j=2;j<=k;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==k+1)
            t++;
    }
    return t;
}