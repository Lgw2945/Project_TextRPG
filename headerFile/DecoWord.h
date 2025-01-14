#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "MyMath.h"

using namespace std;

class DecoWord
{
public:
	vector<string> DecoWordList1;
	vector<string> DecoWordList2;

	string nickname(string _name) { return " "; }

	/*
	static DecoWord& getInstance() {
		static DecoWord instance; // 유일한 객체 생성
		return instance;
	}
	*/
private:
	DecoWord();
	DecoWord(const DecoWord&) = delete;
	DecoWord& operator=(const DecoWord&) = delete;
};



/*

vector<string> DecoWordList1 =
{
	"엄마의 심부름으로 나갔다 게임기에 돈을 다써 걱정하는",
	"아빠의 계속되는 잔소리로 집을 나왔지만 갈 곳 없는",
	"따스한 햇살에 산책하러 나왔다 갑작스레 내린 소나기를 맞아버린",
	"들뜬 마음으로 머리를 자르고 나타났는데 아무도 관심을 안 가져줘 뻘쭘한",
	"마음에 드는 여성에게 고백했는데 눈물을 터뜨려 쓰레기가 된",
	"썸인줄알고 영화 보자고 했는데, 이런 관계 부담스럽다며 연락하지 말라는 말을 들은",
	"산책을 하다가 동전을 주워 돈이 두둑한",
	"용사와 마주치기 전 강도에게 이미 돈을 한번 털린",
	"전쟁을 마치고 그녀에게 고백하러 가던중 용사를 만나버린",
	"소년가장으로 5남매의 생계를 책임지던",
	"수능에서 만점을 맞고 좋은 대학에 들어가기 전 들뜬",
	"비트코인으로 대박 터뜨리고 건물 계약하러 가던",
	"장거리 연애중 3달만에 여자친구를 만나러 가던",
	"군 입대 100일 휴가 나와서 부모님 얼굴을 보러가던",
	"상병 말에 여자 친구가 다른 남자 생겼다며 전화기로 통보하자 탈영해 버린",
	"군 제대 후 들뜬 마음으로 고향으로 내려가던",
	"취미가 여장인"
	"코딩하다가 머리 터질거 같아 잠깐 산책나온"
	//18
};

vector<string> DecoWordList2 =
{
	" 늠름한",
	" 능숙한",
	" 용감한",
	" 어리숙한",
	" 바보같은",
	" 대단한",
	" 소시오패스",
	" 사이코패스",
	" 부족한",
	" 육중한",
	" 뚱뚱한",
	" 야윈",
	" 잘생긴",
	" 못생긴",
	" 무서운",
	" 지혜로운",
	" 멍청한",
	" 엄청난"
	//18
};

string DecoWord::nickname(string _name)
{
	int i = GetRandom(0, 17);
	_name += DecoWordList1[i];
	int j = GetRandom(0, 17);
	_name += DecoWordList2[j];
	return _name;
}
*/