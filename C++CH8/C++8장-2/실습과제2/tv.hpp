#ifndef _TV_HPP_	//조건부 컴파일 지시자
#define _TV_HPP_	//매크로 상수
#include <iostream>	//iostream include
#include <string>   //string include
using namespace std;	//std 이름고간에 선언된 모든 이름에 std 생략
class TV{           //TV 클래스 선언
    int size;       //멤버변수 선언
public:             //public
    TV();           //생성자 선언
    TV(int size);   //생성자 선언
    int getSize();  //멤버함수 선언
    void setSize(int size);//멤버함수 선언
};                  //선언 끝
class WideTV:public TV{//TV를 상속받는 WideTV 클래스 선언
    bool videoln;   //멤버변수 선언
public:             //public
    WideTV();       //생성자 선언
    WideTV(int size, bool videoln);//생성자 선언
    bool getVideoln();      //멤버함수 선언
    void setVideoln(bool videoln);//멤버함수 선언
};                  //선언 끝
class SmartTV:public WideTV{//WideTV 상속받는 SmartTV클래스 선언
    string ipAddr;  //멤버변수 선언
public:             //public
    SmartTV();      //생성자 선언
    SmartTV(string ipAddr, int size);//생성자 선언
    string getIpAddr(); //멤버함수 선언
    void setSmartTV(int s, bool v, string i);//멤버함수 선언
};                  //선언 끝
#endif			//조건부 컴파일 지시자 끝