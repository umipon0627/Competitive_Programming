#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,q;
    cin >> n >> q;
    vector<int> box_counts(n, 0);
    vector<int> result;

    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;

        if (x >= 1) {
            box_counts[x-1]++;
            result.push_back(x);
        } else {
            int min_counts = box_counts[0];
            int min_box = 0;
            for (int j = 1; j < n; j++) {
                if (box_counts[j] < min_counts) {
                    min_counts = box_counts[j];
                    min_box = j;
                }
            }
            box_counts[min_box]++;
            result.push_back(min_box + 1);
        }
    }
    for (int k : result) {
        cout << k << ' ';
    }
    cout << endl;
    return 0;
}