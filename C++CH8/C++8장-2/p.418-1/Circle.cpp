#include "Circle.hpp"   //헤더파일 include
Circle::Circle(int radius){ //생성자 정의
    this->radius = radius;  //this를 통해 멤버변수 접근
}                       //정의 끝
int Circle::getRadius(){    //멤버함수 정의
    return radius;  //radius반환
}                   //정의 끝
void Circle::setRadius(int radius){//멤버함수 정의
    this->radius = radius;  //this를 통해 멤버변수 접근
}                   //정의 끝
double Circle::getArea(){   //멤버함수 정의
    return 3.14*radius*radius;  //넓이 반환
}                   //정의 끝
NamedCircle::NamedCircle(int radius, string name):Circle(radius){//생성자 정의
    this->name = name;  //this를 통해 멤버변수 접근
}                   //정의 끝
void NamedCircle::show(){   //멤버함수 정의
    cout<<"반지름이 "<<getRadius()<<"인 "<<name<<endl;//안내문 출력
}                   //정의 끝