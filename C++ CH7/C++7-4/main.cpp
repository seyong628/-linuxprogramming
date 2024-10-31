#include <iostream>	//iostream include
#include "Complex.hpp"	//헤더파일 include
using namespace std;	//std 이름공간에 선언된 모든 이름에 std 생략
int main(){		//main함수
	Complex x(2,3),y(-5,10),sum;	//객체 생성
	sum = x + y;		//sum = x.operator+(y) 멤버함수 호출
	cout<<"두 복소수의 합은";	//안내문 출력
	sum.show();			//sum에 대한 show함수 호출
	return 0;			//0을 반환하고 함수 종료
}			//함수 끝
