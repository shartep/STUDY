#include <iostream>
using namespace std;

void main() {

  // ������ ����� �������� �� ������
  // ����� �� ��� ������� ���������
  cout << "\nStart!!!\n";

  // ���� � �������������� ����
  try {
    // ���������� ������ �� �����
    cout << "\nBefore!\n";

    // ���������� ����� try
    // ����������� ���������� ���� int
    // ����� �� try
    throw 100;

    // ������ ����� �� ��������
    // �� ������ ������� 
    cout << "\nAfter!\n";
  }

  // ���� ��� ������ ���������� ���� int
  // �������� 100 ������ � g
  catch (int g) {

    // ��������� ������� ����������
    cout << "\nException!!!!\n";

  }

  // ����� ����������� ������ �� �����
  cout << "\nBye!!!\n";
}