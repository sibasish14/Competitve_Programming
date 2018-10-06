#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,d,t;
    cin>>n>>d>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(!((x+y) >= d && (x+y) <= (2*n-d)))
            cout<<"NO\n";
        else if(!((x-y) >= -d && (x-y) <= d))
            cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}