#include "Book.hpp" //헤더파일 include
int main(){ //main함수
    Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);//객체 생성
    if(a == 30000) cout<<"정가 30000원"<<endl;//if조건문 정수==함수 호출
    if(a == "명품 C++") cout<<"명품 C++ 입니다."<<endl;//if조건문 문자열==함수 호출
    if(a == b) cout<<"두 책이 같은 책입니다."<<endl;    //if조건문 객체==함수 호출
    return 0;   //0을 반환하고 함수 종료
}   //함수 끝