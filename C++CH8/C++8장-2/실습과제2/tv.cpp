#include "tv.hpp"   //헤더파일 include
TV::TV():TV(20){};  //생성자 정의
TV::TV(int size){   //생성자 정의
    this->size = size;  //this를 통해 멤버변수 접근
    cout<<"TV 생성"<<endl;  //안내문 출력
}                   //정의 끝
int TV::getSize(){  //멤버함수 정의
    return size;    //size반환
}                   //정의 끝
void TV::setSize(int size){//멤버함수 정의
    this->size = size;  //this를 통해 멤버변수 접근
}                   //정의 끝
WideTV::WideTV():WideTV(20, true){};//생성자 정의
WideTV::WideTV(int size, bool videoln):TV(size){//생성자 정의
    this->videoln = videoln;    //this를 통해 멤버변수 접근
    cout<<"WideTV 생성"<<endl;  //안내문 출력
}                   //정의 끝
bool WideTV::getVideoln(){//멤버함수 정의
    return videoln; //videoln 반환
}                   //정의 끝
void WideTV::setVideoln(bool videoln){//멤버함수 정의
    this->videoln = videoln;    //this를 통해 멤버변수 접근
}                   //정의 끝
SmartTV::SmartTV():SmartTV("1992.0.0.1",20){};//생성자 정의
SmartTV::SmartTV(string ipAddr, int size):WideTV(size,true){//생성자 정의
    this->ipAddr = ipAddr;  //this를 통해 멤버변수 접근
    cout<<"SmartTV 생성"<<endl;//안내문 출력
}                   //정의 끝
string SmartTV::getIpAddr(){//멤버함수 정의
    return ipAddr;          //ipAddr 반환
}                   //정의 끝
void SmartTV::setSmartTV(int size, bool videoln, string ipAddr){//멤버함수 정의
    setSize(size);  //setSize함수 호출
    setVideoln(videoln);//setVideoln함수 호출
    this->ipAddr = ipAddr;  //this를 통해 멤버변수 접근
}                   //정의 끝