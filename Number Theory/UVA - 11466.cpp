#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n && n)
    {
        if(n<0)
            n*=-1;
        long long mx=-1;
        long long cnt=0;
        for(long long i=2;i*i<=n && n!=1;i++)
        {
            if(n%i==0){
            cnt++;
            mx=i;
            while(n%i==0){
                n/=i;
            }

            }
        }
        if(n>1)
        {
            mx=n;
            cnt++;
        }
        if(cnt==1)
            cout<<"-1"<<endl;
        else
            cout<<mx<<endl;

    }
}

