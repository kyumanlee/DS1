// DequeImp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <deque>
#include <string>
using namespace std;



int main()
{

	int n;				// �� ��ɾ� ���� �Է�

	cin >> n;

	deque<int> d;		//STL deque ���� ���

	while (n--) {

		string cmd;		//string ��ɾ� �Է�

		cin >> cmd;

		if (cmd == "push_front") {

			int num;

			cin >> num;

			d.push_front(num);		// ��Ŭ���� IDE ����, Visual Studio �� MSDS �� ��� �־
									// �޼ҵ尡 ǥ�õ˴ϴ�. ���� �����е���, �̹� �� �޼ҵ带 �����ϰ� �־�� ����
		}
		else if (cmd == "push_back") {
			int num;
			cin >> num;
			d.push_back(num);
		}
		else if (cmd == "pop_front") {			//�׻� pop �� ���� ������� Ȯ��
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

