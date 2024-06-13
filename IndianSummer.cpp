
using namespace std;
#include<bits/stdc++.h>
void solve(){

int n;
cin>> n;
vector<pair<string,string>> st;
for(int i=0;i<n;i++){
        string x,y;
    cin>>x>>y;

    st.push_back({x,y});
}
sort(st.begin(),st.end());
st.resize(unique(st.begin(),st.end())-st.begin());
cout<<st.size()<<endl;
}
int main(){

solve();
}
