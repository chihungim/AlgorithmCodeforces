#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cassert>
#include <set>

using std::cin;
using std::cout;

/* »ý°¢
* 
* 
* 
*/

int main(int argc, char* argv[]) {
    int k, n;
    cin >> k >> n;

    std::vector<int> contestants(k);

    for (auto& cont : contestants)
        cin >> cont;

    int s = contestants[n - 1];
    int cnt = 0;
    for (int i = 0; i < k; i++) {
        if (s > contestants[i]) break;
        if (!contestants[i]) continue;
        cnt++;
    }

    cout << cnt;

    return 0;
}