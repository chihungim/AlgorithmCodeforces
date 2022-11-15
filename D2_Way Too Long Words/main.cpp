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
* n개의 글자를 입력받고
* 10자 이상의 글자가 들어왔을 때 
* 첫글자와 마지막 글자를 제외하고 특수한 약어(a special abbreviation)로 바꿈
* 특수한 약어의 규칙은
* 첫글자와 끝자를 제외한 숫자의 개수임
* localization -> l10n
*/
int main(int argc, char* argv[]) 
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		std::string word;
		cin >> word;
		if (word.length() > 10) 
		{
			cout << word[0] << word.length() - 2 << word[word.length() - 1] << '\n';
		}
		else 
		{
			cout << word << '\n';
		}
		
	}
}