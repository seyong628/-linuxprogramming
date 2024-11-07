#include "Shape.hpp"
int main(){ //main함수
    Circle x; Rect y; Triangle z;//생성자 선언
    x.setCircle(0,0,2); //x, y는 기본클래스의 멤버함수를 통해 설정, setCircle 함수 호출
    y.setRect(1,1,5,10);//x, y는 기본클래스의 멤버함수를 통해 설정, setRect 함수 호출
    z.setTriangle(2,2,3,4);//x, y는 기본클래스의 멤버함수를 통해 설정, setTriangle함수 호출
    x.show(); y.show(); z.show();//x, y의 출력은 기본클래스 멤버를 통해 출력, show함수 호출
    return 0;   //0을 반환하고 함수 종료
}   //함수 끝
