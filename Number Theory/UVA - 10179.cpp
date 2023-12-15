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
int main()
{
    long long n;
    while(cin>>n && n)
    {
        cout<<phi(n)<<endl;
    }
}

