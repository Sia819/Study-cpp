/* é��4 ������_�ǽ�����3 ���ǵ�4

string Ŭ������ �̿��Ͽ� ��ĭ�� �����ϴ� ���ڿ��� �Է¹ް� ���ڿ����� 'a'�� �
�ִ��� ����ϴ� ���α׷��� �ۼ��غ���.

���ڿ� �Է�>> Are you happy? I am so happy.
���� a�� 3�� �ֽ��ϴ�.

(1) ���ڿ� 'a'�� ã�� ���� string Ŭ������ ��� at()�� []�� �̿��Ͽ� �ۼ��϶�.
(2) ���ڿ� 'a'�� ã�� ���� string Ŭ������ find() ��� �Լ��� �̿��Ͽ� �ۼ��϶�.
    text.find('a', index); �� text ���ڿ��� index ��ġ���� 'a'�� ã�� ���ڿ� �� �ε����� �����Ѵ�.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // string Ŭ���� ����
    string str;

    // ����ڷκ��� ���ڿ� �Է�
    cout << "���ڿ� �Է�>> ";
    cin >> str;

    // ������ ������ ã�´�.
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str.at(i) == 'a')
            count++;
    }
    
    // ������ ������ ����Ѵ�.
    cout << "���� a�� " << count << endl;
}