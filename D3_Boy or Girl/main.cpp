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
	std::string input;
	cin >> input;
	std::sort(input.begin(), input.end());
	input.erase(std::unique(input.begin(), input.end()), input.end());

	if (input.length() % 2 != 0) {
		cout << "IGNORE HIM!";
	}
	else {
		cout << "CHAT WITH HER!";
	}
	return 0;
}