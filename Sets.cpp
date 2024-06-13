#include <bits/stdc++.h>
using namespace std;

void Solve(int y, int x, set<int> &st, vector<string> &ans) {
    switch (y) {
        case 1:
            st.insert(x);
            break;
        case 2:
            st.erase(x);
            break;
        case 3:
            if (st.find(x) != st.end()) {
                ans.push_back("Yes");
            } else {
                ans.push_back("No");
            }
            break;
    }
}

int main() {
    int Q;
    cin >> Q;
    set<int> st;
    vector<string> ans;

    while (Q--) {
        int y, x;
        cin >> y >> x;
        Solve(y, x, st, ans);
    }

    for (const auto &it : ans) {
        cout << it << endl;
    }

    return 0;
}
