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
#include <cstring>

using std::cin;
using std::cout;

/* »ý°¢
* 
* 
* 
*/


int main(int argc, char* argv[]) {
    int x = 0;
    int n;
    cin >> n;

    std::string cmd;
    for (int i = 0; i < n; i++) {
        cin >> cmd;
        if (strchr(cmd.c_str(), '+')) {
            x++;
        }
        else {
            x--;
        }
    }
    cout << x << '\n';

    return 0;
}