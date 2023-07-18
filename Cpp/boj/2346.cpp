#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;
    vector<pair<int, int>> arr;

    for (int i = 1; i <= num; i++) {
        int a;
        cin >> a;
        arr.push_back(make_pair(i, a));
    }

    while (!arr.empty()) {
        cout << arr.front().first << ' ';
        int n = arr.front().second;
        arr.erase(arr.begin());

        if (arr.empty())
            return 0;

        if (n > 0) {
            for (int i = 0; i < n - 1; i++) {
                arr.push_back(arr.front());
                arr.erase(arr.begin());
            }
        } else {
            for (int i = 0; i < abs(n); i++) {
                arr.insert(arr.begin(), arr.back());
                arr.erase(arr.end() - 1);
            }
        }
    }

    return 0;
}