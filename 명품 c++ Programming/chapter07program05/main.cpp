/* 7�� ��������5 ���ǵ�5
2���� ����� �߻�ȭ�� Matrix Ŭ������ �ۼ��ϰ�, show() ��� �Լ���
���� ������ �����ϵ��� �����ڸ� ��� �����϶�.
------------------------------------------------
Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
c = a + b;
a += b;
a.show(); b.show(); c.show();
if (a == c)
	cout << "a and c are the same" << endl;
------------------------------------------------
Matrix = { 3 5 7 9 }
Matrix = { 2 3 4 5 }
Matrix = { 3 5 7 9 }
a and c are the same
------------------------------------------------
(1) ������ �Լ��� Matrix�� ��� �Լ��� �����϶�.
(2) ������ �Լ��� Matrix�� ������ �Լ��� �����϶�.
*/
#include <iostream>

using namespace std;

class Matrix
{
private:
	int* data;
	int size;
public:
	Matrix(int index0 = 0, int index1 = 0, int index2 = 0, int index3 = 0)
	{
		this->size = 4;
		data = new int[size];
		data[0] = index0;
		data[1] = index1;
		data[2] = index2;
		data[3] = index3;
	}
	Matrix(const Matrix& mat)
	{
		this->size = mat.size;
		this->data = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->data[i] = mat.data[i];
		}
	}
	~Matrix()
	{
		cout << "matrix ������" << endl;
		delete[] data;
	}

	void show()
	{
		cout << "{ " << this->data[0] << ", "
			<< this->data[1] << ", "
			<< this->data[2] << ", "
			<< this->data[3] << " }" << endl;
	}
	
	Matrix& operator=(const Matrix& mat)
	{
		this->size = mat.size;
		this->data = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->data[i] = mat.data[i];
		}
		return *this;	// b = a �Ҷ��� �����̸�, b �� �ش��ϴ� �κ��� this�̴�.
						// ���� b(this)�� ��(value)�� �����Ǿ�� �Ѵ�.
						// ���� return type�� Matrix&�� �ƴ϶� Matrix�� ���, ���簡 �Ͼ��.
						//   -> �� ��� Matrix& b = a; �� ������ ������ ��
		                //      a�� ������� ������� ���ο� ��ü�� ���� ������ b�� �Ҵ��ϴ� ������ �Ͼ�Ƿ�
		                //      = �� �� �� ���� ���簡 �̷������. ���� ������ ������ �̷��� �����ϴ°��� ���ƻ� ���� �ʴ�.
		                //      ���� return type Matrix�� �����۵� �ϴ� �� ó�� ���̴���, return type Matrix& �� ���ִ°��� �Ǵ�.
	}
	Matrix operator+(const Matrix& mat)
	{
		Matrix temp;
		temp.size = mat.size;
		temp.data = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			temp.data[i] = this->data[i] + mat.data[i];
		}
		return temp;  // ���� this�� param�� �մ��� �ʰ� ���ο� ��ü�� ���������Ƿ�, valueŸ���� Matrix�� ����
					  //   -> ���� �Ű��� ��ü�� ���� ������ ��ƾ�� �� ��, temp �Ҹ��ڰ� �����.
	}
	Matrix& operator+=(const Matrix& mat)
	{
		this->size = mat.size;
		for (int i = 0; i < this->size; i++)
		{
			this->data[i] += mat.data[i];
		}
		return *this;  // this �� ���������Ƿ�, ����Ÿ�� ��ȯ (this ������ ��ȯ)
	}
	bool operator==(const Matrix& mat)
	{
		if (this->data[0] == mat.data[0]
			&& this->data[1] == mat.data[1]
			&& this->data[2] == mat.data[2]
			&& this->data[3] == mat.data[3])
			return true;

		return false;
	}
};

int main()
{
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b; // ������ �ִ� c�� ����, 
	a += b;
	a.show();
	b.show();
	c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}

/* <������ ��>
Matrix b = a;	// ���������

Matrix b;		// �⺻ ������
b = a;			// �����Ҵ翬����
*/
