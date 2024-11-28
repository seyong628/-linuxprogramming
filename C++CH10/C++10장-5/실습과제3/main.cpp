#include <iostream>     //iostream include
using namespace std;	//std 이름공간에 선언된 모든 이름에 std 생략
int main(){             //main함수
    int a[3][3] = {{-5,2,35},{-20,5,100},{-75,5,-25}};//2차원 배열 선언 및 초기화
    int row = 0, column = 0;    //변수 선언
    int max = a[0][0];  //max변수 선언 및 a[0][0]으로 초기화
    for(int i=0;i<3;i++){//for반복문 i가 0부터 3까지 반복
        for(int j=0;j<3;j++){   //for반복문 j가 0부터 3까지 반복
            if(max < a[i][j]){//if조건문 max가 a[i][j]보다 작으면
                max = a[i][j];//max에 a[i][j] 저장
                row = i; column = j;//row에 행, column에 열 저장
            }   //조건문 끝
        }       //반복문 끝
    }           //반복문 끝
    cout<<"최대값은 "<<max<<endl;//최대값 출력
    cout<<"위치는 "<<row + 1<<"행 "<<column + 1<<"열"<<endl;//위치 출력
    return 0;   //0을 반환하고 함수 종료
}               //함수 끝