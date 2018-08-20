#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,f=1;
        string s;
        cin>>n>>s;
        for(i=0,j=n-1;i<n/2;i++,j--)
        {
            if(abs(s[i]-s[j]) > 2 || abs(s[i]-s[j]) == 1)
            {
                cout<<"NO\n";
                f=0;
                break;
            }
        }
        if(f)
            cout<<"YES\n";
    }
    return 0;
}