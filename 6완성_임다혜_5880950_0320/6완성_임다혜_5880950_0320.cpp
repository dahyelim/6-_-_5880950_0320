#include <stdio.h>

//입력값 정수 n 이하의 모든 소수를 출력하는 의사코드
/*1. 정수 n을 입력받는다.
2. n이하의 모든 숫자를 반복한다.
-i를 2부터 n까지 반복시킨다.
-i가 소수임을 확인하기 위해 j를 2부터 i-1까지 증가시키며 i를 j로 나눈다.
 만약 i가 j로 나누어 떨어지면 소수가 아니므로 반복문을 중단한다.
	i가 j로 나누어 떨어지지 않는다면 소수이므로 출력한다.*/



int main() {
	int n;
	printf("정수 n을 입력하세요 : ");
	scanf_s("%d", &n);
	int i, j;

	printf("%d 이하의 소수 : ", n);
	for (i = 2; i <= n; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			printf("%d ", i);
		}
	}
	return 0;
}