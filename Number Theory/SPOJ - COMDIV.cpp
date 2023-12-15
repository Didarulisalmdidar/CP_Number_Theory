#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int gc=__gcd(a,b);
        int cnt=0;
        for(int i=1;i*i<=gc;i++)
        {
            if(gc%i==0){
                cnt++;
            if(i*i!=gc)
                cnt++;
            }

        }
        printf("%d\n",cnt);
    }
}


