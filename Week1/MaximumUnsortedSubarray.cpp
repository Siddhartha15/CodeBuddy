vector<int> Solution::subUnsort(vector<int> &A)
{
    int n=A.size(),L=-1,R=-1,mx=0,mn=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        if(A[i]>A[i+1])
        {
            if(L==-1)
                L=i;
            R=i+1;
        }
    }
    if(L ==-1)
    {
        vector <int>v;
        v.push_back(-1);
        return v;
    }
    for(int i=L;i<=R;i++)
    {
        mn=min(mn,A[i]);
        mx=max(mx,A[i]);
    }
    for(int i=0;i<L;i++)
    {
        if(A[i]>mn)
         {
             L=i;
             break;
         }
    }
    for(int i=n-1;i>R;i--)
    {
        if(A[i]<mx)
         {
             R=i;
             break;
         }
    }
    vector<int> v;
    v.push_back(L);
    v.push_back(R);
    return v;
}
