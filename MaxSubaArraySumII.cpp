using namespace std;
#include<bits/stdc++.h>
void solve(){
    long long n,a,b;
    cin>>n>>a>>b;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long> prefix(n);
    prefix[0]=arr[0];
    for(auto i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    multiset<long long> s;
    for(int l=0;l<n-(b-a);l++){

    }

}

int main(){
solve();
}
