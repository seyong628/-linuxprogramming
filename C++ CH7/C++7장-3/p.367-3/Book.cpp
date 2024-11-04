#include "Book.hpp" //헤더파일 include
Book::Book(string title, int price, int pages){ //생성자 정의
    //this로 멤버변수 접근
    this->title = title; this->price = price; this->pages = pages;
}   //생성자 정의 끝
void Book::show(){  //멤버함수 정의
    cout<<title<< ' '<<price<<"원"<<pages<<" 페이지"<<endl;//안내문 출력
}   //멤버함수 정의 끝
string Book::getTitle(){//멤버함수 정의
    return title;   //제목 반환
}   //멤버함수 정의 끝
bool Book::operator!(){ //!연산자 함수 정의
    if(price == 0) return true;//if조건문 price가 0일 때 true반환
    else return false;  //else조건문 false반환
}   //함수 정의 끝