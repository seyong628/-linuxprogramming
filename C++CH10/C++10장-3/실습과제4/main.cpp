#include <iostream>     //iostream include
#include <vector>       //vector include
using namespace std;	//std 이름공간에 선언된 모든 이름에 std 생략
int main(){             //main함수
    vector<int> v;      //vector 객체 생성
    vector<int>::iterator it;   //벡터 v의 원소에 대한 포인터 it 선언
    double sum, avg;    //변수 선언
    cout<<"숫자를 입력하세요:"; //안내문 출력
    for(int i = 0; i < 5; i++){ //for반복문 i가 0부터 5까지 반복
        int num;    //변수 생성
        cin>>num;   //입력받은 정수 num에 저장
        v.push_back(num);//멤버함수 push_back 벡터의 원소 삽입
    }               //반복문 끝

    cout<<"초기 벡터 원소 :";   //안내문 출력
    for(it = v.begin(); it != v.end(); it++){//for반복문 벡터 v의 모든 원소 출력
        cout<<*it<<" "; //안내문 출력
    }                   //반복문 끝
    cout<<endl;         //줄바꿈

    for(it = v.begin();it != v.end();){    //for반복문 벡터 v의 모든 원소 반복
        if(*it < 0) it = v.erase(it);//if조건문 *it 값이 음수이면 erase
        else it++;  //else조건문 it증가
    }               //반복문 끝

    cout<<"음수를 삭제 후 벡터 원소 :";//안내문 출력
    for(it = v.begin(); it != v.end(); it++){//for반복문 벡터 v의 모든 원소 반복
        cout<<*it<<" ";     //안내문 출력
        sum += *it;         //sum에 *it값 더하기
    }                       //반복문 끝
    cout<<endl;             //안내문 출력
    avg = sum / v.size();   //평균값 구해서 avg에 저장
    cout<<"평균값 : "<<avg<<endl;;  //안내문 출력
    return 0;//0을 반환하고 함수 종료
}           //함수 끝