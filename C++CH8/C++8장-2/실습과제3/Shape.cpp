#include "Shape.hpp"    //헤더파일 include
Shape::Shape(int x,int y){//생성자 정의
    this->x = x; this->y = y;//this를 통해 멤버변수 접근
    cout<<"Shape생성, ";//안내문 출력
}                       //생성자 정의 끝
void Shape::showposition(){//멤버함수 정의
    cout<<"좌표 ("<<x<<","<<y<<")에 ";//안내문 출력
}                       //멤버함수 정의 끝
Shape::~Shape(){        //소멸자 정의
    cout<<"Shape소멸"<<endl;//안내문 출력
}                       //소멸자 정의 끝
Circle::Circle(int x, int y, int radius):Shape(x, y){//생성자 정의 및 기본 클래스의 생성자 호출
    this->radius = radius;  //this를 통해 멤버변수 접근
    cout<<"Circle생성"<<endl;//안내문 출력
}                       //정의 끝
void Circle::show(){//멤버함수 정의
    showposition(); //상속받은 클래스의 showposition함수 호출
    cout<<"반지름"<<radius<<"인 원"<<endl;//안내문 출력
}                   //멤버함수 정의 끝
Circle::~Circle(){  //소멸자 정의
    cout<<"Circle소멸, ";//안내문 출력
}                   //정의 끝
Rect::Rect(int x, int y, int width, int height):Shape(x,y){//생성자 정의 및 기본 클래스의 생성자 호출
    this->width = width; this->height = height;//this를 통해 멤버변수 접근
    cout<<"Rect생성"<<endl; //안내문 출력
}                       //정의 끝
void Rect::show(){  //멤버함수 정의
    showposition(); //상속 받은 클래스의 showposition함수 호출
    cout<<"폭"<<width<<", 높이"<<height<<"인 직사각형"<<endl;//안내문 출력
}                   //멤버함수 정의 끝
Rect::~Rect(){  //소멸자 정의
    cout<<"Rect소멸, ";//안내문 출력
}               //정의 끝
Triangle::Triangle(int x,int y,int base,int height):Shape(x,y){//생성자 정의 및 기본 클래스의 생성자 호출
    this->base = base; this->height = height;//this를 통해 멤버변수 접근
    cout<<"Triangle생성"<< endl;//안내문 출력
}                       //정의 끝
void Triangle::show(){  //멤버함수 정의
    showposition();     //상속 받은 클래스의 showposition함수 호출
    cout<<"밑변"<<base<<", 높이"<<height<<"인 삼각형"<<endl;//안내문 출력
}                   //멤버함수 정의 끝
Triangle::~Triangle(){  //소멸자 정의
    cout<<"Triangle소멸, ";//안내문 출력
}                   //정의 끝