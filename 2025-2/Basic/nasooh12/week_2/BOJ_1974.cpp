/*
basic 백준 1874 스택 수열
문제 푼 사람 : 이수형 / nasooh12

debugging result : stack의 top, pop 접근 시 empty 예외처리 필수
zsh: segmentation fault  == > 잘못된 메모리 참조 에러
stack.top() 함수 사용 전 stack 의 empty 여부를 확인하지 않아 에러
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,num;
    int goalArrIdx = 0;
    int goalArr[N]; //목표 수열을 담은 배열
    string resultPrint; //결과 출력 문자열
    //int resultArr[N]; //목표 수열과 같은지 검사하는 배열

    stack<int> stack;
    cin >> N;
    //goalArr 초기화 - 목표 설정
    for (int i = 0; i < N ; i++){
        cin >> num;
        goalArr[i] = num;
    }
    int i =1;
    //push & pop - resultStack 가능 여부 검사
    for (int j = 1; j <= 2*N; j++){
        //goalArrIdx 의 원소가 i보다 클 때 : push
        //goalArrIdx 의 원소가 i와 같을 때 : push
        //goalArrIdx 의 원소가 i보다 작을 때 : pop 
        //-> 이때 검사 goal 원소가 맞는지 ? 아니면 no출력 맞으면 인덱스 +1 & roop 지속
        if (i <= goalArr[goalArrIdx]){
            stack.push(i);
            cout << "+" << i <<"\n";
            i = i+1;
        }

        else{
            if( !stack.empty() && stack.top() == goalArr[goalArrIdx]){
                cout << "-" << stack.top() << "\n";
                stack.pop();
                goalArrIdx = goalArrIdx + 1;
            }
            else{
                cout << "NO" ;
                break;
            }
        }

    }


    return 0;
}

