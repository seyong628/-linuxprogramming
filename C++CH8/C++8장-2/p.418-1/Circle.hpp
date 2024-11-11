#ifndef _CIRCLE_HPP_	//조건부 컴파일 지시자
#define _CIRCLE_HPP_	//매크로 상수
#include <iostream>	//iostream include
#include <string>   //string include
using namespace std;	//std 이름고간에 선언된 모든 이름에 std 생략
class Circle{       //Circle클래스 선언
    int radius;     //멤버변수 선언
public:             //public
    Circle(int radius=0);   //생성자 선언
    int getRadius();    //멤버함수 선언
    void setRadius(int radius);//멤버함수 선언
    double getArea();//멤버함수 선언
};                  //선언 끝
class NamedCircle:public Circle{    //Circle 상속받는 NamedCircle클래스 선언
    string name;    //멤버변수 선언
public:             //public
    NamedCircle(int radius, string name);   //생성자 선언
    void show();    //멤버함수 선언
};              //선언 끝
#endif			//조건부 컴파일 지시자 끝