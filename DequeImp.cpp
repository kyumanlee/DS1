// DequeImp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <deque>
#include <string>
using namespace std;



int main()
{

	int n;				// 총 명령어 개수 입력

	cin >> n;

	deque<int> d;		//STL deque 선언 방법

	while (n--) {

		string cmd;		//string 명령어 입력

		cin >> cmd;

		if (cmd == "push_front") {

			int num;

			cin >> num;

			d.push_front(num);		// 이클립스 IDE 말고, Visual Studio 는 MSDS 이 깔려 있어서
									// 메소드가 표시됩니다. 물론 여러분들이, 이미 그 메소드를 공부하고 있어야 겠죠
		}
		else if (cmd == "push_back") {
			int num;
			cin >> num;
			d.push_back(num);
		}
		else if (cmd == "pop_front") {			//항상 pop 할 때는 비웠는지 확인
			if (d.empty()) cout << -1 << '\n';
			else {
				cout << d.front() << '\n';
				d.pop_front();
			}
		}
		else if (cmd == "pop_back") {
			if (d.empty()) cout << -1 << '\n';
			else {
				cout << d.back() << '\n';
				d.pop_back();
			}
		}
		else if (cmd == "size") {
			cout << d.size() << '\n';
		}
		else if (cmd == "empty") {
			cout << d.empty() << '\n';
		}

		else if (cmd == "front") {
			if (d.empty()) cout << -1 << '\n';
			else {
				cout << d.front() << '\n';
			}
		}
		else if (cmd == "back") {
			if (d.empty()) cout << -1 << '\n';
			else {
				cout << d.back() << '\n';
			}
		}

	}

    return 0;
}

