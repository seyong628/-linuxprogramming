#include "tv.hpp"   //헤더파일 include
int main(){         //main함수
    SmartTV htv;    //SmartTV 객체 htv생성
    htv.setSmartTV(50,false,"192.0.0.2");//setSmartTV 함수 호출
    cout<<"size = "<<htv.getSize()<<endl;//안내문 출력
    cout<<"videoln = "<<boolalpha<<htv.getVideoln()<<endl;//안내문 출력
    cout<<"IP = "<<htv.getIpAddr()<<endl;//안내문 출력
    return 0;//0을 반환하고 함수 종료
}           //함수 끝