// similar to 2 pointers problem

int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int sum=0,ans=0,minlen=INT_MAX,len=0,j,i;
    for(int k=0;k<=A.size()-3;k++)
    {
        i=k+1;
        j=A.size()-1;
        while(i<j)
        {
            sum=A[i]+A[j]+A[k];
            len=abs(sum-B);
            if(len<minlen)
            {
                minlen=len;
                ans=sum;
            }
            if(sum<=B)
            {
                i++;
            }
            else
                j--;
        }
    }
    return ans;
}
