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

/* Ǯ�� 
* 5by5 ��Ŀ��� 1�� ����� �ű�� ��츦 ���ϴ� ���� 
* ������ ����ü�� ����ü�� ���� swap �ذ��� �ű�
 */

int main(int argc, char* argv[]) {
	
	int r = 0, c = 0;
	int input = 0;

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			cin >> input;
			if (input == 1) {
				r = i;
				c = j;
			}
		}
	}

	int cr = 3, cc = 3;
	int step = abs(cr - r)+abs(cc - c);
	cout << step << '\n';
	return 0;
}