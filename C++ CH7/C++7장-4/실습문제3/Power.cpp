#include "Power.hpp"	//헤더파일 include
#include <iostream>	//iostream include
using namespace std;	//std 이름고간에 선언된 모든 이름에 std 생략
void Power::show(){     //멤버함수 정의
    cout<<"kick="<<kick<<",punch="<<punch<<endl;//안내문 출력
}                       //멤버함수 정의 끝
Power operator*(int x, Power op){   //*연산자함수 정의
    Power tmp;          //객체 생성
    tmp.kick = x * op.kick; //tmp객체의 kick에 정수와 op객체의 kick곱한 값 저장
    tmp.punch = x * op.punch;//tmp객체의 punch에 정수와 op객체의 punch곱한 값 저장
    return tmp;     //tmp 반환
}                   //함수 정의 끝