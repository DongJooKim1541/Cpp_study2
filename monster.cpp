#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
struct list {
	char* name;
	int hp;
	int mp;
	int atk;
	int def;
	int spd;
	int lev;
};
int main() {

	srand(time(NULL));
	struct list adv[15];
	int choice;
	char* name1;
	for (int i = 0; i < 15; i++) {
		name1 = new char[100];
		cout << "몬스터 " << i + 1 << "의 이름 : ";
		cin >> name1;
		adv[i].name = name1;
		adv[i].hp = 100 + 2 * i;
		adv[i].mp = 100 + 5 * i;
		adv[i].atk = 10 + 7 * i;
		adv[i].def = 100 + i;
		adv[i].spd = i;
		adv[i].lev = 1 + 8 * i;
	}
	delete[] name1;
	system("cls");
	while (true) {
		cout << "당신이 모험할 곳?" << endl;
		cout << "1. 파리바게트  2. 동방  3. 집  4. 강의실  5. 이현이네 집  6. 끝내기" << endl;

		cin >> choice;
		if (choice < 1 && choice>6) {
			cout << "다시 입력해 이 멍청아!!!!" << endl;
		}
		else {
			int r;
			switch (choice) {
			case 1:
				r = rand() % 3;
				while (true) {
					cout << "몬스터 " << r + 1 << "의 정보" << endl;
					cout << "이름 : " << adv[r].name << endl;
					cout << "체력 : " << adv[r].hp << endl;
					cout << "마나 : " << adv[r].mp << endl;
					cout << "공격력 : " << adv[r].atk << endl;
					cout << "방어도 : " << adv[r].def << endl;
					cout << "속도 : " << adv[r].spd << endl;
					cout << "레벨 : " << adv[r].lev << endl;
					cout << "0. 메인 메뉴로 돌아가기" << endl;
					int a;
					cin >> a;
					cin.clear();
					cin.ignore();
					if (a == 0)break;
					else { cout << "다시 입력하시오.\n"; }
				}
				break;
				system("cls");
			case 2:
				r = rand() % 3 + 3;
				while (true) {
					cout << "몬스터 " << r + 1 << "의 정보" << endl;
					cout << "이름 : " << adv[r].name << endl;
					cout << "체력 : " << adv[r].hp << endl;
					cout << "마나 : " << adv[r].mp << endl;
					cout << "공격력 : " << adv[r].atk << endl;
					cout << "방어도 : " << adv[r].def << endl;
					cout << "속도 : " << adv[r].spd << endl;
					cout << "레벨 : " << adv[r].lev << endl;
					cout << "0. 메인 메뉴로 돌아가기" << endl;
					int a;
					cin >> a;
					cin.clear();
					cin.ignore();
					if (a == 0)break;
					else { cout << "다시 입력하시오.\n"; }
				}
				break;
				system("cls");
			case 3:
				r = rand() % 3 + 6;
				while (true) {
					cout << "몬스터 " << r + 1 << "의 정보" << endl;
					cout << "이름 : " << adv[r].name << endl;
					cout << "체력 : " << adv[r].hp << endl;
					cout << "마나 : " << adv[r].mp << endl;
					cout << "공격력 : " << adv[r].atk << endl;
					cout << "방어도 : " << adv[r].def << endl;
					cout << "속도 : " << adv[r].spd << endl;
					cout << "레벨 : " << adv[r].lev << endl;
					cout << "0. 메인 메뉴로 돌아가기" << endl;
					int a;
					cin >> a;
					cin.clear();
					cin.ignore();
					if (a == 0)break;
					else { cout << "다시 입력하시오.\n"; }
				}
				break;
				system("cls");
			case 4:
				r = rand() % 3 + 9;
				while (true) {
					cout << "몬스터 " << r + 1 << "의 정보" << endl;
					cout << "이름 : " << adv[r].name << endl;
					cout << "체력 : " << adv[r].hp << endl;
					cout << "마나 : " << adv[r].mp << endl;
					cout << "공격력 : " << adv[r].atk << endl;
					cout << "방어도 : " << adv[r].def << endl;
					cout << "속도 : " << adv[r].spd << endl;
					cout << "레벨 : " << adv[r].lev << endl;
					cout << "0. 메인 메뉴로 돌아가기" << endl;
					int a;
					cin >> a;
					cin.clear();
					cin.ignore();
					if (a == 0)break;
					else { cout << "다시 입력하시오.\n"; }
				}
				break;
				system("cls");
			case 5:
				r = rand() % 3 + 12;
				while (true) {
					cout << "몬스터 " << r + 1 << "의 정보" << endl;
					cout << "이름 : " << adv[r].name << endl;
					cout << "체력 : " << adv[r].hp << endl;
					cout << "마나 : " << adv[r].mp << endl;
					cout << "공격력 : " << adv[r].atk << endl;
					cout << "방어도 : " << adv[r].def << endl;
					cout << "속도 : " << adv[r].spd << endl;
					cout << "레벨 : " << adv[r].lev << endl;
					cout << "0. 메인 메뉴로 돌아가기" << endl;
					int a;
					cin >> a;
					cin.clear();
					cin.ignore();
					if (a == 0)break;
					else { cout << "다시 입력하시오.\n"; }
				}
				break;
				system("cls");
			default:
				break;
			}
		}
		if (choice == 6)break;
	}
	return 0;
}