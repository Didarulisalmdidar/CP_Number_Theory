#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
long long getExp(long long a,long long b)
{
    if(b==0)
        return 1;
    if(b%2==0)
    {
        auto temp=getExp(a,b/2)%M;
        return(temp*temp)%M;
    }
    return (a*getExp(a,b-1)%M)%M;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
       int a,b;
        cin>>a>>b;
        cout<<getExp(a,b)<<endl;

    }
}

