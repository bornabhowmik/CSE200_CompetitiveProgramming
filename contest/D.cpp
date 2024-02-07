#include <iostream>
using namespace std;

const int MOD = 1000000007;

long long sum_of_integers(int n) {
    return (1LL * n * (n + 1) / 2) % MOD;
}

long long product_of_integers(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result = (result * i) % MOD;
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    long long a = sum_of_integers(n);
    long long b = 1;
    for (int i = 0; i < n; ++i) {
        b = (1LL * b * n) % MOD;
    }
    long long c = product_of_integers(n);
    long long d = (2 * ((1LL << n) % MOD) + 3 * ((1LL * n * n) % MOD)) % MOD;

    cout << a << " " << b << " " << c << " " << d << endl;

    return 0;
}
