using namespace std;
#include<bits/stdc++.h>
void solve()
{
    int n;
    cin>>n;
    vector<int> s(n),f(n);
    for(auto &it:s) cin>>it;
    for(auto &it:f) cin>>it;
    vector<int> complete;
    for(int i=0;i<n;i++){
        if(i==0 || s[i]>f[i-1]){
            complete.push_back(f[i]-s[i]);
        }else{
            complete.push_back(f[i]-f[i-1]);
        }
    }
    for(auto &i:complete){
        cout<<i<<' ';
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }


}
