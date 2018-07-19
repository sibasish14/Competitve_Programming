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
        int n,cnt=0,i;
        cin>>n;
        if(n%2)
            cnt=n/2+1;
        else
            cnt=n/2;
        n-=cnt;
        cout<<"1 1";
        for(i=1;i<=n;i++)
            cout<<"0";
        cout<<"\n";
    }
	return 0;
}
