/* 7장 연습문제5 난의도5
2차원 행렬을 추상화한 Matrix 클래스를 작성하고, show() 멤버 함수와
다음 연산이 가능하도록 연산자를 모두 구현하라.
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
(1) 연산자 함수를 Matrix의 멤버 함수로 구현하라.
(2) 연산자 함수를 Matrix의 프렌드 함수로 구현하라.
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
		cout << "matrix 삭제됨" << endl;
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
		return *this;	// b = a 할때의 연산이며, b 에 해당하는 부분이 this이다.
						// 따라서 b(this)의 값(value)만 수정되어야 한다.
						// 만약 return type이 Matrix&가 아니라 Matrix인 경우, 복사가 일어난다.
						//   -> 이 경우 Matrix& b = a; 의 동작을 수행할 시
		                //      a를 기반으로 만들어진 새로운 객체에 대한 참조를 b가 할당하는 현상이 일어나므로
		                //      = 을 할 때 마다 복사가 이루어진다. 따라서 문법은 맞지만 이렇게 구현하는것은 문맥상 옳지 않다.
		                //      따라서 return type Matrix가 정상작동 하는 것 처럼 보이더라도, return type Matrix& 을 해주는것이 옳다.
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
		return temp;  // 기존 this나 param을 손대지 않고 새로운 객체를 생성했으므로, value타입의 Matrix를 리턴
					  //   -> 새로 옮겨질 객체의 복사 생성자 루틴이 돈 뒤, temp 소멸자가 실행됨.
	}
	Matrix& operator+=(const Matrix& mat)
	{
		this->size = mat.size;
		for (int i = 0; i < this->size; i++)
		{
			this->data[i] += mat.data[i];
		}
		return *this;  // this 를 수정했으므로, 참조타입 반환 (this 포인터 반환)
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
	c = a + b; // 기존에 있던 c가 삭제, 
	a += b;
	a.show();
	b.show();
	c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}

/* <주의할 점>
Matrix b = a;	// 복사생성자

Matrix b;		// 기본 생성자
b = a;			// 복사할당연산자
*/
