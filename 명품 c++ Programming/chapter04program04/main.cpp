/* é��4 �ǽ�����4 ���ǵ�5
string Ŭ������ �̿��Ͽ� ����ڰ� �Է��� ���� �� ���� ���ڿ��� �Է¹ް� �Ųٷ�
����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�.)
>>> Delicious C++
~~
>>> I love programming
~~
>> exit
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = string();

	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�.)" << endl;

	cout << ">> ";
	getline(cin, str);

	while (str != "exit")
	{
		// reverse ���1
		//std::reverse(str.begin(), str.end());

		// reverse ��� 2
		char temp;
		int i = 0;
		int j = str.size() - 1;
		while (i < (str.size() / 2))
		{
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
			i++;
			j--;
		}

		cout << str << endl;

		//loop
		cout << ">> ";
		getline(cin, str);
	}
}