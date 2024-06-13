#include<bits/stdc++.h>
using namespace std;

void solve(){
int n;
cin>>n;
map<string, vector<int>>mp;
for(int i=0;i<n;i++){
string city;
cin>>city;
int year;
cin>>year;
mp[city].push_back(year);
}
for(auto &x:mp){

sort(x.second.begin(),x.second.end());
}
int q;
cin>>q;
while(q--){
string city;cin>>city;
int k;cin>>k;
if(mp.find(city)==mp.end() || k>mp[city].size()){
cout<<-1<<endl;
}
else{
cout<<mp[city][k-1]<<endl;
}
}

}
int main(){
solve();
}
