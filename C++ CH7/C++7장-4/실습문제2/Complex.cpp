#include "Complex.hpp"	//헤더파일 include
#include <iostream>	//iostream include
using namespace std;	//std 이름고간에 선언된 모든 이름에 std 생략
Complex::Complex(double real,double img){   //생성자 정의
    this->real = real; this->img = img; //this를 통해 멤버변수 접근
    cout<<"복소수 "<<real<<"+ "<<img<<"j 생성"<<endl;//안내문 출력
}                   //생성자 정의 끝
Complex& operator++ (Complex& a){//전위 증가연산자함수 정의
    a.real++;       //객체a의 실수부 증가
    a.img++;        //객체a의 허수부 증가
    return a;       //객체a 반환
}                   //정의 끝
Complex operator-- (Complex& a,int x){//후위 감소연산자함수 정의
    a.real--;       //객체a의 실수부 감소
    a.img--;        //객체a의 허수부 감소
    return a;       //객체 a반환
}                   //정의 끝
void Complex::show(){	//멤버함수 정의
	cout<<real<<"+ "<<img<<"j"<<endl;//안내문 출력
}			//멤버함수 정의 끝