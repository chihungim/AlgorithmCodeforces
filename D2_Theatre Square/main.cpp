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

int main(int argc, char* argv[]) {
	double n, m, a;
	cin >> n >> m >> a;
	cout << std::fixed;
	cout.precision(0);
	cout << ceil(n / a) * ceil(m / a);
	return 0;
}