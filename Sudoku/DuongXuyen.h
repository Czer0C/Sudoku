#ifndef _DUONG_XUYEN_
#define _DUONG_XUYEN_

#include "HoTro.h"


/*
	Tên hàm: tìm vị trí của ô đường xuyên kế tiếp so với vị trí của 1 ô đã cho
	Đầu vào: vị trí của ô hiện tại position
	Đầu ra: vị trí của ô kế tiếp -> int
*/
int findNext(int position);

/*
	Tên hàm: tạo 1 mảng chứa vị trí của 9 ô đường xuyên
	Đầu vào: không có
	Đầu ra: mảng vị trí của 9 ô đường xuyên -> int*
*/
int* createDiagonalLine();

/*
	Tên hàm: Kiểm tra xem lưới sudoku đầu vào có đúng dạng đường xuyên không
	Đầu vào: lưới sudoku cần xét
	Đầu ra: true khi đúng dạng, false khi ngược lại -> bool
*/
bool isDiagonalSudoku(sudoku grid[9][9]);

#endif // !_DUONG_XUYEN_