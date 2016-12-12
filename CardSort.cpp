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

	scanf_s("%d", &n);			//scanf 를 써도 됩니다. 그런데, 2013버전에서 warning 생기기 때문에 
								//scanf_s 를 쓰면 됩니다. 

	for (int i = 0; i < n; i++) {

		scanf_s("%lld", &a[i]); 
	}

	sort(a, a + n);

	long long ans = a[0];			// 카드의 값이 정수형 2^32 아니라, 2^64 임으로 long long 64비트 형으로 정의한다

	int ans_cnt = 1;
	int cnt = 1;

	for (int i = 1; i < n; i++) {

		if (a[i] == a[i - 1]) {		// 이전 카드와 현재 카드가 같은 값이면
									// 카드 숫자를 계속 1 개씩 더해간다
			cnt += 1;
		}

		else {						// 다른 카드 값이 나타나면, cnt = 1로 다시 초기화 한다
			cnt = 1;
		}

		if (ans_cnt < cnt) {		// ans_cnt 값이 cnt 저장 값보다 작으면, ans_cnt 에 더 큰 값을 저장한다

			ans_cnt = cnt;

			ans = a[i];				// 그리고 그 때의 카드 값을 저장한다 
		}

		printf("\n Answer is : %lld\n", ans);		// long long type 일 경우, printf 에서는 %d 가 아니라 %lld 로 해야한다

		getchar();
	}
    return 0;
}

