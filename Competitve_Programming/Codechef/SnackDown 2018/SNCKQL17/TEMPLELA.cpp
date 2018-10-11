#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int s;
    cin>>s;
    while(s--)
    {
        int n,i,f=1;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        if(n%2 == 0)
            cout<<"no\n";
        else if(a[0] != 1 || a[n-1] != 1)
            cout<<"no\n";
        else
        {
            for(i=1;i<=n/2;i++)
            {
                if(a[i] != a[i-1]+1)
                {
                    f=0;
                    cout<<"no\n";
                    break;
                }
            }
            if(!f)
                continue;
            for(i=n/2+1;i<n;i++)
            {
                if(a[i] != a[i-1]-1)
                {
                    f=0;
                    cout<<"no\n";
                    break;
                }
            }
            if(!f)
                continue;
            cout<<"yes\n";
        }
    }
    return 0;
}