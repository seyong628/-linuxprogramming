#include <iostream>	//iostream include
#include "Complex.hpp"	//헤더파일 include
using namespace std;	//std 이름공간에 선언된 모든 이름에 std 생략
int main(){             //main함수
    Complex x(2,3);     //객체 생성
    ++x;                //전위 증가연산자함수 호출
    cout<<"증가결과 ";   //안내문 출력
    x.show();           //show()함수 호출
    x--;                //후위 감소연산자함수 호출
    cout<<"감소결과 ";  //안내문 출력
    x.show();           //show()함수 호출
    return 0;           //0을 반환하고 함수 종료
}