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
* n by 3 ��Ŀ��� �� ���� (�Է��� 0�� 1�θ� �̷����)1�� ������ 2���� �Ѿ ����� ������ ���ϴ� ����
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