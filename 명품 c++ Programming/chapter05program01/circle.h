#pragma once

/// <summary>
/// Circle 객체
/// </summary>
class Circle
{
private:
	int radious;
public:
	/// <summary>
	/// 생성자
	/// </summary>
	Circle();
	/// <summary>
	/// 반지름을 리턴
	/// </summary>
	/// <returns>반지름</returns>
	int getRadious();

	void setRadious(int radious);
};