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

/* 
* n by 3 행렬에서 각 행의 (입력을 0과 1로만 이루어짐)1의 개수가 2개를 넘어갈 경우의 개수를 구하는 문제
*/

int main(int argc, char* argv[]) {
	int n, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int solve = 0;
		int decision = 0;
		for (int j = 0; j < 3; j++) {
			cin >> solve;
			if (solve) ++decision;
		}
		if (decision >= 2)
			ans++;
	}
	cout << ans << '\n';
}