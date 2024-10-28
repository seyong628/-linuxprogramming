#ifndef _COMPLEX_HPP_	//조건부 컴파일 지시자
#define _COMPLEX_HPP_	//매크로 상수
class Complex;		//클래스 Complex선언
Complex ComplexAdd(Complex& a,Complex& b);//전역함수 선언
class Complex{		//Complex클래스
	double rPart, iPart;	//멤버변수선언
public:			//public
	Complex();	//생성자 선언
	Complex(double rPart,double iPart);//생성자 선언
	friend Complex ComplexAdd(Complex& a, Complex& b);//friend함수 선언
	void show();	//멤버함수 선언
};			//클래스 끝
#endif			//조건부 컴파일 지시자 끝

