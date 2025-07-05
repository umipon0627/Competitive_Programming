#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> box_counts(n + 1, 0);  // 箱のボール数（1-indexed）
    vector<int> result;                // 出力用：どの箱に入れたか

    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;

        if (x >= 1) {
            box_counts[x]++;
            result.push_back(x);
        } else {
            // ボール数最小の箱を探す
            int min_count = box_counts[1];
            int min_box = 1;

            for (int j = 2; j <= n; j++) {
                if (box_counts[j] < min_count) {
                    min_count = box_counts[j];
                    min_box = j;
                }
            }

            box_counts[min_box]++;
            result.push_back(min_box);
        }
    }

    // 出力
    for (int v : result) {
        cout << v << ' ';
    }
    cout << endl;

    return 0;
}
