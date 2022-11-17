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
	int n;
	cin >> n;

	char* stones = new char[n];
	
	for (int i = 0; i < n; i++)
		cin >> stones[i];

	// r g b neighbor count
	// i , i + 1 = (r,g,b) �̶�� �̿��Ȱ��̴�!
	//���� i, i+1  (r,g,b) ��� ����� r �Ǵ� b �Ǵ� g�� �ִ³��� �������� cnt �� �����Ѵ�

	int cnt = 0;
	for (int i = 0; i < n - 1; i++) {
		if (stones[i] == stones[i + 1])
			cnt++;
	}
	cout << cnt << '\n';
}

