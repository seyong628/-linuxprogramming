#include <iostream>     //iostream include
using namespace std;	//std 이름고간에 선언된 모든 이름에 std 생략
template <class T>      //템플릿 함수 선언
T getmax(T a[], int n){ //템플릿 최대값 구하는 함수
    T max = a[0];       //템플릿 max선언 후 배열 a[0]을 저장
    for(int i=1;i<n;i++){//for반복문 i가 1부터 n까지 반복
        if(max<=a[i]) max = a[i];//if조건문 a[i]가 max보다 클 때 max에 a[i]저장
    }                   //반복문 끝
    return max;         //max리턴
}                       //함수 정의 끝
int main(){             //main 함수
    int a[5] = {-5, 10, 30, 20, 6};//배열 선언
    double b[4] = {3.14, 1.5, -6.0, 0.5};//배열 선언
    char c[3] = {'a', 'x', 'p'};//배열 선언

    cout<<"정수배열의 최대값은 "<<getmax(a,5)<<endl;//안내문 출력 및 getmax함수 호출
    cout<<"실수배열의 최대값은 "<<getmax(b,4)<<endl;//안내문 출력 및 getmax함수 호출
    cout<<"문자배열의 최대값은 "<<getmax(c,3)<<endl;//안내문 출력 및 getmax함수 호출
    return 0;//0을 반환하고 함수 종료
}   //함수 끝
