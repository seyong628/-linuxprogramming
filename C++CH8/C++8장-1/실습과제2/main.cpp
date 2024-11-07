#include "Shape.hpp"
int main(){ //main함수
    Circle x; Rect y; Triangle z;//생성자 선언
    x.setCircle(0,0,2); //setCircle 함수 호출
    y.setRect(1,1,5,10);//setRect 함수 호출
    z.setTriangle(2,2,3,4);//setTriangle함수 호출
    x.show(); y.show(); z.show();//show함수 호출
    return 0;   //0을 반환하고 함수 종료
}   //함수 끝
