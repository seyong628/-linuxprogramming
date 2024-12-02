#include <iostream>     //iostream include
#include <vector>       //vector include
using namespace std;	//std 이름공간에 선언된 모든 이름에 std 생략
int main(){             //main함수
    vector<vector<int>> a = {{-5,2,35},{-20,5,100},{-75,5,-25}};//2차원 배열 벡터 선언 및 초기화
    cout<<"수정행렬"<<endl; //안내문 출력
    for(int i=0;i<a.size();i++){   //for반복문 i가 0부터 배열 a의 행만큼 반복
        for(int j=0;j<a.at(i).size();j++){   //for반복문 j가 0부터 배열 a의 열만큼 반복
            if(a.at(i).at(j) < 0) a.at(i).at(j) = 0;//if조건문 a.at(i).at(j)가 음수 일때 aat(i).at(j)를 0으로 저장
            else a.at(i).at(j) = 255;//else조건문 aat(i).at(j)를 255로 저장
            cout<<a.at(i).at(j)<<'\t';    //안내문 출력
        }           //반복문 끝
        cout<<endl;//줄바꿈
    }               //반복문 끝
    return 0;       //0을 반환하고 함수 종료
}                   //함수 끝