/* é��4 �ǽ�����3 ���ǵ�5
string Ŭ������ �̿��Ͽ� ����ڰ� �Է��� ���� �� ���� �Է� �ް�
���� �ϳ��� �����ϰ� �����Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.

�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�.)
>> Falling in love with you

>> hello world

*/

#include <iostream>
#include <string>
#include <random>

using namespace std;

int main()
{
	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�.)" << endl;

	string str = "123";

	cout << ">> ";
	getline(cin, str);

	while (str != "exit")
	{
		// gen random number
		srand((unsigned)time(NULL));
		// 0 ~ ��Ʈ�� ������ �� ���� ��������
		int ranLocation = rand() % str.size();
		// 'a' ~ 'z' ������ ���� ĳ���� ����
		char ranChar = (rand() % ('z' - 'a')) + 'a';
		// ������ ��ġ�� ������ ĳ���͸� ����
		str[ranLocation] = ranChar;

		cout << str << endl;
		
		// loop
		cout << ">> ";
		getline(cin, str);
	}
}

