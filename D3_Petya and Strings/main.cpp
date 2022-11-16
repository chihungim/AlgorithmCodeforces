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
#include <cstring>

using std::cin;
using std::cout;

void lowerCase(std::string& str) {
	for (auto& s : str) 
		s = tolower(s);
}

int main(int argc, char* argv[]) {
	std::string str1, str2;
	
	cin >> str1;
	cin >> str2;
	
	lowerCase(str1);
	lowerCase(str2);
	
	cout << strcmp(str1.c_str(), str2.c_str());
	
	return 0;
}