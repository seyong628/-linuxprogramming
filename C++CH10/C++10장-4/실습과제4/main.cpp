#include <iostream>     //iostream include
#include <vector>       //vector include
#include <algorithm>    //algoritm include
#include <string>       //string include
using namespace std;	//std 이름공간에 선언된 모든 이름에 std 생략
class Student{          //Student 클래스
    string name;        //멤버변수 선언
    int grade;          //멤버변수 선언
public:                 //public
    //Student(){}         
    Student(string name, int grade){this->name = name; this->grade = grade;}//생성자 
    bool operator<(Student st); //멤버함수 선언
    void getname(){cout<<"이름:"<<name<<endl;}//멤버함수선언 및 정의
    void getgrade(){cout<<"성적:"<<grade<<"점"<<endl;}//멤버함수선언 및 정의
};          //클래스 끝
bool Student::operator<(Student st1){//멤버함수 정의
    return grade < st1.grade;   //grade < st1.grade 리턴
}           //정의 끝
int main(){     //main함수
    vector<Student> st;//벡터로 객체 생성
    vector<Student>::iterator it;   //벡터 st의 원소에 대한 포인터 it 선언
    for(int i=0;i<3;i++){   //for반복문 i가 0부터 3까지 반복
        string name;    //변수 선언
        int grade;      //변수 선언
        cout<<"이름과 성적을 입력: ";//안내문 출력
        cin>>name>>grade;   //입력받은 이름 성적 저장
        st.push_back(Student(name,grade));//name grade 벡터에 저장
    }           //반복문 끝
    it = max_element(st.begin(),st.end());//it에 st벡터 처음 부터 끝까지 비교 후 큰 점수 저장
    cout<<"최우수학생은"<<endl; //안내문 출력
    it->getname();  //it에 대한 getname함수 호출
    it->getgrade(); //it에 대한 getgrade함수 호출
    return 0;   //0을 반환하고 함수 종료
}   //함수 끝