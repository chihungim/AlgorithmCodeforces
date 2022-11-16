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

/* 
* 단순한 정렬 문제
* 
*/

using std::cin;
using std::cout;

int main(int argc, char* argv[]) {
	std::string summans;
	std::vector<int> nums;
	cin >> summans;
	for (const auto& s : summans)
		if(s != '+')
			nums.push_back(s-'0');

	std::sort(nums.begin(), nums.end());

	for (int i =0; i<nums.size(); i++) {
		cout << nums[i];
		if (i != nums.size()-1)
			cout << "+";
	}
}