#include <iostream>     //iostream include
#include <vector>       //vector include
using namespace std;	//std 이름공간에 선언된 모든 이름에 std 생략
int main(){             //main함수
    vector<vector<int>> a = {{2,4},{5,-5}};//2차원배열 벡터로 선언 및 초기화
    vector<vector<int>> b = {{-2,3},{0,-5}};//2차원배열 벡터로 선언 및 초기화
    cout<<"연산결과:"<<endl;//안내문 출력
    for(int i=0;i<a.size();i++){   //for반복문 i가 0부터 배열 a행의 크기만큼 반복
        for(int j=0;j<a.at(i).size();j++){//for반복문 j가 0부터 배열 a열의 열만큼까지 반복
            a.at(i).at(j) += b.at(i).at(j);//2차원 배열a에 b더한값 저장
            cout<<a[i][j]<<'\t';//2차원 배열a출력
        }                   //반복문 끝
        cout<<endl; //줄 바꿈
    }               //반복문 끝
    return 0;       //0을 반환하고 함수 종료
}                   //함수 끝