#include "Complex.hpp"	//헤더파일 include
#include <iostream>	//iostream include
using namespace std;	//std 이름고간에 선언된 모든 이름에 std 생략
Complex Complex::operator*(Complex op2){    //*연산자 멤버함수 정의
    Complex tmp;    //생성자 선언
    tmp.real = (this->real * op2.real) - (this->img * op2.img);//tmp.real에 op1과op2의 곱한 값의 실수부 저장
    tmp.img = (this->img * op2.real) + (this->real * op2.img);//tmp.img에 op1과op2의 곱한 값의 허수부 저장
    return tmp; //객체 tmp 반환
}               //멤버함수 정의 끝
void Complex::show(){	//멤버함수 정의
	cout<<real<<"+"<<img<<"j"<<endl;//안내문 출력
}			//멤버함수 정의 끝
