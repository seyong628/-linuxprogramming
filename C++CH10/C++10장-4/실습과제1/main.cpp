#include <iostream>     //iostream include
#include <vector>       //vector include
#include <algorithm>    //algorithm include
using namespace std;	//std 이름공간에 선언된 모든 이름에 std 생략
int main(){             //main함수
    vector<int> v;      //벡터 정수형 v선언
    vector<int>::iterator it;   //벡터 v의 원소에 대한 포인터 it 선언
    cout<<"4개의 정수를 입력하시오:";//안내문 출력
    for(int i=0;i<4;i++){   //for반복문 i가 0부터 4까지 반복
        int n;  //변수 선언
        cin>>n; //입력받은 정수 n에 저장
        v.push_back(n);//n을 벡터에 저장
    }           //반복문 끝
    it = max_element(v.begin(), v.end());//max_element벡터의 처음부터 끝까지 함수 호출 후 it에 저장
    cout<<"최대값은 "<<distance(v.begin(),it) + 1<<"번째 값 "<<*it<<endl;//안내문 출력
    it = min_element(v.begin(), v.end());//min_element벡터의 처음부터 끝까지 함수 호출 후 it에 저장
    cout<<"최소값은 "<<distance(v.begin(),it) + 1<<"번째 값 "<<*it<<endl;//안내문 출력
    sort(v.begin(), v.end());//sort함수 벡터의 처음부터 끝까지 호출 오름차순 정렬
    cout<<"오름차순 결과는 ";//안내문 출력
    for(it = v.begin(); it < v.end(); it++)//for반복문 벡터의 처음부터 끝까지 반복
        cout<<*it<<' ';//안내문 출력
    cout<<endl; //줄 바꿈
    sort(v.begin(), v.end(), std::greater<int>());//sort함수 내림차순 정렬
    cout<<"내림차순 결과는 ";//안내문 출력
    for(it = v.begin(); it < v.end(); it++)//for반복문 벡터 처음부터 끝까지 반복
        cout<<*it<<' ';//안내문 출력
    cout<<endl;//줄바꿈
    return 0;//0을 반환하고 함수 종료
}   //함수 끝