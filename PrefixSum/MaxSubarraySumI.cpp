using namespace std;
#include<bits/stdc++.h>

void solve(){
   long long n;
   cin>>n;
   vector<long long > arr(n);
   for(auto &it:arr){
    cin>>it;
   }
   long long tot=INT_MIN;
   long long sum=0;
   for(int i=0;i<n;i++){
    sum+=arr[i];
    tot=max(sum,tot);
    if(sum<0){
            sum=0;
    }

    }
    cout<<tot;
}
int main(){
  solve();
  return 0;
}
