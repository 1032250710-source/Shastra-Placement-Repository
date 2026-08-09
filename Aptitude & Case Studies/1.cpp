#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int cnt1 = 0; 
        int cnt2 = 0; 
        for (int i = 0; i < n; i++) {
            int p = a[i] % 2;
            if (p != (i % 2))
                cnt1++;
            if (p != (1 - (i % 2)))
                cnt2++;
        }
        cout << min(cnt1, cnt2) << endl;
    }
    return 0;
}