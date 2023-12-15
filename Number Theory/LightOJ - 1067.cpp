#include<bits/stdc++.h>
using namespace std;
const int M=1000003;
long long factorial[M];
void getFactorial()
{
    factorial[0]=1;
    for(int i=1;i<M;i++)
        factorial[i]=((i%M)*(factorial[i-1]%M))%M;
}
long long getExp(long long a,long b)
{
    if(b==0)
        return 1;
    if(b%2==0)
    {
        auto t=getExp(a,b/2)%M;
        return(t*t)%M;
    }
    return (a*getExp(a,b-1)%M)%M;
}

int main()
{
    getFactorial();
    int t;
    scanf("%d",&t);
    int tc=1;
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        cout<<"Case "<<tc<<": ";
        long long down=((factorial[k]%M)*(factorial[n-k]%M))%M;
        printf("%d\n",(factorial[n]*getExp(down,M-2))%M);
        tc++;

    }
}

