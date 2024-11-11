#include "Point.hpp"    //헤더파일 include
int main(){             //main함수
    ColorPoint cp(5, 5, "RED"); //객체 cp생성
    cp.setPoint(10, 20);    //setPoint 함수 호출
    cp.setColor("BLUE");    //setColor 함수 호출
    cp.show();              //show 함수 호출
    return 0;               //0을 반환하고 함수 종료
}                           //함수 끝