#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll x,y,z;
    cin>>x>>y;
    if(y == 0 || (y == 1 && x != 0))
    {
        cout<<"No";
        return 0;
    }
    z=x-y+1;
    if(z%2 == 0 && z >= 0)
        cout<<"Yes";
    else cout<<"No";
    return 0;
}