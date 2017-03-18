#include <iostream>
#include <cmath>
using namespace std;

typedef unsigned long long ull;
typedef long double ld;

int main() {
  ull n, m;
  cin >> n >> m;
  
  if (m >= n) {
    cout << n << "\n";
  } else {
    // d must be double (loss of precision)
    ld d = 1 + 8 * (n - m);
    ld days = (-1 + sqrt(d)) / 2;
    ull answer = ceil(days) + m;
    cout << answer << "\n";
  }
}
