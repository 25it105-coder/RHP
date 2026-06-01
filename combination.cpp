#include <bits>
#include <stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int L = s.length();

    for (int ctr = 1; ctr < (1 << L); ctr++) {
        string combi = "";

        for (int sh = 0; sh < L; sh++) {
            if ((ctr & (1 << sh)) != 0) {
                combi += s[sh];
            }
        }

        cout << combi << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}