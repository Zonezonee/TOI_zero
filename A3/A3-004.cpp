#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> u(n), v(n);

    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        u[i] = x + y;
        v[i] = x - y;
    }

    // Find medians of u and v
    sort(u.begin(), u.end());
    sort(v.begin(), v.end());
    int median_u = u[n / 2];
    int median_v = v[n / 2];

    long long res = 0;
    for (int i = 0; i < n; ++i) {
        res += abs(u[i] - median_u) + abs(v[i] - median_v);
    }

    cout << res << '\n';
    return 0;
}