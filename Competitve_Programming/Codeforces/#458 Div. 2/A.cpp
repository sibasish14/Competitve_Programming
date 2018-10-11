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
    int n,i,ans=INT_MIN;
    cin>>n;
    int z;
    for(i=0;i<n;i++)
    {
        cin>>z;
        if(z != (int)sqrt(z)*(int)sqrt(z))
            ans=max(ans,z);
    }
    cout<<ans;
    return 0;
}