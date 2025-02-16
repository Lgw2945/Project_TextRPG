#include "../headerFile/MyMath.h"
int GetRandom(int _min, int _max)
{
	// 난수 엔진 초기화
	std::random_device rd;  // 하드웨어 기반 난수 생성기 (시드용)
	std::mt19937 gen(rd()); // Mersenne Twister 엔진 초기화

	// 범위 내 난수 생성기 (최소, 최대)
	std::uniform_int_distribution<> dist(_min, _max);

	return dist(gen);
}

float GetRandomf(float _min, float _max)
{
	// 난수 엔진 초기화
	std::random_device rd;  // 하드웨어 기반 난수 생성기 (시드용)
	std::mt19937 gen(rd()); // Mersenne Twister 엔진 초기화

	// 범위 내 난수 생성기 (최소, 최대)
	std::uniform_real_distribution<> dist(_min, _max);


	return static_cast<float>(dist(gen));
}

void PressAnyKey()
{
	int i = 0;
	std::cout << "\n▶ 아무 키나 입력해주세요.";
	i = _getch();
}

//숫자만 받는 함수
int GetValidNumber() {
	int number;

	while (true) {
		cin >> number;

		// 입력 오류 체크
		if (cin.fail()) {
			cin.clear(); // 오류 플래그를 지우기
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 잘못된 입력 무시
			cout << "잘못된 입력입니다. 숫자를 입력해주세요: " << endl;
			//continue; // 다시 입력 받기
		}

		// 유효한 입력인 경우 루프 종료
		//cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 추가적으로 줄바꿈까지 무시
		return number; // 유효한 숫자를 반환
	}
}