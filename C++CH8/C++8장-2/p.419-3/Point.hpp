#ifndef _POINT_HPP_	//조건부 컴파일 지시자
#define _POINT_HPP_	//매크로 상수
#include <iostream>	//iostream include
#include <string>   //string include
using namespace std;	//std 이름고간에 선언된 모든 이름에 std 생략
class Point{            //클래스 Point 선언
    int x,y;            //멤버변수 선언
public:                 //public    
    Point(int x, int y);//생성자 선언   
    int getX();         //멤버함수 선언
    int getY();         //멤버함수 선언
protected:              //protected
    void move(int x, int y);//멤버함수 선언
};                      //선언 끝
class ColorPoint:public Point{  //Point 상속받는 클래스 ColorPoint 선언
    string color;       //멤버변수 선언
public:                 //public
    ColorPoint(int x, int y, string color);//생성자 선언
    void setPoint(int x, int y);    //멤버함수 선언
    void setColor(string color);    //멤버함수 선언
    void show();                    //멤버함수 선언
};                      //선언 끝
#endif			//조건부 컴파일 지시자 끝
