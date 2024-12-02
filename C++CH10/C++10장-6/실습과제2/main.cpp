#include <iostream>     //iostream include
#include <vector>       //vector include
#include <algorithm>    //algorithm include
using namespace std;	//std 이름공간에 선언된 모든 이름에 std 생략
int main(){             //main함수 
    vector<vector<int>> score;  //2차원 배열 벡터로 선언
    vector<double> avg(3);  //벡터로 배열 선언
    vector<double>::iterator it;    //벡터 v의 원소에 대한 포인터 it 선언
    int sum, index = 0;     //변수 선언
    for(int i=0; i<3; i++){ //for반복문 i가 0부터 3까지 반복
        cout<<i+1<<"번째 학생의 국어,영어,수학 성적을 입력: ";//안내문 출력
        vector<int> tmp;    //벡터 선언
        int a;              //변수 선언
        for(int j=0; j<3; j++){//for반복문 j가 0부터 3까지 반복
            cin>>a;         //입력받은 정수 a에 저장
            tmp.push_back(a);   //tmp에 a저장
        }                       //반복문 끝
        score.push_back(tmp);   //score에 tmp저장
    }                           //반복문 끝
    for(int i=0; i<score.size();i++){//for반복문 i가 0부터 score행 만큼 반복
        sum = 0;    //sum 초기화
        for(int j=0;j<score.at(i).size();j++){  //for반복문 j가 0부터 score.at(i)의 열만큼 반복
            sum += score.at(i).at(j);   //sum에 sum과 score.at(i).at(j) 더한 값 저장 
        }               //반복문 끝
        avg.at(i) = sum/3.0;//avg.at(i)에 평균 저장
    }                   //반복문 끝
    it = max_element(avg.begin(),avg.end());    //it에 avg의 최대값 저장
    cout<<"최우수 학생은 "<<distance(avg.begin() ,it) + 1<<"번째 학생이고 평균점수는 "<<*it<<"점이다."<<endl;//안내문 출력
    return 0;   //0을 반환하고 함수 종료
}               //함수 끝