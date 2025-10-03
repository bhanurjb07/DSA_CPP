#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; i++) cin >> a[i];

        bool consecutive = true;
        for (int i = 1; i < m; i++) {
            if (a[i] != a[i-1] + 1) {
                consecutive = false;
                break;
            }
        }

        int ans;
        if (consecutive) {
            if (a[0] == 1) {
                ans = n - (m - 1);
            } else {
                ans = n - a.back() + 1;
            }
        } else {
            ans = 1;
        }

        cout << ans << "\n";
    }

    return 0;
}
