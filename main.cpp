#include <iostream>
#include <cmath>
#include <algorithm>

//void qwe(int a) {
//	if (a % 2 == 0)
//	{
//		std::cout << "even";
//	}
//	else {
//		std::cout << "not-even";
//	}
//		
//}

int z1(int a) {
	return 4 * a;
}
float z10_1(float a, float b) {
	if (a != 0 && b != 0) {
		return std::pow(a, 2) + std::pow(b, 2);
	}
}
float z10_2(float a, float b) {
	if (a != 0 && b != 0) {
		return std::pow(a, 2) - std::pow(b, 2);
	}
}
float z10_3(float a, float b) {
	if (a != 0 && b != 0) {
		return std::pow(a, 2) * std::pow(b, 2);
	}
}
float z10_4(float a, float b) {
	if (a != 0 && b != 0) {
		return std::pow(a, 2) / std::pow(b, 2);
	}
}
void z27(int a) {
	for (int i = 2; i <= 6; i+=2)
	{
		std::cout << std::pow(a,i) << std::endl;
	}
}
void z28(int a) {
	int temp2 = 2;
	int temp3 = 3;
	int a2 = std::pow(a, temp2);
	int a3 = std::pow(a, temp3);
	int a5 = std::pow(a, temp3 + temp2);
	int a10 = std::pow(a, 2*(temp3 + temp2));
	int a15 = std::pow(a, 3* (temp3 + temp2));
	std::cout << a2 << "\n" << a3 << "\n" << a5 << "\n" << a10 << "\n" << a15;
} 
float z29(int a) {
	float pi = 3.14;
	if (0 < a < 180) {
		return a * pi / 180;
	}
}
float z33(float x, float a, float y) {
	return y * a / x;
}
int z36(int s1, int v1, int v2, int t) {
	return s1 + (t * (v1 + v2));
}
float z38(float a, float b) {
	float x;
	if (a != 0)
	{
		x = -b / a;
	}
	return -1;
}

int i1(int L) {
	return L / 100;
}
int i2(int M) {
	return M / 1000;
}
int i3(int byte) {
	return byte / 1024;
}
int i6_1(int a) {
	return a / 10;
}
int i6_2(int a) { 
	return a % 10;
}
int i7_1(int a) {
	return a / 10;
}
int i7_2(int a) {
	return a % 10;
}
int i7_3(int a) {
	return i7_1(a) + i7_2(a);
}
int i7_4(int a) {
	return i7_1(a) * i7_2(a);
}
int i8(int value) {
	int first_digit = value % 10; //=1
	int second_digit = value / 10;//=2
	return first_digit * 10 + second_digit;//=1*10+2
}
int i11_sum(int value) {
	int first_digit = value % 10;//1
	int second_digit = (value / 10) % 10;//32%10 == 2
	int third_digit = value / 100;//3
	return first_digit + second_digit + third_digit;
}
int i12_reverse(int value) {
	int first_digit = value % 10;//1
	int second_digit = (value / 10) % 10;//32%10 == 2
	int third_digit = value / 100;//3
	return first_digit * 100 + second_digit * 10 + third_digit;
}
int i12_loop(int value) {
	int result = 0;
	while (value)
	{
		result = result * 10;//0 10 120
		result += value % 10; //1 12 123
		value = value / 10;//32 3 0
	}
	return result;
}
int i13_reverse(int value) {
	int first_digit = value % 10;//9
	int second_digit = (value / 10) % 10;//8
	int third_digit = value / 100;//7
	return second_digit * 100 + first_digit * 10 + third_digit;
}
int i14_reverse(int value) {
	int first_digit = value % 10;
	int second_digit = (value / 10) % 10;
	int third_digit = value / 100;
	return first_digit * 100 + third_digit * 10 + second_digit;
}
int i15(int value) {
	int first_digit = value % 10;
	int second_digit = (value / 10) % 10;
	int third_digit = value / 100;
	return second_digit * 100 + third_digit * 10 + first_digit;
}
int i16(int value) {
	int first_digit = value % 10;
	int second_digit = (value / 10) % 10;
	int third_digit = value / 100;
	return third_digit * 100 + first_digit * 10 + second_digit;
}
int i17(int value) {
	return (value / 100) % 10;
}
int i19(int value) {
	return value / 60;
}
int i20(int value) {
	return value / 3600;
}
int i29_amount(int a, int b, int c) {
	return ((a * b) / (c * c));
}
int i29_free_square(int a, int b, int c) {
	return ((a * b) % (c * c));
}

