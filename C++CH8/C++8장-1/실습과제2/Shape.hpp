#ifndef _SHAPE_HPP_	//조건부 컴파일 지시자
#define _SHAPE_HPP_	//매크로 상수
#include <iostream>	//iostream include
using namespace std;	//std 이름고간에 선언된 모든 이름에 std 생략
class Shape{        //Shape 클래스 선언
protected:          //protected
    int x,y;        //멤버변수 x,y선언
};                  //클래스 선언 끝
class Circle:public Shape{//Shape 상속받는 Circle클래스 선언
    int radius;     //멤버변수 선언
public:             //public
    void setCircle(int x, int y, int radius);//멤버함수 선언
    void show();    //멤버함수 선언
};                  //클래스 선언 끝
class Rect:public Shape{//Shape 상속받는 Rect클래스 선언
    int width, height;  //멤버변수 선언
public:             //public
    void setRect(int x, int y, int widht, int height);//멤버함수 선언
    void show();    //멤버함수 선언
};                  //클래스 선언 끝
class Triangle:public Shape{//Shape 상속받는 Triangle 클래스 선언
    int base, height;   //멤버변수 선언
public:             //public
    void setTriangle(int x, int y, int base, int height);//멤버함수 선언
    void show();    //멤버함수 선언
};                  //클래스 선언 끝
#endif			//조건부 컴파일 지시자 끝
