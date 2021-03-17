bool ktra(int i)
{
    int m=0;
    int n=0;
    int k=i;
    while(i!=0)
    {
        int du=i%10;
        m+=1;
        if(du==0) return false;
        if(k%du==0) n+=1;
        i/=10;
    }
    if(m==n) return true;
    return false;
}
int* selfDividingNumbers(int left,int right,int* returnSize)
{
   
    for(int i=left;i<=right;i++)
    {
        if(i%10==0) continue;
        if(ktra(i)==true) 
        {
            cout<<i<<' ';
        }
    }
    
}
