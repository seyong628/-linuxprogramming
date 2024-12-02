#include <iostream>     //iostream include
#include <vector>       //vector include
using namespace std;	//std 이름공간에 선언된 모든 이름에 std 생략
int main(){             //main함수
    vector<vector<int>> a = {{-5,2,35},{-20,5,100},{-75,5,-25}};//2차원 배열 벡터 선언 및 초기화
    int row = 0, column = 0;    //변수 선언
    int max = a.at(0).at(0);    //변수 선언 및 초기화
    for(int i = 0; i < a.size(); i++){//for반복문 i가 0부터 배열 a의 행만큼 반복
        for(int j = 0; j < a.at(i).size(); j++){//for반복문 j가 0부터 배열 a의 열만큼 반복
            if(max < a.at(i).at(j)){    //if조건문 max가 a.at(i).at(j)보다 작을 때
                max = a.at(i).at(j);    //max에 a.at(i).at(j) 저장
                row = i; column = j;    //row와 column 행과 열로 저장
            }                           //조건문 끝
        }                               //반복문 끝
    }                                   //반복문 끝
    cout<<"최대값은 "<<max<<endl;        //안내문 출력
    cout<<"위치는 "<<row+1<<"행"<<column+1<<"열"<<endl;//안내문 출력
    return 0;                           //0을 반환하고 함수 종료
}                                       //함수 끝