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

// w�� �Է� ���� �� ¦���� ���� �� �ִ��� Ȯ�� �ϴ� ���� 

int main(int argc, char* argv[]) {
    int w = 0;
    cin >> w;
    cout << (w % 2 == 0 && w > 2 ? "YES" : "NO");
    return 0;
}