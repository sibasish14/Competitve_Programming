#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        if((n-1)%x == 0 && (m-1)%y == 0 && (n-1) >= 0 && (m-1) >= 0)
            cout<<"Chefirnemo\n";
        else if((n-2)%x == 0 && (m-2)%y == 0 && (n-2) >= 0 && (m-2) >= 0)
            cout<<"Chefirnemo\n";
        else cout<<"Pofik\n";
    }
    return 0;
}