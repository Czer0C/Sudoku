#ifndef _SUDOKU_H_
#define _SUDOKU_H_

#include "DuongXuyen.h"

/*
	Tên hàm: điền kín các ô còn trống của 1 lưới sudoku
	Đầu vào: lưới sudoku grid
	Đầu ra: true khi giải được lưới sudoku và false khi ngược lại -> bool
*/
bool SolveSudoku(sudoku grid[9][9]);

/*
	Tên hàm: tìm xem trong lưới sudoku grid có ô nào còn trống hay không
	Đầu vào: lưới sudoku grid, chỉ số dòng row, chỉ số cột col
	Đầu ra: true khi vẫn còn ô trống và false khi ngược lại -> bool
*/
bool FindUnassignedLocation(sudoku grid[9][9], int &row, int &col);

/*
	Tên hàm: kiểm tra xem giá trị num đã được sử dụng trong dòng row của lưới sudoku hay chưa
	Đầu vào: lưới sudoku grid, chỉ số cột đang xét, giá trị num cần xét
	Đầu ra: true khi num đã được sử dụng và false khi ngược lại -> bool
*/
bool UsedInRow(sudoku grid[9][9], int row, int num);

/*
	Tên hàm: kiểm tra xem giá trị num đã được sử dụng trong cột col của lưới sudoku hay chưa
	Đầu vào: lưới sudoku grid, chỉ số dòng đang xét, giá trị num cần xét
	Đầu ra: true khi num đã được sử dụng và false khi ngược lại -> bool
*/
bool UsedInCol(sudoku grid[9][9], int col, int num);

/*
	Tên hàm: kiểm tra xem giá trị num đã được sử dụng trong ma trận nhỏ của lưới sudoku hay chưa
	Đầu vào: lưới sudoku grid, chỉ số cột bắt dầu của ma trận nhỏ boxStartRow,
			 chỉ số dòng bắt dầu của ma trận nhỏ boxStartCol, giá trị num cần xét
	Đầu ra: true khi num đã được sử dụng và false khi ngược lại -> bool
*/
bool UsedInBox(sudoku grid[9][9], int boxStartRow, int boxStartCol, int num);

/*
	Tên hàm: kiểm trả xem giá trị num có thể được sử dụng tại vị trí của ô sudoku đang xét trong lưới hay không
	Đầu vào: lưới sudoku grid, chỉ số dòng, cột đang xét: row, col, giá trị num cần xét
	Đầu ra: true khi giải có thể sử dụng và false khi ngược lại -> bool
*/
bool isSafe(sudoku grid[9][9], int row, int col, int num);

/*
	Tên hàm: kiểm tra xem lưới sudoku có hợp lệ hay không
	Đầu vào: lưới sudoku grid
	Đầu ra: true khi hợp lệ sudoku và false khi ngược lại -> bool
*/
bool isCorrect(sudoku grid[9][9]);

/*
	Tên hàm: thêm các chỉ số bổ trợ cho lưới sudoku(vị trí ô, cờ hiệu)
	Đầu vào: lưới sudoku grid
	Đầu ra: không có -> void
*/
void addExtraStat(sudoku currentGrid[9][9]);

/*
	Tên hàm: kiểm tra xem lưới sudoku outGrid có chung giá trị khởi tạo với lưới inGrid hay không
	Đầu vào: lưới sudoku inGrid, outGrid
	Đầu ra: true khi outGrid có chung giá trị khởi tạo với lưới inGrid và false khi ngược lại -> bool
*/
bool isInitiated(sudoku inGrid[9][9], sudoku outGrid[9][9]);

/*
	Tên hàm: tạo 1 lưới sudoku hoàn chỉnh tạm thời
	Đầu vào: lưới sudoku grid cần tạo
	Đầu ra: không có -> void
*/
void createTemporarySudoku(sudoku grid[9][9]);

/*
	Tên hàm: ẩn 1 số lượng ô trên lưới sudoku dựa vào độ khó difficulty
	Đầu vào: lưới sudoku grid cần ẩn, độ khó difficutly
	Đầu ra: không có -> void
*/
void hideSquare(sudoku grid[9][9], int difficulty);

/*
	Tên hàm: khởi tạo 1 lưới sudoku chưa hoàn chỉnh cho người chơi
	Đầu vào: lưới sudoku grid cần tạo
	Đầu ra: không có -> void
*/
void generateSudoku(sudoku grid[9][9], int difficulty);

/*
	Tên hàm: khởi tạo giá trị cho các ô trong lưới sudoku
	Đầu vào: lưới sudoku grid
	Đầu ra: không có -> void
*/
void initiateGrid(sudoku currentGrid[9][9]);

/*
	Tên hàm: khởi tạo 1 lưới sudoku có đường xuyên
	Đầu vào: lưới sudoku grid cần tạo
	Đầu ra: không có -> void
*/
void initiateDiagonalSudoku(sudoku grid[9][9]);

/*
	Tên hàm: điền kín các ô cho lưới sudoku có đường xuyên
	Đầu vào: lưới sudoku grid cần hoàn thiện
	Đầu ra: không có -> void
*/
void solveDiagonalSudoku(sudoku grid[9][9]);

/*
	Tên hàm: khởi tạo 1 lưới sudoku với 3 giá trị cần thiết(giá trị ô, toạ độ, cờ hiệu)
	Đầu vào: lưới sudoku grid cần tạo
	Đầu ra: không có -> void
*/
void initiateSudoku(sudoku grid[9][9]);

/*
	Tên hàm: đánh dấu các ô sudoku có giá trị sai so với kết quả bằng cách bật cờ hiệu cho các ô sai
	Đầu vào: lưới sudoku đang xét currentGrid, lưới sudoku kết quả resultGrid, lưới sudoku ban đầu initialGrid
	Đầu ra: không có -> void
*/
void spotWrongValue(sudoku currentGrid[9][9], sudoku resultGrid[9][9], sudoku initialGrid[9][9]);

/*
	Tên hàm: Kiểm tra xem lưới sudoku có phải là lưới rỗng hay không
	Đầu vào: lưới sudoku đang xét Grid
	Đầu ra: true nếu rỗng và false khi ngược lại -> bool
*/
bool isBlank(sudoku grid[9][9]);

/*
	Tên hàm: Kiểm tra các cột của lưới sudoku có hợp lệ không
	Đầu vào: lưới sudoku đang xét Grid
	Đầu ra: true nếu thoả và false khi ngược lại -> bool
*/
bool checkRow(sudoku grid[9][9]);

/*
	Tên hàm: Kiểm tra các dòng của lưới sudoku có hợp lệ không
	Đầu vào: lưới sudoku đang xét Grid
	Đầu ra: true nếu thoả và false khi ngược lại -> bool
*/
bool checkCol(sudoku grid[9][9]);

/*
	Tên hàm: Kiểm tra 9 ô vuông nhỏ của lưới sudoku có hợp lệ không
	Đầu vào: lưới sudoku đang xét Grid
	Đầu ra: true nếu thoả và false khi ngược lại -> bool
*/
bool checkBox(sudoku grid[9][9]);
#endif // !_SUDOKU_H_
