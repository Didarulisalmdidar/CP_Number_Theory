#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long ans=0;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(i%k!=0)
                    ans+=i;
                if(i*i!=n)
                {
                    int p=n/i;
                    if(p%k!=0)
                        ans+=p;
                }
            }
        }
        cout<<ans<<endl;
    }
}

