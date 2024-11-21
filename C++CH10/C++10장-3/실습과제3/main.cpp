#include <iostream>     //iostream include
#include <vector>       //vector include
#include <string>       //string include
using namespace std;	//std 이름공간에 선언된 모든 이름에 std 생략
int main(){             //main함수
    vector<string> sv;      //vector 객체 생성
    string str;       //변수 생성
    for(int i=0; i<5; i++){ //for반복문 i가 0부터 5까지 반복
        cout<<"문자열을 입력하세요:"; //안내문 출력
        getline(cin, str);  //입력받은 문자열 str에 저장
        sv.push_back(str);//멤버함수 push_back 벡터의 원소 삽입
    }               //반복문 끝
    str = sv.at(0);    //str에 벡터 첫 원소를 저장
    for(int i=1; i < sv.size(); i++){    //for반복문 i가 1부터 벡터 사이즈만큼 반복
        if(str < sv.at(i)) str = sv.at(i);//if조건문 벡터의 i번째 원소가 str보다 크면 str에 저장
    }               //반복문 끝
    cout<<"사전에서 제일 뒤에 나오는 단어는 "<<str<<"입니다."<<endl;//안내문 출력
    return 0;//0을 반환하고 함수 종료
}           //함수 끝