#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    vector<int> lanterns(n);
    for (int i = 0; i < n; ++i) {
        cin >> lanterns[i];
    }

    sort(lanterns.begin(), lanterns.end());

    int max_distance = max(lanterns[0], l - lanterns[n - 1]);

    for (int i = 1; i < n; ++i) {
        max_distance = max(max_distance, lanterns[i] - lanterns[i - 1]);
    }

    double min_radius = static_cast<double>(max_distance) / 2;

    cout << fixed << setprecision(10) << min_radius << endl;

    return 0;
}
