#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll cursum=0,dessum=0,c=0;
    for(ll i=0;i<n;i++){
        cursum=cursum+arr[i];
        if(cursum==dessum){
            cout<<"YES"<<endl;
            c++;
        }
    }
    if(c==0){
        cout<<"NO"<<endl;
    }

	// your code goes here
	return 0;
}
