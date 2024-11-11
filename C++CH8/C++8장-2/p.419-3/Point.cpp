#include "Point.hpp"    //헤더파일 include
Point::Point(int x, int y){ //생성자 정의
    this->x = x; this->y = y;//this를 통해 멤버변수 접근
}                       //정의 끝
int Point::getX(){      //멤버함수 정의
    return x;           //x 반환
}                       //정의 끝
int Point::getY(){//멤버함수 정의
    return y;           //y 반환
}                       //정의 끝
void Point::move(int x, int y){//멤버함수 정의
    this->x = x; this->y = y;//this를 통해 멤버변수 접근
}                       //정의 끝
ColorPoint::ColorPoint(int x, int y, string color):Point(x,y){//생성자 정의
    this->color = color;//this를 통해 멤버변수 접근
}                       //정의 끝
void ColorPoint::setPoint(int x, int y){//멤버함수 정의
    move(x,y);          //move함수 호출
}                       //정의 끝
void ColorPoint::setColor(string color){//멤버함수 정의
    this->color = color;//this를 통해 멤버변수 접근
}                       //정의 끝
void ColorPoint::show(){//멤버함수 정의
    cout<<color<<"색으로 ("<<getX()<<","<<getY()<<")에 위치한 점입니다."<<endl;//안내문 출력
}                       //정의 끝