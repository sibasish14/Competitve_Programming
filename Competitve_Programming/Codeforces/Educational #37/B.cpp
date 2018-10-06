#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,last=1;
        cin>>n;
        int l[n],r[n];
        for(i=0;i<n;i++)
        {
            cin>>l[i]>>r[i];
        }
        for(i=0;i<n;i++)
        {
            if(l[i] <= last && last <= r[i])
            {
                cout<<last<<" ";
                last++;
            }
            else if(last <= l[i])
            {
                last=l[i];
                cout<<last<<" ";
                last++;
            }
            else cout<<"0 ";
        }
        cout<<"\n";
    }
    return 0;
}