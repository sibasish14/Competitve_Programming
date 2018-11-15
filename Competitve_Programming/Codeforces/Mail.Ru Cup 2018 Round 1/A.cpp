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
    int x,y,z,a,b,c;
    cin>>x>>y>>z>>a>>b>>c;
    int stair=(abs(x-y))*a;
    int elev=0;
    if(z != x)
        elev=(abs(x-z))*b;
    elev+=(3*c+(abs(x-y))*b);
    if(elev <= stair)
        cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}