bool is_even(int value) {
	return value % 2 == 0 ? true : false;
}
bool b1(int a) {
	return a > 0;
}
bool b2(int a) {
	return a % 2 == 0;
}
bool b3(int value) {
	return value % 2 == 0;
}
bool b4(int a, int b) {
	return a > 2 && b <= 3;
}
bool b5(int a, int b) {
	return a >= 0 || b < -2;
}
bool b7(int a, int b, int c) {
	return a > b && b > c;
}
bool b8(int a, int b) {
	return a % 2 != 0 && b % 2 != 0;
}
bool b9(int a, int b) {
	return a % 2 != 0 || b % 2 != 0;
}
bool b10(int a, int b) {
	return a % 2 == 0 && b % 2 != 0;
}
bool b12(int a, int b, int c) {
	return a >= 0 && b >= 0 && c >= 0;
}
bool b13(int a, int b, int c) {
	return a >= 0 || b >= 0 || c >= 0;
}
bool b14(int a, int b, int c) {
	return a >= 0 && b < 0 && c < 0;
}
bool b15(int a, int b, int c) {
	return a >= 0 && b >= 0 && c < 0;
}
bool b16(int value) {
	return value % 2 == 0 && value / 10 > 0;
}
bool b17(int value) {
	return value / 100 > 0 && value % 2 != 0;
}
bool b18(int a, int b, int c) {
	return a == b || b == c || c == a;
}
bool b19(int a, int b, int c) {
	return  abs(a) == abs(b) || abs(b) == abs(c) || abs(c) == abs(a);
}
bool b20(int value) {
	int first_digit = value / 100;//ñîòíÿ
	int second_digit = (value / 10) % 10;//äåñÿòîê
	int third_digit = value % 10;//åäåíèöà
	return  first_digit != second_digit && second_digit != third_digit && third_digit != first_digit;
}
bool b21(int value) {
	int first_digit = value / 100;//ñîòíÿ
	int second_digit = (value / 10) % 10;//äåñÿòîê
	int third_digit = value % 10;//åäåíèöà
	return  first_digit < second_digit && second_digit < third_digit;
}
bool b22(int value) {
	int first_digit = value / 100;//ñîòíÿ
	int second_digit = (value / 10) % 10;//äåñÿòîê
	int third_digit = value % 10;//åäåíèöà
	return  first_digit < second_digit && second_digit < third_digit || first_digit > second_digit && second_digit > third_digit;
}
bool b25(int x, int y) {
	return x < 0 && y >0;
}
bool b26(int x, int y) {
	return x > 0 && y < 0;
}
bool b27(int x, int y) {
	return x < 0 && y > 0 || x < 0 && y < 0;
}
bool b28(int x, int y) {
	return x > 0 && y > 0 || x < 0 && y < 0;
}
bool b29(int x, int y, int x1, int y1, int x2, int y2) {
	return x<x1 && y<y1 || x>x1 && y<y1 || x>x2 && y>y2 || x<x2 && y>y2;
}
bool b30(int a, int b, int c) {
	return a == b == c;
}
bool b31(int a, int b, int c) {
	return a == b || b == c || a == c;
}
bool b32(int a, int b, int c) {
	return std::pow(a, 2) == std::pow(b, 2) + std::pow(c, 2) || std::pow(b, 2) == std::pow(a, 2) + std::pow(c, 2) || std::pow(c, 2) == std::pow(b, 2) + std::pow(a, 2);
}
bool b33(int a, int b, int c) {
	return a + b > c && a + c > b && b + c > a;
}

