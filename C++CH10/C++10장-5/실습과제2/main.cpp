#include <iostream>     //iostream include
using namespace std;	//std 이름공간에 선언된 모든 이름에 std 생략
int main(){             //main함수
    int score[3][3];    //2차원 배열 선언
    int sum;            //변수 선언
    double max = 0;         //변수 선언 및 초기화
    double avg[3];      //배열 선언
    for(int i=0;i<3;i++){   //for반복문 i가 0부터 3까지 반복
        cout<<i+1<<"번째 학생의 국어,영어,수학 성적을 입력: ";//안내문 출력
        for(int j=0;j<3;j++){//for반복문 j가 0부터 3까지 반복
            cin>>score[i][j];//입력받은 점수 2차원 배열에 저장
        }                   //반복문 끝
    }   //반복문 끝
    for(int i=0;i<3;i++){//반복문 i가 0부터 3까지 반복
        sum = 0;            //sum 0으로 초기화
        for(int j=0;j<3;j++){//for반복문 j가 0부터 3까지 반복
            sum += score[i][j];//sum에 i행 점수 저장
        }   //반복문 끝
        avg[i] = sum/3.0;   //avg[i]에 i번째 학생의 평균 저장
        if(max < avg[i]) max = avg[i];//if조건문 max가 avg[i]보다 작으면 max에 avg[i]저장
    }   //반복문 끝
    for(int i=0;i<3;i++){   //for반복문 i가 0부터 3까지 반복
        if(max == avg[i])   //if조건문 max가 avg[i]와 같을 때 
            cout<<"최우수 학생은 "<<i+1<<"번째 학생이고 평균점수는 "<<max<<"점이다."<<endl;//안내문 출력
    }   //반복문 끝
    return 0;   //0을 반환하고 함수 종료
}   //함수 끝