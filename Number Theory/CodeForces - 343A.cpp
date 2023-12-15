#include<bits/stdc++.h>
using namespace std;
long long cnt;
long long step(long long a,long long b)
{
  //cout<<a<<" "<<b<<endl;
    if(a==0)
        return cnt;
    cnt+=(b/a);
    return step(b%a,a);

}
int main()
{
    long long a,b;
    cin>>a>>b;
    long long ans=step(a,b);
    cout<<ans<<endl;
    //cnt=0;
    //main();
    //main();
}

