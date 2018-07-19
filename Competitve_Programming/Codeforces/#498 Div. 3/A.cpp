#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i;
    cin>>n;
    ll a[n+10];
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
    {
        if(a[i]%2 == 0)
            a[i]--;
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
	return 0;
}
