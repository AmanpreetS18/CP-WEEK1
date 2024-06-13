using namespace std;
#include<bits/stdc++.h>
void solve(){
      long long int n;
      long long int ans=0;
      cin>>n;
     vector<pair<long long int,long long int>> arr(n);
      for(int i=0;i<n;i++){
        long long int ele;
        cin>>ele;
        arr[i]={ele,i+1};
      }
      sort(arr.begin(),arr.end());
      for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            long long int prod=arr[i].first*arr[j].first;
            if(prod==arr[i].second+arr[j].second) ans++;
            if(prod>2*n) break;
        }
      }
      cout<<ans<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
