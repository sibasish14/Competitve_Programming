#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll l,r,i;
    cin>>l>>r;
    cout<<"YES\n";
    for(i=l;i<r;i+=2)
        cout<<i<<" "<<i+1<<"\n";
    return 0;
}