#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,m,k,x=0,y=0,r=0,c=0;
    cin>>n>>m>>k;
    if(k <= n-1)
        cout<<k+1<<" 1\n";
    else if(k <= n+m-2)
        cout<<n<<" "<<k-n+2<<"\n";
    else
    {
        y=(k-(n+m-2))/(m-1);
        if((k-(m+n-2))%(m-1) == 0 && y%2 == 1)
        {
            y--;
            c=2;
        }
        else if((k-(m+n-2))%(m-1) == 0 && y%2 == 0)
        {
            y--;
            c=m;
        }
        r=n-y-1;
        x=(k-(n+m-2))%(m-1);
        // cout<<y<<" "<<x<<"\n";
        if(y%2 == 0 && c==0)
            c=m-x+1;
        else if(y%2 == 1 && c==0)
            c=x+1;
        cout<<r<<" "<<c<<"\n";
    }
    return 0;
}