#ifndef _COMPLEX_HPP_	//조건부 컴파일 지시자
#define _COMPLEX_HPP_	//매크로 상수
class Complex;	//클래스 Complex선언
Complex& operator++ (Complex& a);    //전위 증가연산자 함수 선언
Complex operator--(Complex& a,int x);  //후위 감소연산자 함수 선언
class Complex{		//Complex클래스
	double real, img;	//멤버변수선언
public:			//public
	Complex(double real = 0, double img = 0);   //생성자 선언
	friend Complex& operator++ (Complex& a);    //friend전위 증가연산자 함수 선언
    friend Complex operator--(Complex& a,int x);  //friend후위 감소연산자 함수 선언
	void show();	//멤버함수 선언
};			//클래스 끝
#endif			//조건부 컴파일 지시자 끝