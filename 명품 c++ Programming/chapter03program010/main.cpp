/* é��3 �ǽ�����10 ���ǵ�7
��ǻ���� �� �����ġ�� �𵨸��ϴ� Ram�� ...
*/

#include <iostream>
#include "Ram.h"

using namespace std;

int main()
{
	Ram ram;
	ram.write(100, 200); // 100������ 20 ����
	ram.write(101, 30); // 101������ 30 ����
	char res = ram.read(100) + ram.read(101); // 20 + 30 = 50
	ram.write(102, res);
	cout << "102������ ��" << (int)ram.read(102) << endl;
}


