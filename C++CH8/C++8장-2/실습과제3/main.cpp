#include "Shape.hpp"//헤더파일 include
int main(){ //main함수
    Circle x(0,0,2);//Circle 객체 x생성
    Rect y(1,1,5,10);//Rect 객체 y생성
    Triangle z(2,2,5,10);//Triangle 객체 z생성
    x.show();   //show함수 호출
    y.show();   //show함수 호출
    z.show();   //show함수 호출
    return 0;   //0을 반환하고 함수 종료
}               //함수 끝