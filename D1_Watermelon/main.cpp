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

// w를 입력 받은 후 짝수로 나뉠 수 있는지 확인 하는 문제 

int main(int argc, char* argv[]) {
    int w = 0;
    cin >> w;
    cout << (w % 2 == 0 && w > 2 ? "YES" : "NO");
    return 0;
}