#include <iostream>     //iostream include
#include "Power.hpp"    //헤더파일 include
using namespace std;    //std 이름공간에 선언된 모든 이름에 std 생략
int main(){             //main함수
    Power a(3,5),b;     //객체 생성
    a.show();           //객체 a에 show함수 호출
    b.show();           //객체 b에 show함수 호출
    b = 2 * a;          //파워 객체와 정수 곱하기
    a.show();           //객체 a에 show함수 호출
    b.show();           //객체 b에 show함수 호출
    return 0;           //0을 반환하고 함수 종료
}                       //함수 끝