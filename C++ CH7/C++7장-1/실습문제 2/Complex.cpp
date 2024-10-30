#include "Complex.hpp"	//헤더파일 include
#include <iostream>	//iostream include
using namespace std;	//std 이름고간에 선언된 모든 이름에 std 생략
Complex ComplexManager::ComplexAdd(Complex& a,Complex& b){//멤버함수 정의
	Complex sum;	//sum 객체 생성
	sum.rPart = a.rPart + b.rPart;	//sum에 rPart멤버변수에 a,b의 rPart를 더한값
	sum.iPart = a.iPart + b.iPart;	//sum에 iPart멤버변수에 a,b의 iPart를 더한값
	return sum;	//sum 반환
}			//멤버함수 정의 끝
Complex::Complex():Complex(0,0){}	//생성자 정의
Complex::Complex(double rPart, double iPart){//생성자 정의
	this->rPart = rPart; this->iPart = iPart;//this를 통해 멤버함수 연결
	cout<<"복소수 "<<rPart<<"+"<< iPart<<"j 생성"<<endl;//안내문 출력
}			//생성자 정의 끝
void Complex::show(){	//멤버함수 정의
	cout<<rPart<<"+"<<iPart<<"j"<<endl;//안내문 출력
}			//멤버함수 정의 끝
