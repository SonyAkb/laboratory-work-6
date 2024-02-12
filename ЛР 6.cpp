#include <iostream>
#include <string>



using namespace std;

string replace_space(string row) {
    for (int i = 0; i < row.size(); i++) {
        if (row[i] == 32) { //���� ������ ����� �������
            row[i] = '_'; //������� ������ �� _
        }
    }
    return row;
}

void print_the_sine_wave(string row) {
    int len_row = row.size(); //����� ��������� ������
    int mirror_mas[] = { 1,4,7,9,7,4}; //������ ��� ����������� �����������
    int index_mas[] = { 4,2,1,0,10,11,13 }; //�����
    for (int y = 0; y < 7; y++) { //������� �� �������
        for (int x = 0; x < len_row; x++) { //������� �� ��������
            if (y == 0) {
                if ((x - 4) % 18 == 0 || (x - 4 - mirror_mas[y]) % 18 == 0) {
                    cout << row[x];
                }
                else {
                    cout << '-';
                }
            }
            if (y == 1) {
                if ((x - 2) % 18 == 0 || (x - 2 - 1) % 18 == 0 || (x - 2 - mirror_mas[y]) % 18 == 0 || (x - 2 - 1 - mirror_mas[y]) % 18 == 0) {
                    cout << row[x];
                }
                else {
                    cout << '-';
                }
            }

            if (y == 2) {
                if ((x - 1) % 18 == 0 || (x - 1 - mirror_mas[y]) % 18 == 0) {
                    cout << row[x];
                }
                else {
                    cout << '-';
                }
            }
            if (y == 3) {
                if ((x) % 18 == 0 || (x - mirror_mas[y]) % 18 == 0) {
                    cout << row[x];
                }
                else {
                    cout << '-';
                }
            }
            if (y == 4) {
                if (((x - 10) % 18 == 0) || (x - 10 - mirror_mas[y]) % 18 == 0) {
                    cout << row[x];
                }
                else {
                    cout << '-';
                }
            }
            if (y == 5) {
                if ((x - 11) % 18 == 0 || (x - 11 - 1) % 18 == 0 || (x - 11 - mirror_mas[y]) % 18 == 0 || (x - 11 - 1 - mirror_mas[y]) % 18 == 0) {
                    cout << row[x];
                }
                else {
                    cout << '-';
                }
            }
            if (y == 6) {
                if ((x - 13) % 18 == 0 || (x - 13 - mirror_mas[y]) % 18 == 0) {
                    cout << row[x];
                }
                else {
                    cout << '-';
                }
            }
        }
        cout << endl;
    }

}

int main() {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");

    string word;
    //cout << "������� �����������" << endl;
    //getline(cin, word);
    word = "������ ������ ������ ��������� ������ ������ ������ ��������� ������ ������ ������ ���������";

    cout << "���� �����������: " << word << endl;
    cout <<"����� ������ ����������� " << word.size() << endl;
    
    word = replace_space(word);

    cout << "���� ����� �����������: " << word << endl;
    
    print_the_sine_wave(word);


    return 0;
}

