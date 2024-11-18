#include <iostream>     //iostream include
using namespace std;	//std 이름고간에 선언된 모든 이름에 std 생략
template <class T>      //템플릿 클래스 선언
class Container{        //class Container선언
    T *p;   //T타입의 포인터 p선언
    int size;   //배열의 크기를 나타내는 변수 size선언
public:     //public
    Container(int n){p = new T[n]; size = n;}   //멤버변수 p에 n개의 동적배열을 할당받는 생성자
    ~Container(){}       //소멸자 선언
    void set(int index, T value){p[index] = value;}//index 위치에 value저장
    T get(int index);   //index 위치의 값 리턴
};                      //class 선언 끝
template <class T>      //템플릿 클래스 구현
T Container<T>::get(int index){ //멤버함수 정의
    return p[index];    //p[index] 반환
}                       //멤버함수 정의 끝
int main(){             //main함수 정의
    Container<char> c(26);  //문자열 매개변수인 객체 c 생성
    for(int i = 0; i < 26; i++)//for반복문 i가 0부터 26까지 반복
        c.set(i, 'a' + i);  //set함수 호출
    for(int i = 25; i >= 0; i--)//for반복문 i가 25부터 0까지 반복
        cout << c.get(i);   //안내문 출력
    cout << endl;           //안내문 출력
    return 0;               //0을 반환하고 함수 종료
}                       //함수 끝
