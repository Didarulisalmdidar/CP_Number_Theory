#include<bits/stdc++.h>
using namespace std;
const int maxx=10000000;
bool mark[maxx+5];
vector<long long>v;
vector<long long>vec[10002];
void sieve()
{
    for(long long i=2;i*i<=maxx;i++)
    {
        if(!mark[i])
        {
            for(long long j=i*i;j<=maxx;j+=i)
                mark[j]=true;
        }
    }
    for(long i=2;i<=maxx;i++)
    {
        if(!mark[i])
            v.push_back(i);
    }
}
void nod(){
    for(long long i=1;i*i<=10000000000LL;i++)
    {
        long long ans=1;
        long long p=i;
        for(long long j=0;v[j]*v[j]<=p;j++)
        {
            long long cnt=0;
            if(p%v[j]==0)
            {
                while(p%v[j]==0)
                {
                    p/=v[j];
                    cnt++;
                }
            }
            ans*=(cnt+cnt+1);
        }
        if(p>1)
            ans*=3;
        vec[ans].push_back(i*i);

    }
}

int main()
{
    sieve();
    nod();
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,k;
        scanf("%lld %lld %lld",&k,&a,&b);
        long long low=lower_bound(vec[k].begin(),vec[k].end(),a)-vec[k].begin();
        long long up=upper_bound(vec[k].begin(),vec[k].end(),b)-vec[k].begin();
        //cout<<low<<" "<<up<<endl;
        printf("%lld\n",up-low);


    }
}

