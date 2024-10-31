#ifndef _COMPLEX_HPP_	//조건부 컴파일 지시자
#define _COMPLEX_HPP_	//매크로 상수
class Power{            //Power 클래스 선언
    int kick;           //멤버변수 선언
    int punch;          //멤버변수 선언
public:                 //public
    Power(int kick = 0, int punch = 0){ //생성자 선언
        this->kick = kick; this->punch = punch;//this를 통해 멤버변수 접근
    }                   //생성자 선언 끝
    void show();        //멤버함수 선언
    Power operator- (int op2);  //멤버함수 선언
};                      //클래스 선언 끝
#endif			//조건부 컴파일 지시자 끝