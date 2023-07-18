#include <stack>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;
    cin.ignore(); // cin으로 입력받은 개행문자 제거

    stack<int> st;

    string cmd, cmd1, cmd2;
    int val; // 새로운 변수 추가

    for (int i = 0; i < num; i++) {
        getline(cin, cmd);
        cmd1 = cmd.substr(0, cmd.find(" "));
        cmd2 = cmd.substr(cmd.find(" ") + 1, cmd.length());
        val = atoi(cmd2.c_str());

        if (cmd1 == "push") {
            st.push(val); // 정수형으로 변환한 값을 스택에 추가
        }
        else if (cmd1 == "pop") {
            if (!st.empty()) {
                cout << st.top() << endl;
                st.pop();
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if (cmd1 == "size") {
            cout << st.size() << endl;
        }
        else if (cmd1 == "empty") {
            if (st.empty()) {
                cout << "1" << endl;
            }
            else {
                cout << "0" << endl;
            }
        }
        else if (cmd1 == "top") {
            if (!st.empty()) {
                cout << st.top() << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}