void logic_and(int a, int b) {
	bool result = a && b;
	std::cout << std::boolalpha << result << std::endl;
}
void logic_or(int a, int b) {
	bool result = a or b;
	std::cout << std::boolalpha << result << std::endl;
}
void logic_xor(int a, int b) {
	bool result = a xor b;
	std::cout << std::boolalpha << result << std::endl;
}
void logic_not(bool value) {
	std::cout << std::boolalpha << !value << std::endl;
}
void print_all_begins() {
	std::cout << "Zadanie_1 --> " << z1(4) << std::endl;
	std::cout << "Zadanie_10_1 --> " << z10_1(8, 3) << std::endl;
	std::cout << "Zadanie_10_2 --> " << z10_2(12, 15) << std::endl;
	std::cout << "Zadanie_10_3 --> " << z10_3(2, 3) << std::endl;
	std::cout << "Zadanie_10_4 --> " << z10_4(11, 3) << std::endl;
	std::cout << "Zadanie_28 --> " << std::endl; z28(2);
	std::cout << std::endl << "Zadanie_29 --> " << z29(140) << std::endl;
	std::cout << "Zadanie_33 --> " << z33(10,100,20) << std::endl;
	std::cout << "Zadanie_36 --> " << z36(5, 20, 30, 2) << std::endl;
	std::cout << "Zadanie_38 --> " << z38(0, 5) << std::endl;

}
void print_all_integers(){
	std::cout << "integer_1 --> " << i1(500) << std::endl;
	std::cout << "integer_2 --> " << i2(9000) << std::endl;
	std::cout << "integer_3 --> " << i3(15000) << std::endl;
	std::cout << "integer_6_1 --> " << i6_1(56) << std::endl;
	std::cout << "integer_6_2 --> " << i6_2(56) << std::endl;
	std::cout << "integer_7_1 --> " << i7_3(33) << std::endl;
	std::cout << "integer_7_2 --> " << i7_4(33) << std::endl;
	std::cout << "integer_8 --> " << i8(21) << std::endl;
	std::cout << "integer_11 --> " << i11_sum(555) << std::endl;
	std::cout << "integer_12 --> " << i12_loop(321) << std::endl;
	std::cout << "integer_13 --> " << i13_reverse(789) << std::endl;
	std::cout << "integer_14 --> " << i14_reverse(638) << std::endl;
	std::cout << "integer_15 --> " << i15(123) << std::endl;
	std::cout << "integer_16 --> " << i16(123) << std::endl;
	std::cout << "integer_17 --> " << i17(8531) << std::endl;
	std::cout << "integer_19 --> " << i19(190) << std::endl;
	std::cout << "integer_20 --> " << i20(19290) << std::endl;
	std::cout << "integer_29_amount --> " << i29_amount(12, 20, 5) << std::endl;
	std::cout << "integer_29_free_square --> " << i29_free_square(12, 20, 5) << std::endl;
}
void print_all_booleans() {
	logic_and(0, 1);
	logic_or(0, 1);
	logic_xor(1, 1);
	logic_not(0);
	std::cout << std::boolalpha << "boolean_1 --> " << b1(2) << std::endl;
	std::cout << std::boolalpha << "boolean_2 --> " << b2(2) << std::endl;
	std::cout << std::boolalpha << "boolean_3 --> " << b3(2) << std::endl;
	std::cout << std::boolalpha << "boolean_4 --> " << b4(4, 2) << std::endl;
	std::cout << std::boolalpha << "boolean_5 --> " << b5(-1, -1) << std::endl;
	std::cout << std::boolalpha << "boolean_7 --> " << b7(4, 2, 1) << std::endl;
	std::cout << std::boolalpha << "boolean_8 --> " << b8(5, 3) << std::endl;
	std::cout << std::boolalpha << "boolean_9 --> " << b9(3, 2) << std::endl;
	std::cout << std::boolalpha << "boolean_10 --> " << b10(2, 5) << std::endl;
	std::cout << std::boolalpha << "boolean_12 --> " << b12(2, 5, 1) << std::endl;
	std::cout << std::boolalpha << "boolean_13 --> " << b13(2, -5, -1) << std::endl;
	std::cout << std::boolalpha << "boolean_14 --> " << b14(2, -2, -1) << std::endl;
	std::cout << std::boolalpha << "boolean_15 --> " << b15(2, 3, -1) << std::endl;
	std::cout << std::boolalpha << "boolean_16 --> " << b16(12) << std::endl;
	std::cout << std::boolalpha << "boolean_17 --> " << b17(113) << std::endl;
	std::cout << std::boolalpha << "boolean_18--> " << b18(1,2,3) << std::endl;
	std::cout << std::boolalpha << "boolean_19--> " << b19(1, 1, 3) << std::endl;
	std::cout << std::boolalpha << "boolean_20--> " << b20(123) << std::endl;
	std::cout << std::boolalpha << "boolean_21--> " << b21(321) << std::endl;
	std::cout << std::boolalpha << "boolean_22--> " << b22(111) << std::endl;
	std::cout << std::boolalpha << "boolean_25--> " << b25(-1, 4) << std::endl;
	std::cout << std::boolalpha << "boolean_26--> " << b26(1, -4) << std::endl;
	std::cout << std::boolalpha << "boolean_27--> " << b27(1, -4) << std::endl;
	std::cout << std::boolalpha << "boolean_28--> " << b28(1, -4) << std::endl;
	std::cout << std::boolalpha << "boolean_29--> " << b29(1,2,3,4,5,6) << std::endl;
	std::cout << std::boolalpha << "boolean_30--> " << b30(5, 5, 5) << std::endl;
	std::cout << std::boolalpha << "boolean_31--> " << b31(5, 8, 8) << std::endl;
	std::cout << std::boolalpha << "boolean_32--> " << b32(5, 12, 13) << std::endl;
	std::cout << std::boolalpha << "boolean_33--> " << b33(8, 4, 5) << std::endl;
}

int main() {
	//print_all_begins();
	//print_all_integers();
	print_all_booleans();
}