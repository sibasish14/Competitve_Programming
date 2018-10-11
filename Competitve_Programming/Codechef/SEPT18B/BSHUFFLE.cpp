#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,j,k;
    cin>>n;
    if(n == 1)
        cout<<"1"<<"\n"<<"1";
    else if(n == 2)
        cout<<"1 2"<<"\n"<<"2 1";
    else if(n == 3)
        cout<<"2 3 1"<<"\n"<<"3 1 2";
    else
    {
        int z=((n%2)?(n/2+1):n/2);
        int y=z;
        z-=2;
        cout<<"2 ";
        for(i=0,j=3;i<z;i++,j++)
            cout<<j<<" ";
        cout<<"1 ";
        int x=n-y;
        x-=2;
        k=j;
        j++;
        cout<<j<<" ";
        j++;
        for(i=0;i<x;i++,j++)
            cout<<j<<" ";
        cout<<k<<"\n";
        cout<<n<<" ";
        for(i=1;i<=n-1;i++)
            cout<<i<<" ";
    }
    return 0;
}