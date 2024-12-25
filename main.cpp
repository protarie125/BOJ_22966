#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll N;
string mn_name;
ll mn_val = numeric_limits<ll>::max();

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N;
  while (0 < (N--)) {
    string s;
    ll v;
    cin >> s >> v;

    if (v < mn_val) {
      mn_val = v;
      mn_name = s;
    }
  }

  cout << mn_name;

  return 0;
}