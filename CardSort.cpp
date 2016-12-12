// CardSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <algorithm>

using namespace std;

long long a[1000000];



int main()
{
	int n;

	scanf_s("%d", &n);			//scanf �� �ᵵ �˴ϴ�. �׷���, 2013�������� warning ����� ������ 
								//scanf_s �� ���� �˴ϴ�. 

	for (int i = 0; i < n; i++) {

		scanf_s("%lld", &a[i]); 
	}

	sort(a, a + n);

	long long ans = a[0];			// ī���� ���� ������ 2^32 �ƴ϶�, 2^64 ������ long long 64��Ʈ ������ �����Ѵ�

	int ans_cnt = 1;
	int cnt = 1;

	for (int i = 1; i < n; i++) {

		if (a[i] == a[i - 1]) {		// ���� ī��� ���� ī�尡 ���� ���̸�
									// ī�� ���ڸ� ��� 1 ���� ���ذ���
			cnt += 1;
		}

		else {						// �ٸ� ī�� ���� ��Ÿ����, cnt = 1�� �ٽ� �ʱ�ȭ �Ѵ�
			cnt = 1;
		}

		if (ans_cnt < cnt) {		// ans_cnt ���� cnt ���� ������ ������, ans_cnt �� �� ū ���� �����Ѵ�

			ans_cnt = cnt;

			ans = a[i];				// �׸��� �� ���� ī�� ���� �����Ѵ� 
		}

		printf("\n Answer is : %lld\n", ans);		// long long type �� ���, printf ������ %d �� �ƴ϶� %lld �� �ؾ��Ѵ�

		getchar();
	}
    return 0;
}

