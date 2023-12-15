#include<bits/stdc++.h>
using namespace std;
const int MAX=1000000;
int phi[MAX+5];
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

}
int main()
{
    generatePhi();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<phi[n]<<endl;
    }

}

