#include <iostream>     //iostream include
#include <vector>       //vector include
using namespace std;	//std 이름공간에 선언된 모든 이름에 std 생략
int main(){             //main함수
    vector<int> v;      //vector 객체 생성
    int max, min;       //변수 생성
    cout<<"정수 4개를 입력하시오:"; //안내문 출력
    for(int i=0; i<4; i++){ //for반복문 i가 0부터 4까지 반복
        int num;    //변수 생성
        cin>>num;   //입력받은 정수 num에 저장
        v.push_back(num);//멤버함수 push_back 벡터의 원소 삽입
    }               //반복문 끝
    max = min = v.at(0);    //max와 min 벡터 첫 원소로 저장
    for(int i=1; i < v.size(); i++){    //for반복문 i가 1부터 벡터 사이즈만큼 반복
        if(max < v.at(i)) max = v.at(i);//if조건문 벡터의 i번째 원소가 max보다 크면 max에 저장
        if(min > v.at(i)) min = v.at(i);//if조건문 벡터의 i번째 원소가 min보다 작으면 min에 저장
    }               //반복문 끝
    cout<<"최대값은 "<<max<<", 최소값은 "<<min<<"입니다."<<endl;//안내문 출력
    return 0;//0을 반환하고 함수 종료
}           //함수 끝