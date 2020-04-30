#include <iostream>

int main() {

	long long int a = 260; // long long int ���� ������������ ��-�� ���� ��� ���  5 ������� ����� 'a' ������� ������ ��� 16 � 32 ���.
	char x = 'a';  // ��������� ������ a ��� ���������� x.

	std::cout << "Max for char=" << sizeof(char) << std::endl; // ������������ ���-�� ���� ��� char
	std::cout << "Max for double=" << sizeof(double) << std::endl; // ������������ ���-�� ���� ��� double
	std::cout << "Max for int=" << sizeof(int) << std::endl; // ������������ ���-�� ���� ��� int
	std::cout << "Max for bool=" << sizeof(bool) << std::endl; // ������������ ���-�� ���� ��� bool

	std::cout << "a*a*a*a=" << a * a*a*a << std::endl; // �������� ����� � � �������� �������
	std::cout << "a*a*a*a*a=" << a * a*a*a*a << std::endl; // �������� ����� � � ����� �������

	std::cout << "'a'+53=" << x + 53 << std::endl; // c����� 'a' �� ������� ASCII ����� ��� 97
	std::cout << "37+'a'=" << 37 + x << std::endl; // c����� 'a' �� ������� ASCII ����� ����� ��� 97
	getchar();

	return 0;
}