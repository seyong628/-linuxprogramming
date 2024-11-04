#include "Book.hpp" //헤더파일 include
int main(){ //main함수
    Book a("청춘", 20000, 300);//객체 생성
    string b;   //문자열 생성
    cout<<"책 이름을 입력하세요>>"; //안내문 출력
    getline(cin, b);    //키보드로 문자열로 책 이름을 입력받아 저장
    if(b<a) //if조건문 <연산자함수호출
        cout<<a.getTitle()<<"이 "<<b<<"보다 뒤에 있구나!"<<endl; //안내문 출력
    return 0;   //0을 반환하고 함수 종료
}   //함수 끝