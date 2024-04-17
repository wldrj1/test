#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 1. 년도 입력받기
	int year;
	scanf("%d", &year);
	
	// 2. 윤년인지 아닌지 파악
	// year이 4의 배수 -> "year값이 4로 나누어 떨어진다."
	//		-> "year값이 4로 나누었을 때 나머지가 0이다."
	//		=> year % 4 == 0
	// year이 100의 배수가 아님 -> "year 값이 100으로 나누어 떨어지지 않는다."
	//		-> "year값이 100으로 나누었을 때 나머지가 0이 아니다."
	//		=> year % 100 != 0

	// 윤년 조건 :: (4의 배수이면서 100의 배수가 아닌 경우) or
	//				(400의 배수인 경우)
	// tip. &&연산자가 || 연산자보다 더 먼저 연산이 수행됨

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		printf("1");
		// 윤년인 조건
	}
	else {
		printf("0");
	}

}