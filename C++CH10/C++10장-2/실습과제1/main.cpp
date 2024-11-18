#include <iostream>     //iostream include
using namespace std;	//std 이름고간에 선언된 모든 이름에 std 생략
template <class T1, class T2>      //템플릿 클래스 선언
class GClass{           //GClass 선언
    T1 data1;           //멤버변수 선언
    T2 data2;           //멤버변수 선언
public:                 //public
    GClass();           //생성자 선언
    void set(T1 a, T2 b);//멤버함수 선언
    void get(T1& a, T2& b); //멤버함수 선언
    void swap();        //멤버함수 선언
};                      //클래스 선언 끝
template <class T1, class T2>//템플릿 클래스 구현
GClass<T1, T2>::GClass() { data1 = 0; data2 = 0;}//멤버함수 정의
template <class T1, class T2>//템플릿 클래스 구현
void GClass<T1, T2>::set(T1 a, T2 b){ data1 = a; data2 = b;}//멤버함수 정의
template <class T1, class T2>//템플릿 클래스 구현
void GClass<T1, T2>::get(T1& a, T2& b){ a = data1; b = data2;}//멤버함수 정의
template <class T1, class T2>//템플릿 클래스 구현
void GClass<T1, T2>::swap(){    //멤버함수 정의
    T1 tmp;     //템플릿 변수 선언
    tmp = data1;//tmp에 data1 저장
    data1 = data2;//data1에 data2 저장
    data2 = tmp;    //data2에 tmp 저장
}               //멤버함수 정의 끝
int main(){     //main함수
    int a, b;   //정수형 변수 선언
    GClass<int, int> x;//정수형 2개인 생성자 선언
    x.set(2, 5);    //set함수 호출
    x.get(a, b);    //get함수 호출
    cout << "a=" << a << '\t' << "b=" << b << endl;//안내문 출력
    x.swap();       //swap함수 호출
    x.get(a, b);    //get함수 호출
    cout << "a=" << a << '\t' << "b=" << b << endl;//안내문 출력
    double c, d;    //실수형 변수 선언
    GClass<double, double> y;//실수형 2개인 생성자 선언
    y.set(3.14, 6.28);  //set함수 호출
    y.get(c, d);        //get함수 호출
    cout << "c=" << c << '\t' << "d=" << d << endl;//안내문 출력
    y.swap();           //swap함수 호출
    y.get(c, d);        //get함수 호출
    cout << "c=" << c << '\t' << "d=" << d << endl;//안내문 출력
    return 0;           //0을 반환하고 함수 종료
}                       //함수 끝