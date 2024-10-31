#ifndef _COMPLEX_HPP_	//조건부 컴파일 지시자
#define _COMPLEX_HPP_	//매크로 상수
class Complex{		//Complex클래스
	double real, img;	//멤버변수선언
public:			//public
	Complex(double real = 0, double img = 0){   //생성자 선언
        this->real = real; this->img = img; //this를 통해 멤버변수 접근
    }           //생성자 선언 끝
	Complex operator+ (Complex op2);    //+연산자 함수 선언
	void show();	//멤버함수 선언
};			//클래스 끝
#endif			//조건부 컴파일 지시자 끝