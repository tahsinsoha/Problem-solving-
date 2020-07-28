#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#define Find order_of_key
#define at find_by_order
#define x first
#define y second
#define ll long long
#define pii pair<int,int>
#define pb push_back
#define all(x) x.begin(),x.end()
#define endl '\n'


int main()
{
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		ll an=-1;
		cin>>n>>k;
		ll l=1,r=1000000000000000000LL;
		while(l<=r){
			ll mid=(l+r)>>1LL;
			ll val=mid-(mid/n);
			if(val==k){
				an=mid;
				break;
			}else if(val>k){
				r=mid-1;
			}else{
				l=mid+1;
			}
		}
		if(an%n==0)an--;
		cout<<an<<endl;
	}
	return 0;
}
