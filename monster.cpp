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
		cout << "���� " << i + 1 << "�� �̸� : ";
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
		cout << "����� ������ ��?" << endl;
		cout << "1. �ĸ��ٰ�Ʈ  2. ����  3. ��  4. ���ǽ�  5. �����̳� ��  6. ������" << endl;

		cin >> choice;
		if (choice < 1 && choice>6) {
			cout << "�ٽ� �Է��� �� ��û��!!!!" << endl;
		}
		else {
			int r;
			switch (choice) {
			case 1:
				r = rand() % 3;
				while (true) {
					cout << "���� " << r + 1 << "�� ����" << endl;
					cout << "�̸� : " << adv[r].name << endl;
					cout << "ü�� : " << adv[r].hp << endl;
					cout << "���� : " << adv[r].mp << endl;
					cout << "���ݷ� : " << adv[r].atk << endl;
					cout << "�� : " << adv[r].def << endl;
					cout << "�ӵ� : " << adv[r].spd << endl;
					cout << "���� : " << adv[r].lev << endl;
					cout << "0. ���� �޴��� ���ư���" << endl;
					int a;
					cin >> a;
					cin.clear();
					cin.ignore();
					if (a == 0)break;
					else { cout << "�ٽ� �Է��Ͻÿ�.\n"; }
				}
				break;
				system("cls");
			case 2:
				r = rand() % 3 + 3;
				while (true) {
					cout << "���� " << r + 1 << "�� ����" << endl;
					cout << "�̸� : " << adv[r].name << endl;
					cout << "ü�� : " << adv[r].hp << endl;
					cout << "���� : " << adv[r].mp << endl;
					cout << "���ݷ� : " << adv[r].atk << endl;
					cout << "�� : " << adv[r].def << endl;
					cout << "�ӵ� : " << adv[r].spd << endl;
					cout << "���� : " << adv[r].lev << endl;
					cout << "0. ���� �޴��� ���ư���" << endl;
					int a;
					cin >> a;
					cin.clear();
					cin.ignore();
					if (a == 0)break;
					else { cout << "�ٽ� �Է��Ͻÿ�.\n"; }
				}
				break;
				system("cls");
			case 3:
				r = rand() % 3 + 6;
				while (true) {
					cout << "���� " << r + 1 << "�� ����" << endl;
					cout << "�̸� : " << adv[r].name << endl;
					cout << "ü�� : " << adv[r].hp << endl;
					cout << "���� : " << adv[r].mp << endl;
					cout << "���ݷ� : " << adv[r].atk << endl;
					cout << "�� : " << adv[r].def << endl;
					cout << "�ӵ� : " << adv[r].spd << endl;
					cout << "���� : " << adv[r].lev << endl;
					cout << "0. ���� �޴��� ���ư���" << endl;
					int a;
					cin >> a;
					cin.clear();
					cin.ignore();
					if (a == 0)break;
					else { cout << "�ٽ� �Է��Ͻÿ�.\n"; }
				}
				break;
				system("cls");
			case 4:
				r = rand() % 3 + 9;
				while (true) {
					cout << "���� " << r + 1 << "�� ����" << endl;
					cout << "�̸� : " << adv[r].name << endl;
					cout << "ü�� : " << adv[r].hp << endl;
					cout << "���� : " << adv[r].mp << endl;
					cout << "���ݷ� : " << adv[r].atk << endl;
					cout << "�� : " << adv[r].def << endl;
					cout << "�ӵ� : " << adv[r].spd << endl;
					cout << "���� : " << adv[r].lev << endl;
					cout << "0. ���� �޴��� ���ư���" << endl;
					int a;
					cin >> a;
					cin.clear();
					cin.ignore();
					if (a == 0)break;
					else { cout << "�ٽ� �Է��Ͻÿ�.\n"; }
				}
				break;
				system("cls");
			case 5:
				r = rand() % 3 + 12;
				while (true) {
					cout << "���� " << r + 1 << "�� ����" << endl;
					cout << "�̸� : " << adv[r].name << endl;
					cout << "ü�� : " << adv[r].hp << endl;
					cout << "���� : " << adv[r].mp << endl;
					cout << "���ݷ� : " << adv[r].atk << endl;
					cout << "�� : " << adv[r].def << endl;
					cout << "�ӵ� : " << adv[r].spd << endl;
					cout << "���� : " << adv[r].lev << endl;
					cout << "0. ���� �޴��� ���ư���" << endl;
					int a;
					cin >> a;
					cin.clear();
					cin.ignore();
					if (a == 0)break;
					else { cout << "�ٽ� �Է��Ͻÿ�.\n"; }
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