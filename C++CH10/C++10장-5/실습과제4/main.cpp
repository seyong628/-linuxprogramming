#include <iostream>     //iostream include
using namespace std;	//std 이름공간에 선언된 모든 이름에 std 생략
int main(){             //main함수 
    int a[3][3] = {{-5,2,35},{-20,5,100},{-75,5,-25}};//2차원 배열 선언 및 초기화
    cout<<"수정행렬"<<endl; //안내문 출력
    for(int i=0;i<3;i++){   //for반복문 i가 0부터 3까지 반복
        for(int j=0;j<3;j++){   //for반복문 j가 0부터 3까지 반복
            if(a[i][j] < 0) a[i][j] = 0;//if조건문 a[i][j]가 음수 일때 a[i][j]를 0으로 저장
            else a[i][j] = 255;//else조건문 a[i][j]를 255로 저장
            cout<<a[i][j]<<'\t';    //안내문 출력
        }           //반복문 끝
        cout<<endl;//줄바꿈
    }               //반복문 끝
    return 0;       //0을 반환하고 함수 종료
}                   //함수 끝