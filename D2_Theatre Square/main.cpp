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

// nxm 직사각형을 axa 정사각형으로 덮는 문제

int main(int argc, char* argv[]) {
	double n, m, a;
	cin >> n >> m >> a;
	cout << std::fixed;
	cout.precision(0);
	cout << ceil(n / a) * ceil(m / a);
	return 0;
}