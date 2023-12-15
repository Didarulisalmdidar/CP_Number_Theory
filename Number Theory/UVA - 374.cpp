#include<bits/stdc++.h>
using namespace std;

long long getExp(long long a,long long b,long long  M)
{
    if(b==0)
        return 1;
    if(b%2==0)
    {
         auto temp=getExp(a,b/2,M)%M;
        return (temp*temp)%M;
    }
    else
        return (a*getExp(a,b-1,M)%M)%M;
}
int main()
{
   long long B,P,M;
   while(cin>>B>>P>>M){
   cout<<getExp(B,P,M)<<endl;
   }
}


