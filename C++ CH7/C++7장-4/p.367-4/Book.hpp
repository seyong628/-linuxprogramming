#ifndef _BOOK_HPP_	//조건부 컴파일 지시자
#define _BOOK_HPP_	//매크로 상수
#include <string>   //string include
#include <iostream>	//iostream include
using namespace std;	//std 이름고간에 선언된 모든 이름에 std 생략
class Book;         //클래스 Book 선언
bool operator< (string s, Book b);//<연산자 함수 선언
class Book{         //클래스 Book선언
    string title;   //멤버 변수 선언
    int price, pages;   //멤버 변수 선언
public:             //public
    Book(string title="",int price=0,int pages=0);//생성자 선언
    void show();    //멤버함수 선언
    string getTitle();//멤버함수 선언
    friend bool operator< (string s, Book b);//friend <연산자 함수 선언
};                  //클래스 선언 끝
#endif			//조건부 컴파일 지시자 끝