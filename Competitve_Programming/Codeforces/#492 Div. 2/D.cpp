#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,ans=0,i,j;
	cin>>n;
	ll a[2*n+10];
	for(i=0;i<2*n;i++)
		cin>>a[i];
	for(i=0;i<2*n;i++)
	{
		ll ind=0;
		for(j=i+1;j<2*n;j++)
		{
			if(a[j] == a[i])
			{
				ind=j;
				break;
			}
		}
		for(j=ind;j>i+1;j--)
		{
			swap(a[j],a[j-1]);
			ans++;
		}
		i++;
	}
	cout<<ans;
	return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double ld;

// int niz[1000];

// int main(){
//     ios_base::sync_with_stdio(false);
//     cout.precision(10);
//     cout<<fixed;

//     int n;
//     cin >> n;
//     n *= 2;
//     for(int i=1; i<=n; i++) cin >> niz[i];
//     int l=1;
//     int brs=0;
//     while(l < n){
//         int p = niz[l];
//         int poz;
//         for(int j=l+1; j<=n; j++){
//             if(niz[j] == p){poz = j; break;}
//         }
//         for(int j=poz; j>l+1; j--){
//             swap(niz[j], niz[j-1]);
//             brs++;
//         }
//         l += 2;
//     }
//     cout << brs;
//     return 0;
// }