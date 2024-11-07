#include "Shape.hpp"    //헤더파일 include
void Circle::setCircle(int x,int y, int radius){//멤버함수 정의
    this->x = x; this->y = y; this->radius = radius;//this를 통해 멤버변수 접근
}               //멤버함수 정의 끝
void Circle::show(){//멤버함수 정의
    cout<<"좌표 ("<<x<<","<<y<<")에 반지름"<<radius<<"인 원"<<endl;//안내문 출력
}                   //멤버함수 정의 끝
void Rect::setRect(int x, int y, int width, int height){//멤버함수 정의
    this->x = x; this->y = y; this->width = width; this->height = height;//this를 통해 멤버변수 접근
}                   //멤버함수 정의 끝
void Rect::show(){  //멤버함수 정의
    cout<<"좌표 ("<<x<<","<<y<<")에 폭"<<width<<", 높이"<<height<<"인 직사각형"<<endl;//안내문 출력
}                   //멤버함수 정의 끝
void Triangle::setTriangle(int x, int y, int base, int height){//멤버함수 정의
    this->x = x; this->y = y; this->base = base; this->height = height;//this를 통해 멤버변수 접근
}                   //멤버함수 정의 끝
void Triangle::show(){  //멤버함수 정의
    cout<<"좌표 ("<<x<<","<<y<<")에 밑변"<<base<<", 높이"<<height<<"인 삼각형"<<endl;//안내문 출력
}                   //멤버함수 정의 끝