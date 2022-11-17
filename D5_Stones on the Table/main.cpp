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
	// i , i + 1 = (r,g,b) 이라면 이웃된것이다!
	//만약 i, i+1  (r,g,b) 라면 가운데애 r 또는 b 또는 g를 넣는나는 가정으로 cnt 를 가산한다

	int cnt = 0;
	for (int i = 0; i < n - 1; i++) {
		if (stones[i] == stones[i + 1])
			cnt++;
	}
	cout << cnt << '\n';
}

