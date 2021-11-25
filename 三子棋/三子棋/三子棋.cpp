
#include "game.h"
using namespace std;
void menu() {
	cout << "*****************" << endl;
	cout << "*               *" << endl;
	cout << "*    1.play     *" << endl;
	cout << "*               *" << endl;
	cout << "*    2.exit     *" << endl;
	cout << "*               *" << endl;
	cout << "*****************" << endl;


}

void player(char board[ROW][COL]) { //�����
	int x, y;

	while (1) {
		cout << "��ҿ�ʼ���壬����������:";
		cin >> x >> y;
		if (x >= 0 && x <= ROW && y >= 0 && y <= COL && board[x - 1][y - 1] == ' ') {
			board[x - 1][y - 1] = '*';
			break;
		}
		else {
			cout << "�����ѱ�ռ��,����������" << endl;
		}
	}


}

void computerplay(char board[ROW][COL]) { //������
	cout << "��������" << endl << endl;
	int x, y;
	while (1) {
		x = rand() % ROW;
		y = rand() % COL;
		if (x >= 0 && x <= ROW && y >= 0 && y <= COL && board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}

	}


}

void display(char board[ROW][COL]) {//չʾ����
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << " " << board[i][j] << " ";
			if (j < COL - 1) {
				cout << "|";
			}

		}
		cout << endl;
		for (int m = 0; m < COL; m++) {
			if (i < ROW - 1)
				cout << "---" << " ";

		}
		cout << endl;
	}
}

bool full(char board[ROW][COL]) {//�ж������Ƿ���
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++)
			if (board[i][j] == ' ')
				return 0;
	}
	return 1;
}

char win(char board[ROW][COL]) {
	//�ж�ʤ��
	for (int i = 0; i < ROW; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];


	if (full(board)) {
		return 'P';//Pƽ�� C���� *���Ӯ #����Ӯ
	}
	return 'C';
}

void chu(char board[ROW][COL]) {
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			board[i][j] = ' ';
}
void game(char chess[ROW][COL]) {
	char res;
	chu(chess);
	display(chess);
	while (1) {
		player(chess);
		display(chess);
		res = win(chess);
		if (res != 'C')
			break;

		computerplay(chess);
		display(chess);
		res = win(chess);
		if (res != 'C')
			break;

	}
	if (res == '*')
		cout << endl << endl << endl << "Congratulations����һ�ʤ��" << endl << endl << endl;
	else if (res == '#')
		cout << endl << endl << endl << "Game Over,���Ի�ʤ" << endl << endl << endl;
	else if (res == 'P')
		cout << endl << endl << endl << "ƽ��" << endl << endl << endl;

}




int main() 
{
	char board[ROW][COL];
	int l;
	do {
		menu();
		cout << "������:";
		cin >> l;
		switch (l) {
		case 1:
			game(board);
			break;
		case 2: {
			cout << endl << endl << "Game Over" << endl << endl;
			goto flag;
			break;
		}

		default:
			cout << endl << endl << "�������������" << endl << endl;
		}

	} while (1);
flag:
	return 0;
}