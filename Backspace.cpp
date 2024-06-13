using namespace std;
#include<bits/stdc++.h>
int main(){
string a;
cin>>a;
stack<char> st;
for(auto &c:a){
    if(c=='<' && !st.empty()){
        st.pop();
    }else{
    st.push(c);
    }
}
string ans="";
while(!st.empty()){
    ans=st.top()+ans;
    st.pop();
}
cout<<ans;
return 0;
}
