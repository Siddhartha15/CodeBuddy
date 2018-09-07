//Only the function is implemented

int Solution::findRank(string A) {
    int fact[56];
    int M=1000003;
    int ans=0;
    fact[0]=1;
    for(int i=1;i<56;i++)
    {
        fact[i]=(fact[i-1]*i)%M;
    }
    string str=A;
    int len=A.size(),j;
    sort(str.begin(),str.end());
    for(int i=0;i<len;i++)
    {
        int cnt=0;
        for(j=0;A[i]!=str[j];j++)
        {
            if(str[j]!='\0')
                cnt++;
        }
        str[j]='\0';
        ans=(ans+(cnt*fact[len-1-i])%M)%M;
    }
    return ans+1;
}
