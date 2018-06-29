#ifndef _HO_TRO_
#define _HO_TRO_
#pragma comment(lib, "Winmm.lib")
#include <windows.h>
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <io.h>
#include <fcntl.h>
#include <sstream>
using namespace std;

// 1 ô trong lưới sudoku sẽ chứa 3 phần tử liên quan tới nó
struct sudoku
{
	// value là giá trị của ô ( từ 1 tới 9)
	int value;
	// position là mã số ô( từ 0 tới 80)
	int position;
	// flag là cở hiệu để phân loại ô
	int flag;
};

/*
	Tên hàm: đọc giá trị của 1 lưới sudoku từ 1 tập tin đầu vào
	Đầu vào: tập tin đầu vào, ma trận sudoku grid
	Đầu ra: không có -> void
*/
void readFile(fstream &file, sudoku grid[][9]);

/*
	Tên hàm: ghi giá trị của 1 lưới sudoku ra 1 tập tin đầu ra
	Đầu vào: tập tin đầu ra, ma trận sudoku grid
	Đầu ra: không có -> void
*/
void writeFile(fstream &fOut, sudoku grid[9][9]);

/*
	Tên hàm: kiểm tra xem giá trị item đang xét có tồn tại trong 1 mảng Array gồm n phần tử hay không
	Đầu vào: mảng đang xét Array, số lượng phần tử trong mảng n, giá trị cần kiểm tra item
	Đầu ra: true khi item có tồn tại trong Array và false khi ngược lại -> bool
*/
bool existed(int Array[], int n, int item);

/*
	Tên hàm: phát sinh 1 danh sách các số không trùng nhau trong 1 khoảng cho trước
	Đầu vào: số lượng cần phát sinh quantity, từ min tới max
	Đầu ra: mảng các số ngẫu nhiên -> int*
*/
int* randomizeItem(int quantity, int min, int max);

/*
	Tên hàm: dịch chuyển con trỏ trong console tới vị trí x, y
	Đầu vào: tung độ y, hoành độ x
	Đầu ra: không có -> void
*/
void placeCursor(int x, int y);

/*
	Tên hàm: kiểm tra giá trị num có nằm trong miền xác định
	Đầu vào: giá trị cần xét num, giá trị cực tiểu min và cực đại max
	Đầu ra: true khi num có nằm trong miền xác định và false khi không tồn tại -> bool
*/
bool isValid(int num, int min, int max); 

/*
	Tên hàm: chỉnh màu cho chữ in ra trên console
	Đầu vào: chỉ số màu color
	Đầu ra: không có -> void
*/
void setcolor(unsigned short color);

/*
	Tên hàm: ép người dùng nhập 1 giá trị nguyên
	Đầu vào: không có
	Đầu ra: số nguyên -> int
*/
int getInt();

/*
	Tên hàm: chỉnh kích cỡ cho chữ ở màn hình console
	Đầu vào: kích cỡ chữ FontSize
	Đầu ra: không có -> void
*/
void setFontAndSize(int FontSize);

#endif // !_HO_TRO_
