#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    int type, p, x;
    int index = 0;
    cin >> n >> q;

    vector <int> a(n, 0);
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    for (int j = 0; j < q; j++) {
        cin >> type;
        if (type == 1) {
            cin >> p >> x;
            a[(index + p - 1) % n] = x;
        } else if (type == 2) {
            cin >> p;
            cout << a[(index + p - 1) % n] << endl;
        } else if (type == 3) {
            cin >> p;
            index = (index + p) % n;
        }

    }

    return 0;
}