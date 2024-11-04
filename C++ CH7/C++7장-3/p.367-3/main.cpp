#include "Book.hpp" //헤더파일 include
int main(){ //main함수
    Book book("벼룩시장", 0, 50);//객체 생성
    if(!book) cout<<"공짜다"<<endl; //if조건문 !연산자함수호출
    return 0;   //0을 반환하고 함수 종료
}   //함수 끝