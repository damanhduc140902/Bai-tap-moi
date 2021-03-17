bool* isHigher(int* arr,int num,int thres)
{
    bool* b=new bool[num];
    for(int i=0;i<num;i++)
    {
        if(arr[i]>=thres) b[i]=true;
        else b[i]=false;
    }
    return b;
}
