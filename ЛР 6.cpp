#include <iostream>
#include <string>

using namespace std;

char replace_space(char symbol);
void print_the_sine_wave(string row);

int main() {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251"); //����������� �������� ��� ������
    system("cls");

    string a_set_of_letters;

    cout << "������� �����������" << endl;
    getline(cin, a_set_of_letters); //���� ����������� �  ���������� a_set_of_letters
    cout << endl;

    //����������� � ������ �� � ������� ����� � ���� ����� � � ��� ������� ��������� �������, � ������� ��� ������ ������.
    //��� ������� ������ � ���������, ��������� ���� ���������� ������, � ����� ������ ������ �������� �� ���� �� ������.
    //���� � ������ �� ������, ������� ����� �� ��������. � ��� ��������� ����� � � ������ ����� ������ ������.

    cout << "���� ����������� ����� �������� � ���� ��������� " << endl << endl;
    print_the_sine_wave(a_set_of_letters); //����� ����������� � ���� ���������

    return 0;
}

char replace_space(char symbol) { //������ ������� �� _
    if (symbol == 32) { //���� ������ ����� �������
        symbol = '_'; //������� ������ �� _
    }
    return symbol;
}

void print_the_sine_wave(string row) {
    int mirror_mas[] = { 1, 5, 8, 10, 8, 5, 1 }; //������ ��� ����������� �����������
    int index_mas[] = { 4, 2, 1, 0, 11, 12, 14 }; //����� �� x �����

    for (int y = 0; y < 7; y++) { //������� �� �������
        for (int x = 0; x < row.size(); x++) { //������� �� ��������
            if (y == 0 || y == 6) {
                if ((x - index_mas[y]) % 20 == 0 || (x - index_mas[y] - 1) % 20 == 0 || (x - index_mas[y] - 2) % 20 == 0) {
                    cout << replace_space(row[x]);
                }
                else {
                    cout << ' ';
                }
            }
            else if (y == 1 || y == 5) {
                if ((x - index_mas[y]) % 20 == 0 || (x - index_mas[y] - 1) % 20 == 0 || (x - index_mas[y] - mirror_mas[y]) % 20 == 0 || (x - index_mas[y] - 1 - mirror_mas[y]) % 20 == 0) {
                    cout << replace_space(row[x]);
                }
                else {
                    cout << ' ';
                }
            }
            else {
                if ((x - index_mas[y]) % 20 == 0 || (x - index_mas[y] - mirror_mas[y]) % 20 == 0) {
                    cout << replace_space(row[x]);
                }
                else {
                    cout << ' ';
                }
            }
        }
        cout << endl;
    }
}