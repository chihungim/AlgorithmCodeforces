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
	std::string str;
	cin >> str;
	str[0] = toupper(str[0]);
	cout << str;
	
	return 0;
}