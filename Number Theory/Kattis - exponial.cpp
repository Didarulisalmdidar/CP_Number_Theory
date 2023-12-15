#include<bits/stdc++.h>
using namespace std;
long long phi(long long n)/// TC - ((SQRT(N)LOGN)
{
    long long res=n;
    for(long long i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
                n/=i;
            res-=res/i;
        }
    }
    if(n>1)
        res-=res/n;
    return res;
}
long long getExp(long long a,long long b,long long M)
{
    if(b==0)
        return 1;
    if(b%2==0)
    {
        auto temp=getExp(a,b/2,M)%M;
        return (temp*temp)%M;
    }
    return (a*getExp(a,b-1,M)%M)%M;
}
int main()
{
    long long n,k;
    cin>>n>>k;
    long long p=phi(k);
    long long b=0;
    long long ans;
    for(long long i=1;i<=n;i++)
    {
        b=(b%p)+p;
        ans=getExp(i,b,k);
        b=ans;
        //cout<<i<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
    //main();
}

