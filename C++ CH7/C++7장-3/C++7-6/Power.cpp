#include "Power.hpp"	//헤더파일 include
#include <iostream>	//iostream include
using namespace std;	//std 이름고간에 선언된 모든 이름에 std 생략
void Power::show(){     //멤버함수 정의
    cout<<"kick="<<kick<<",punch="<<punch<<endl;//안내문 출력
}                       //멤버함수 정의 끝
Power Power::operator-(int op2){    //멤버함수 정의
    Power tmp;          //객체 생성
    tmp.kick = this->kick - op2;    //tmp.kick에 kick-op2한 값 저장
    tmp.punch = this->punch - op2;  //tmp.punch에 punch-op2한 값 저장
    return tmp;         //tmp 반환
}                       //멤버함수 정의 끝