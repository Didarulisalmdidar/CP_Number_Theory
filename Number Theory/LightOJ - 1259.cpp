#include<bits/stdc++.h>
using namespace std;
const int maxx=10000000;
bool mark[maxx+5];
vector<long long>v;
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
    for(long long i=2;i<=maxx;i++)
    {
        if(!mark[i])
            v.push_back(i);
    }
}
int main()
{
    sieve();
    int n;
    cin>>n;
    int cs=1;
    while(n--)
    {
        int a;
        cin>>a;
        cout<<"Case "<<cs<<": ";
        long long cnt=0;
        for(long long i=0;v[i]<=(a/2);i++)
        {
            if(!mark[a-v[i]])
                cnt++;
        }
        cout<<cnt<<endl;
        cs++;

    }
}

