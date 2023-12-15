#include<bits/stdc++.h>
using namespace std;
const int maxx=10000000;
bool mark[maxx+5];
void sieve()
{
    mark[1]=true;
    for(int i=2;i*i<=maxx;i++)
    {
        if(!mark[i])
        {
            for(long long j=i*i;j<=maxx;j+=i)
                mark[j]=true;
        }
    }
}
int main()
{
    sieve();
    long long n;
    cin>>n;
    while(n--)
    {
        long long a;
        cin>>a;
        long long p=sqrt(a);
        if(mark[p]==false && p*p==a)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}

