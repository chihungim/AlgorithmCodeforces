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

bool isVowel(const char& ch) {
	return ch == 'a' || ch == 'o' || ch == 'y' || ch == 'e' || ch == 'u' || ch == 'i';
}

void strToLower(std::string& str) {
	for (auto& ch : str)
		ch = tolower(ch);
}

int main(int argc, char* argv[]) {
	std::string input;
	cin >> input;
	strToLower(input);
	input.erase(std::remove_if(input.begin(), input.end(), isVowel),input.end());

	for (const auto& ch : input) {
		cout << ".";
		cout << ch;
	}

}