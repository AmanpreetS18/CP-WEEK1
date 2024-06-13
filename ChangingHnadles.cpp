using namespace std;
#include<bits/stdc++.h>
void solve(){
    int n;
    cin>>n;
    set<string> accept,reject;
    map<string,string> mp;
    vector<pair<string,string>> ans;
    for(int i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        mp[a]=b;
        if(accept.find(a)==accept.end() && reject.find(a)==reject.end()){
            accept.insert(a);
            reject.insert(b);
        }else{
        reject.insert(b);
        }
    }

    for(auto s:accept){
        string check=mp.find(s)->second;
        auto it=mp.find(check);
        while(it!=mp.end()){
            check=it->second;
            it=mp.find(check);
        }
        ans.push_back({s,check});

    }
     cout<<ans.size()<<endl;
    for(auto &it:ans)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main(){
solve();
}
