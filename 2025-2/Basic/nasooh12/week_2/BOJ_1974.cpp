/*
basic 백준 1874 스택 수열
문제 푼 사람 : 이수형 / nasooh12


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

    stack<int> Stack;
    cin >> N;
    //goalArr 초기화 - 목표 설정
    for (int i = 0; i < N ; i++){
        cin >> num;
        goalArr[i] = num;
    }

    //push & pop - resultStack 가능 여부 검사
    for (int i = 1; i <= 2*N; i++){
        //goalArrIdx 의 원소가 i보다 클 때 : push
        //goalArrIdx 의 원소가 i와 같을 때 : push
        //goalArrIdx 의 원소가 i보다 작을 때 : pop 
        //-> 이때 검사 goal 원소가 맞는지 ? 아니면 no출력 맞으면 인덱스 +1 & roop 지속
        if (i <= goalArr[goalArrIdx]){
            Stack.push(i);
            cout << "+" << i <<"\n";
            i = i+1;
        }

        else{
            if(Stack.top() == goalArr[goalArrIdx]){
                cout << "-" << Stack.top() << "\n";
                Stack.pop();
                goalArrIdx = goalArrIdx + 1;
            }
            else{
                cout << "NO" ;
            }
        }

    }


    return 0;
}

