// é��4 �ǽ�����1 ���ǵ�4 // ������ ����

#include <iostream>
#include "Color.h"

using namespace std;

int main()
{
	Color screenColor(255, 0, 0);	// �������� screenColor ��ü ����
	Color* p;						// ColorŸ���� ������ ���� p ����

	// (1) p�� screenColor�� �ּҸ� �������� �ڵ� �ۼ�
	p = &screenColor;

	// (2) p�� show()�� �̿��Ͽ� screenColor �� ���
	p->show();

	// (3) Color�� ������ �迭 colors ����, ���Ҵ� 3��
	Color colors[3];

	// (4) p�� Colors �迭�� ����Ű���� �ڵ� �ۼ�
	p = colors;

	// (5) p�� setColor()�� �̿��Ͽ� colors[0], colors[1], colors[2] ��
	//     ���� ����, �ʷ�, �Ķ��� �������� �ۼ�
	(p + 0)->setColor(255, 0, 0);
	(p + 1)->setColor(0, 255, 0);
	(p + 2)->setColor(0, 0, 255);

	// (6) p�� show()�� �̿��Ͽ� colors �迭�� ��� ��ü�� �� �����. for �� �̿�
	for (int i = 0; i < 3; i++)
	{
		(p + i)->show();
	}
}

/* ������
255 0 0
255 0 0
0 255 0
0 0 255

*/