#include <iostream>
using namespace std;


int main() {
    int count = 0;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    for (int j = 0; j < n; j++) {
        if (a[j] >= k) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}