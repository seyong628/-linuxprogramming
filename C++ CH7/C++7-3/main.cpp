#include <iostream>     //iostream include
#include "Complex.hpp"  //헤더파일 include
using namespace std;    //std 이름공간에 선언된 모든 이름에 std 생략
int main(){             //main함수
    Complex x(5,5), y(2,2),sum,sub;//객체 생성
    ComplexManager man; //객체 생성
    sum = man.ComplexAdd(x,y);//ComplexAdd함수 호출 후 sum에 저장
    cout<<"두 복소수의 합은";   //안내문 출력
    sum.show();         //show함수 호출
    sub = man.ComplexSub(x,y);//ComplexSub함수 호출 후 sub에 저장
    cout<<"두 복소수의 차는";   //안내문 출력
    sub.show();         //show함수 호출
    return 0;           //0을 반환하고 함수 종료
}                       //함수 끝