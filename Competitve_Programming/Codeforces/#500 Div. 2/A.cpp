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
    int a[n],b[n];
    int sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum1+=a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        sum2+=b[i];
    }
    if(sum2 <= sum1)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
