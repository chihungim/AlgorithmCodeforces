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
* n���� ���ڸ� �Է¹ް�
* 10�� �̻��� ���ڰ� ������ �� 
* ù���ڿ� ������ ���ڸ� �����ϰ� Ư���� ���(a special abbreviation)�� �ٲ�
* Ư���� ����� ��Ģ��
* ù���ڿ� ���ڸ� ������ ������ ������
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