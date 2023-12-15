#include<bits/stdc++.h>
using namespace std;
const int maxx=100000000;
bool mark[maxx+5];
void sieve()
{
    long long cnt=0;
    mark[1]=true;
    for(int i=2;i*i<=maxx;i++)
    {
        if(!mark[i])
        {
            for(long long j=i*i;j<=maxx;j+=i)
                mark[j]=true;
        }
    }

    for(long long i=2;i<=maxx;i++)
    {
        if(!mark[i])
        {
            cnt++;
            if(cnt%100==1)
                cout<<i<<endl;
        }

    }
}
int main()
{
    sieve();
}

