#include<bits/stdc++.h>
using namespace std;
const int MAX=2000000;
int phi[MAX+5];
long long step[MAX+5];
void generatePhi()
{
    for(int i=1;i<=MAX;i++)
        phi[i]=i;
    for(int i=2;i<=MAX;i++)
    {
        if(phi[i]==i)
        {
            for(int j=i;j<=MAX;j+=i)
                phi[j]-=phi[j]/i;
        }
    }
    step[2]=1;
    for(int i=3;i<=MAX;i++)
    {
        step[i]=step[phi[i]]+1;
    }

}
int main()
{
    generatePhi();
    step[1]=0;
    for(int i=2;i<=MAX;i++)
        step[i]+=step[i-1];
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<step[b]-step[a-1]<<endl;
    }

}

