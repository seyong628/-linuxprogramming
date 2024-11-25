#include <iostream>     //iostream include
#include <vector>       //vector include
#include <algorithm>    //algoritm include
#include <string>       //string include
using namespace std;	//std 이름공간에 선언된 모든 이름에 std 생략
int main(){ //main함수
    vector<string> sv;  //string 벡터 선언
    for(int i=0; i<5;i++){//for반복문 i가 0부터 5까지 반복
        string str;//변수 선언
        cout<<"문자열을 입력하세요:";//안내문 출력
        getline(cin, str);  //입력받은 문자열 str에 저장
        sv.push_back(str);//멤버함수 push_back 벡터의 원소 삽입
    }       //반복문 끝
    sort(sv.begin(),sv.end());//sort함수 벡터 처음부터 끝까지 오름차순 정렬
    vector<string>::iterator it;//벡터 sv의 원소에 대한 포인터 it 선언
    cout<<"사전에서 나오는 순서"<<endl; //안내문 출력
    for(it = sv.begin(); it < sv.end(); it++)//for반복문 벡터 처음부터 끝까지 반복
        cout<<*it<<endl;//안내문 출력
    return 0;   //0을 반환하고 함수 종료
}   //함수 끝