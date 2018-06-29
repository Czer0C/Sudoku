#ifndef _GIAO_DIEN_GAME_
#define _GIAO_DIEN_GAME_

#include "Sudoku.h"

/*
	Tên hàm: hiện ghi chú cho nút lệnh lưu lượt chơi 
	Đầu vào: không có
	Đầu ra: không có -> void
*/
void interfaceSaveGame();

/*
	Tên hàm: hiện ghi chú cho nút lệnh tạo lượt chơi mới
	Đầu vào: không có
	Đầu ra: không có -> void
*/
void interfaceNewGame();

/*
	Tên hàm: hiện ghi chú cho nút lệnh chế độ người chơi
	Đầu vào: không có
	Đầu ra: không có -> void
*/
void interfaceEditValue();

/*	
	Tên hàm: hiện ghi chú cho nút lệnh chế độ máy tính chơi
	Đầu vào: không có
	Đầu ra: không có -> void
*/
void interfaceComPlay();

/*
	Tên hàm: hiện ghi chú cho nút lệnh gợi ý đáp án
	Đầu vào: không có
	Đầu ra: không có -> void
*/
void interfaceHint();

/*
	Tên hàm: hiện ghi chú cho nút gợi ý đáp án sai
	Đầu vào: không có
	Đầu ra: không có -> void
*/
void interfaceShowWrongValue();

/*
	Tên hàm: hiện ghi chú cho nút lệnh hoàn thành game còn đang chơi
	Đầu vào: không có
	Đầu ra: không có -> void
*/
void interfaceFinishGame();

/*
	Tên hàm: hiện ghi chú cho nút lệnh hiển thị luật chơi
	Đầu vào: không có
	Đầu ra: không có -> void
*/
void interfaceGameRules();

/*
	Tên hàm: hiện ghi chú cho nút lệnh chế độ máy tính chơi trong trường hợp có đường xuyên
	Đầu vào: không có
	Đầu ra: không có -> void
*/
void interfaceDiagonalMode();

/*
	Tên hàm: hiện ghi chú cho nút lệnh lưu trò chơi
	Đầu vào: không có
	Đầu ra: không có -> void
*/
void interfaceLoadGame();


/*
	Tên hàm: tạo lượt chơi mới
	Đầu vào: lưới sudoku ban đầu grid
	Đầu ra: không có -> void
*/
void newGame(sudoku grid[][9]);

/*
	Tên hàm: mở trò chơi từ tập tin mặc định của chương trình ban đầu
	Đầu vào: lưới sudoku đang sử dụng grid
	Đầu ra: không có -> void
*/
void loadGame(sudoku grid[][9]);


/*
	Tên hàm: lưu lượt chơi hiện tại vào tập tin mặc định của chương trình
	Đầu vào: lưới sudoku hiện tại grid
	Đầu ra: không có -> void
*/
void saveGame(sudoku grid[9][9]);


/*
	Tên hàm: kích hoạt bảng chứa các giá trị của lưới sudoku hiện tại
			gồm 2 chế độ, 1 là tập tin mặc định và 2 là tập tin bên ngoài
	Đầu vào: lưới sudoku hiện tại grid, chế độ hiển thị mode (1 là tập tin thuộc chương trình
															  và còn lại là tập tin từ bên ngoài)
	Đầu ra: không có -> void
*/
void initiateInterface(sudoku grid[9][9], int mode);

/*
	Tên hàm: kích hoạt chế độ người chơi
	Đầu vào: lưới sudoku hiện tại grid
	Đầu ra: không có -> void
*/
void editValue(sudoku grid[9][9]);

/*
	Tên hàm: hiển thị đáp án đúng gồm 2 chế độ,
			 1 là tập tin mặc định và 2 là tập tin bên ngoài
	Đầu vào: lưới sudoku hiện tại currentGrid, lưới sudoku kết quả answersGrid
	Đầu ra: không có -> void
*/	
void showHint(sudoku currentGrid[9][9], sudoku answersGrid[9][9]);


/*
	Tên hàm: kích hoạt chế độ gợi ý đáp án đúng
	Đầu vào: lưới sudoku hiện tại grid
	Đầu ra: không có -> void
*/
void revealValue(sudoku currentGrid[9][9]);

/*
	Tên hàm: hiển thị đáp án sai khi lưới sudoku đã đầy
	Đầu vào: lưới sudoku hiện tại grid
	Đầu ra: không có -> void
*/
void showWrongValue(sudoku grid[9][9]);

/*
	Tên hàm: hiển thị đáp án do máy tính giải gồm 2 chế độ,
			 1 là lưới sudoku bình thường, 2 là lưới sudoku có đường xuyên
	Đầu vào: lưới sudoku hiện tại grid, chế độ mode, địa chỉ đầu vào address
	Đầu ra: không có -> void
*/
void showComputerResult(sudoku grid[9][9], int mode, string address);

/*
	Tên hàm: kích hoạt chế độ máy tính tự chơi
	Đầu vào: lưới sudoku hiện tại grid, chế độ chơi( 1 là lưới bình thường, 2 là lưới có đường xuyên)
	Đầu ra: không có -> void
*/
void computerPlaying(sudoku grid[][9], int mode);

/*
	Tên hàm: kích hoạt chế độ máy tính tự hoàn thành lưới sudoku còn dang dở
	Đầu vào: lưới sudoku đang chơi currentGrid
	Đầu ra: không có -> void
*/
void finishGame(sudoku currentGrid[9][9]);


/*
	Tên hàm: hiện ghi bảng lệnh
	Đầu vào: không có
	Đầu ra: không có -> void
*/
void displayCommand();

/*
	Tên hàm: hiện ghi chú cho bảng lệnh
	Đầu vào: không có
	Đầu ra: không có -> void
*/
void displayGameRules();

/*
	Tên hàm: hiển thị menu chính của trò chơi
	Đầu vào: không có
	Đầu ra: không có -> void
*/
void openingInterface();

/*
	Tên hàm: hiển thị phần giao diện mở đầu khi bắt đầu chạy chương trình
	Đầu vào: lưới sudoku ban đầu grid
	Đầu ra: không có -> void
*/
void interact(sudoku grid[][9]);


/*
	Tên hàm: Khởi động trò chơi
	Đầu vào: không có
	Đầu ra: không có -> void
*/
void initiateGame();
#endif // !_GIAO_DIEN_GAME_
