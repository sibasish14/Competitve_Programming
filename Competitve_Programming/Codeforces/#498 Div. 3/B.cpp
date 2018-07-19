#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,ans=0,i,j,z;
    cin>>n>>k;
    ll a[n],b[n],chk[n];
    for(i=0;i<n;i++)
    {   
        cin>>a[i];
        b[i]=a[i];
    }
    memset(chk,0,sizeof(chk));
    sort(b,b+n);
    vector<pair<int,int> > v;
    vector<int> ind;
    z=k;
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            if(b[i] == a[j] && !chk[j])
            {
                v.push_back({b[i],j});
                ind.push_back(j+1);
                chk[j]=1;
                z--;
                break;
            }
        }
        if(!z)
            break;
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(i=0;i<k;i++)
        ans+=v[i].first;
    cout<<ans<<"\n";
    sort(ind.begin(),ind.end());
    for(i=0;i<k-1;i++)
    {
        if(i==0)
            cout<<ind[i]<<" ";
        else
        {
            cout<<ind[i]-ind[i-1]<<" ";
        }
    }
    if(k==1)
        cout<<n;
    else
        cout<<n-ind[k-2];
	return 0;
}
