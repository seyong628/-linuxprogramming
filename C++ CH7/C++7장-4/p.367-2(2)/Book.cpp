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
bool operator==(Book& a, int i){   //멤버함수 정의
    if(a.price == i) return true; //if조건문 a.price와 i가 같을 때 true 반환
    else return false;  //else 조건문 false 반환
}   //멤버함수 정의 끝
bool operator==(Book& a, string s){//멤버함수 정의
    if(a.title == s) return true; //if조건문 a.title과 s가 같을 때 true반환
    else return false;//else 조건문 false 반환
}   //멤버함수 정의 끝
bool operator==(Book& a, Book& b){//멤버함수 정의
    //if조건문 a객체와 b객체의 제목,가격,페이지 수가 같을 때
    if(a.title == b.title && a.price == b.price && a.pages == b.pages)
        return true;//true반환
    else return false;//else 조건문 false 반환
}   //멤버함수 정의 끝