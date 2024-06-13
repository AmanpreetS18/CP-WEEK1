using namespace std;
#include<bits/stdc++.h>
void solve(){
    int w,h,n;
    cin>>w>>h>>n;
    while(n--){
        char c;
        int d;
        cin>>c>>d;
        if(c=='H'){
                if(d>h ){
                    cout<<h*w<<endl;
                }else{
            h=max(h-d,h-(h-d));
            cout<<h*w<<endl;
                }


        }else{
            if(d>w ){
                cout<<w*h<<endl;
            }else{
            w=max(w-d,w-(w-d));
            cout<<w*h<<endl;
            }

        }
    }
}
int main(){
    solve();
}
