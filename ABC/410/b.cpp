#include <iostream>
using namespace std;

int main() {
     int n;
     int q;
     int x[q];
     int min = 0;
     int ans[q];
     cin >> n >> q;
     for (int i = 0; i < q; i++) {
        cin >> x[i];
        if (x[i] >= 1) {
            ans[i] = x[i];
        } else {
            if (ans[i] > ans[i + 1]) {
                min = i + 1;
            }
            ans[i] = min;
        }
     }
     for (int k = 0; k < q; k++) {
        cout << ans[k] << ' ';
     }
    return 0;
}