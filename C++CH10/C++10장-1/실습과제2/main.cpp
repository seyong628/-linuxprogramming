#include <iostream>     //iostream include
using namespace std;	//std 이름고간에 선언된 모든 이름에 std 생략
class Circle{           //Circle 클래스 구현
    int radius;         //멤버변수 선언
public:                 //public
    Circle(int radius = 1){this->radius = radius;}//생성자 선언 및 정의
    int getRadius(){return radius;} //멤버함수 선언 및 정의
    bool operator> (Circle& a); //멤버함수 선언
};                          //클래스 구현 끝
bool Circle::operator> (Circle& a){//멤버함수 정의
    if(this->radius > a.radius) return true;//if조건문 this->radius가 a.radius보다 크면 true리턴
    else return false;      //else조건문 false리턴
}                           //멤버함수 정의 끝
template <class T>      //템플릿 함수 선언
T bigger(T a, T b){     //템플릿 큰 수 구하는 함수
    if(a>b) return a;   //if조건문 a가 b보다 크면 a리턴
    else return b;      //else조건문 b리턴
}                       //함수 끝
int main(){             //main함수
    int a=20, b=50, c;  //변수 선언
    c = bigger(a,b);    //c에 bigger함수 호출 후 큰 수 저장
    cout<<"20과 50중 큰 값은 "<<c<<endl;//안내문 출력

    Circle donut(10), pizza(20), y; //객체 생성
    y = bigger(donut, pizza);   //y에 bigger함수 호출 후 큰 수 저장
    cout<<"donut과 pizza중 큰 반지름은 "<<y.getRadius()<<endl;//안내문 출력 및 getRadius함수 호출
    return 0;               //0을 반환하고 함수 종료
}                       //함수 끝