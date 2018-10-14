#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    if(m == 0)
    {
        cout<<n<<" "<<n;
        return 0;
    }
    if(m == 1)
    {
        cout<<n-2<<" "<<n-2;
        return 0;
    }
    if(m == n*(n-1)/2)
    {
        cout<<"0 0";
        return 0;
    }
    ll mn=n,mx=0,a,b;
    a=n,b=m;
    a-=(2*b);
    if(a <= 0)
        mn=0;
    else mn=a;
    ll z=n;
    while(z*(z-1)/2 >= m)
    {
        z--;
    }
    mx=(n-z-1);
    cout<<mn<<" "<<mx;
    return 0;
}