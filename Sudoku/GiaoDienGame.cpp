#include "GiaoDienGame.h"

void interfaceLoadGame()
{
	setcolor(15);
	wcout << "<========================>\n";
	wcout << "|";
	setcolor(14);
	wcout << "        LOAD GAME       ";
	setcolor(15);
	wcout << "|\n";
	wcout << "<========================>\n";
	wcout << L"\nĐang nạp lại game "; Sleep(300); wcout << ". "; Sleep(300); wcout << ". "; Sleep(300); wcout << ". ";
	wcout << L"\nXong!\n"; Sleep(500);
}

void interfaceSaveGame()
{
	setcolor(15);
	wcout << "<========================>\n";
	wcout << "|";
	setcolor(14);
	wcout << "        SAVE GAME       ";
	setcolor(15);
	wcout << "|\n";
	wcout << "<========================>\n";
	Sleep(300); wcout << L"Đang lưu "; Sleep(300); wcout << ". "; Sleep(300); wcout << ". "; Sleep(300); wcout << ". \n";
}

void interfaceNewGame()
{
	setcolor(15);
	wcout << "<========================>\n";
	wcout << L"| ";
	setcolor(14);
	wcout << L"     LƯỢT CHƠI MỚI     ";
	setcolor(15);
	wcout << "|\n";
	wcout << L"| Độ khó: 1 => dễ\t |\n|\t  2 => trung bình|\n|\t  3 => khó  \t |\n";
	wcout << "<========================>\n";
}

void interfaceEditValue()
{
	setcolor(15);
	wcout << "<========================>\n";
	wcout << L"| ";
	setcolor(14);
	wcout << L"     BẠN ĐANG CHƠI     ";
	setcolor(15);
	wcout << "|\n|";
	setcolor(12);
	wcout << L"   ô ban đầu: đỏ        ";
	setcolor(15);
	wcout << "|\n|";
	wcout << L"   ô của bạn: trắng     ";
	setcolor(15);
	wcout << "|\n";
	wcout << L"| Nhập <end> để kết thúc |\n";
	wcout << "<========================>\n";
}

void interfaceComPlay()
{
	setcolor(15);
	wcout << L"<========================>\n";
	wcout << L"|";
	setcolor(14);
	wcout << L"    CHẾ ĐỘ MÁY CHƠI     ";
	setcolor(15);
	wcout << "|\n|";
	setcolor(12);
	wcout << L"   ô ban đầu: đỏ        ";
	setcolor(15);
	wcout << "|\n|";
	setcolor(10);
	wcout << L"   ô máy chơi: xanh     ";
	setcolor(15);
	wcout << "|\n";
	wcout << L"|                        |\n";
	wcout << "<========================>\n";
	wcout << L" Máy tính đang suy nghĩ ";
	Sleep(500); wcout << ". "; Sleep(500); wcout << L". "; Sleep(500); wcout << L". \n\n"; Sleep(400);
}

void interfaceDiagonalMode()
{
	setcolor(15);
	wcout << L"<========================>\n";
	wcout << L"|";
	setcolor(14);
	wcout << L"    CHẾ ĐỘ ĐƯỜNG XUYÊN  ";
	setcolor(15);
	wcout << "|\n|";
	setcolor(10);
	wcout << L"   ô bình thường: xanh  ";
	setcolor(15);
	wcout << "|\n|";
	setcolor(12);
	wcout << L"   ô đường xuyên: đỏ    ";
	setcolor(15);
	wcout << "|\n";
	wcout << L"|                        |\n";
	wcout << "<========================>\n";
}

void interfaceHint()
{
	setcolor(15);
	wcout << "<========================>\n";
	wcout << L"| ";
	setcolor(14);
	wcout << L"      CHẾ ĐỘ GỢI Ý     ";
	setcolor(15);
	wcout << "|\n|";
	setcolor(12);
	wcout << L"   ô ban đầu: đỏ        ";
	setcolor(15);
	wcout << "|\n|";
	setcolor(11);
	wcout << L"   ô được 'mở': xanh    ";
	setcolor(15);
	wcout << "|\n";
	wcout << L"|   còn lại: trắng   ";
	wcout << L"    |\n";
	wcout << L"|nhập <end> để kết thúc ";
	wcout << L" |\n";
	wcout << "<========================>\n";
}

void interfaceShowWrongValue()
{
	setcolor(15);
	wcout << L"<========================>\n";
	wcout << L"| ";
	setcolor(14);
	wcout << L"  HIỂN THỊ GIÁ TRỊ SAI";
	setcolor(15);
	wcout << " |\n|";
	setcolor(12);
	wcout << L"   ô ban đầu: đỏ        ";
	setcolor(15);
	wcout << "|\n|";
	setcolor(14);
	wcout << L"   ô sai: vàng          ";
	setcolor(15);
	wcout << "|\n";
	setcolor(15);
	wcout << L"|   còn lại: trắng   ";
	wcout << "    |\n";
	wcout << "<========================>\n";
}

void interfaceFinishGame()
{
	setcolor(15);
	wcout << L"<========================>\n";
	wcout << L"| ";
	setcolor(14);
	wcout << L"    HOÀN THÀNH GAME   ";
	setcolor(15);
	wcout << " |\n";
	wcout << L"|      CÒN DANG DỠ       |\n|";
	setcolor(12);
	wcout << L"   ô ban đầu: đỏ        ";
	setcolor(15);
	wcout << "|\n|";
	setcolor(14);
	wcout << L"   ô sai(thiếu): vàng   ";
	setcolor(15);
	wcout << "|\n";
	setcolor(15);
	wcout << L"|   còn lại: trắng   ";
	wcout << "    |\n";
	wcout << "<========================>\n";
}

void interfaceGameRules()
{
	setcolor(15);
	wcout << "<========================>\n";
	wcout << L"| ";
	setcolor(14);
	wcout << L"Luật chơi và Cách chơi ";
	setcolor(15);
	wcout << "|\n";
	wcout << "<========================>\n";
}

void displayCommand()
{
	setcolor(12);
	wcout << L"[Phím chức năng]\t[Các phím chức năng của chương trình]\n";
	setcolor(15);
	wcout << L"\t?\t\t Hiển thị lại bảng chức năng\n";
	wcout << L"\tH\t\t Hiển thị luật chơi và cách chơi\n";
	wcout << L"\tN\t\t Lượt chơi mới\n";
	wcout << L"\tO\t\t Mở một Sudoku\n";
	wcout << L"\tE\t\t Chế độ người tự chơi\n";
	wcout << L"\tC\t\t Chế độ máy tự chơi\n";
	wcout << L"\tR\t\t Gợi ý lời giải\n";
	wcout << L"\tW\t\t Gợi ý vị trí sai\n";
	wcout << L"\tF\t\t Hoàn thiện lưới Sudoku đang giải\n";
	wcout << L"\tD\t\t Sudoku có chứa đường xuyên\n";
	wcout << L"\tS\t\t Lưu game\n";
	wcout << L"\tT\t\t Tắt nhạc\n";
	wcout << L"\tU\t\t Mở nhạc\n";
	wcout << L"\tQ\t\t Thoát khỏi chương trình\n\n";
}

void displayGameRules()
{
	wcout << L"* Nhiệm vụ của người chơi là phải điền kín những ô còn lại với điều kiện:\n";
	wcout << L"\t+ Mỗi hàng (ngang) của lưới phải có đủ các số từ 1 đến 9, không cần theo thứ tự\n";
	wcout << L"\t+ Mỗi cột (dọc) phải có đủ các số từ 1 đến 9, không cần theo thứ tự\n";
	wcout << L"\t+ Mỗi vùng 3x3, được viền đậm, phải có đủ các số từ 1 đến 9\n";
	wcout << L"* Khi người chơi không muốn nhập tọa độ nữa, hãy kết thúc bằng cách nhập <end>\n";
}

void newGame(sudoku grid[][9])
{
	initiateGrid(grid);
	fstream fileOut("DefaultSudoku.in", ios::out);
	// tạo mới lưới Sudoku
	initiateSudoku(grid);
	// lưu lưới vưa tạo ra một tập tin mặc định là DefaultSudoku.in -> đây là tập tin mặc định
	writeFile(fileOut, grid);
	// kích hoạt bảng chứa lưới sudoku vừa tạo
	initiateInterface(grid, 1);
	fileOut.close();
}

void loadGame(sudoku grid[][9])
{
	int mode;

	// Nhập chế độ chơi
	do
	{
		wcout << L"Chọn chế độ chơi(1 lại từ đầu, 2 tiếp tục từ lượt trước): ";
		mode = 0;
		mode = getInt();
	} while (!isValid(mode, 1, 2));

	string fIn;
	if (mode == 1)
	{
		wcout << L"Bạn đã chọn chơi lại từ đầu\n";
		fIn = "DefaultSudoku.in";
	}
	else
	{
		wcout << L"Bạn đã chọn tiếp tục trò chơi\n";
		fIn = "DefaultSudoku.out";
	}
		
	fstream fileIn(fIn, ios::in);
	readFile(fileIn, grid);
	// bổ sung các chỉ số cần thiết cho các ô trong lưới sudoku
	addExtraStat(grid);
	initiateInterface(grid, 1);
	fileIn.close();
}

void saveGame(sudoku grid[9][9])
{
	fstream fileOut("DefaultSudoku.out", ios::out);
	writeFile(fileOut, grid);
	fileOut.close();
	wcout << L"Game đã được lưu\n";
}

void initiateInterface(sudoku grid[9][9], int mode)
{
	
	// Kiểm tra lưới trống
	if (isBlank(grid))
	{
		setcolor(12);
		wcout << L"Bạn chưa tạo mới hay mở 1 lưới sudoku có sẵn\n";
		setcolor(15);
		return;
	}
	

	// Lấy vị trí ô ban đầu
	fstream fileIn("DefaultSudoku.in", ios::in);
	sudoku newGame[9][9];
	readFile(fileIn, newGame);

	// Biến lock dùng để khoá/mở chế độ chia màu
	int lock = 0;
	if (!isInitiated(newGame, grid))
	{
		setcolor(12);
		wcout << L"Đây là tập tin không được khởi tạo sẵn nên sẽ không thể chia màu\n";
		lock = 1;
		setcolor(15);
	}
		
	int initialValue[81];
	int currentValue[81];
	int count = 0;
	for (int row = 0; row < 9; row++)
	{
		for (int col = 0; col < 9; col++)
		{
			// đổ giá trị của lưới sudoku ra mảng 1 chiều
			currentValue[count] = grid[row][col].value;
			// đổ giá trị của kết quả lưới sudoku ra mảng 1 chiều
			initialValue[count++] = newGame[row][col].value;
		}
	}

	// Dùng để đánh số thứ tự dòng của bảng
	int rowIndex = 1;
	// Dùng để truy xuất phần tử trong danh sách cần in
	count = 0;
	// In các giá trị ra bảng
	for (int i = 0; i < 15; i++)
	{
		if (i == 0)
		{
			setcolor(15);
			wcout << L"    A   B   C   D   E   F   G   H   I\n";
			wcout << L"  ╔═══╤═══╤═══╦═══╤═══╤═══╦═══╤═══╤═══╗" << endl;
		}

		if (i == 1 || i == 3 || i == 6 || i == 8 || i == 11 || i == 13)
		{
			setcolor(15);
			wcout << L"  ╟───┼───┼───╫───┼───┼───╫───┼───┼───╢";
		}
		for (int j = 0; j < 8; j++)
		{
			if ((j == 0) && (i != 1 && i != 3 && i != 6 && i != 8 && i != 11 && i != 13))
			{
				setcolor(15);
				wcout << rowIndex++ << L" ║ ";
				// Nếu là giá trị khác giá trị khởi tạo sẽ chỉnh màu trắng
				if (currentValue[count] != initialValue[count] && currentValue[count] != 0)
				{
					setcolor(15);
					wcout << currentValue[count];
				}
				// Nếu bằng với giá trị khởi tạo sẽ có màu đỏ( chỉ khi lock khác 1 )
				else if (currentValue[count] == initialValue[count] && currentValue[count] != 0 && lock != 1)
				{
					setcolor(12);
					wcout << currentValue[count];
				}
				// Giá trị bằng 0 sẽ được thay thế bằng khoảng trắng
				else if(currentValue[count] == 0)
				{
					wcout << " ";
				}
				// Trường hợp còn lại sẽ có màu trắng
				else
				{
					setcolor(15);
					wcout << currentValue[count];
				}
				count++;
				setcolor(15);
				wcout << L" │ ";
			}

			if ((j == 1 || j == 3 || j == 4 || j == 6 || j == 7) && (i != 1 && i != 3 && i != 6 && i != 8 && i != 11 && i != 13))
			{
				// Nếu là giá trị khác giá trị khởi tạo sẽ chỉnh màu trắng
				if (currentValue[count] != initialValue[count] && currentValue[count] != 0)
				{
					setcolor(15);
					wcout << currentValue[count];
				}
				// Nếu bằng với giá trị khởi tạo sẽ có màu đỏ( chỉ khi lock khác 1 )
				else if (currentValue[count] == initialValue[count] && currentValue[count] != 0 && lock != 1)
				{
					setcolor(12);
					wcout << currentValue[count];
				}
				// Giá trị bằng 0 sẽ được thay thế bằng khoảng trắng
				else if (currentValue[count] == 0)
				{
					wcout << " ";
				}
				// Trường hợp còn lại sẽ có màu trắng
				else
				{
					setcolor(15);
					wcout << currentValue[count];
				}
				count++;
				setcolor(15);
				wcout << L" │ ";
			}

			if ((j == 2 || j == 5 || j == 7) && (i != 1 && i != 3 && i != 6 && i != 8 && i != 11 && i != 13))
			{
				// Nếu là giá trị khác giá trị khởi tạo sẽ chỉnh màu trắng
				if (currentValue[count] != initialValue[count] && currentValue[count] != 0)
				{
					setcolor(15);
					wcout << currentValue[count];
				}
				// Nếu bằng với giá trị khởi tạo sẽ có màu đỏ( chỉ khi lock khác 1 )
				else if (currentValue[count] == initialValue[count] && currentValue[count] != 0 && lock != 1)
				{
					setcolor(12);
					wcout << currentValue[count];
				}
				// Giá trị bằng 0 sẽ được thay thế bằng khoảng trắng
				else if (currentValue[count] == 0)
				{
					wcout << " ";
				}
				// Trường hợp còn lại sẽ có màu trắng
				else
				{
					setcolor(15);
					wcout << currentValue[count];
				}
				count++;
				setcolor(15);
				wcout << L" ║ ";
			}
		}
		if (i == 4 || i == 9)
		{
			setcolor(15);
			wcout << endl << L"  ╠═══╪═══╪═══╬═══╪═══╪═══╬═══╪═══╪═══╣";
		}
		if (i == 14)
		{
			setcolor(15);
			wcout << endl << L"  ╚═══╧═══╧═══╩═══╧═══╧═══╩═══╧═══╧═══╝";
		}
		wcout << endl;
	}
}

void editValue(sudoku grid[9][9])
{
	fstream fileOut, fileIn;
	fileIn.open("DefaultSudoku.in", ios::in);
	int mode = 1;
	
	sudoku initialGrid[9][9];
	readFile(fileIn, initialGrid);
	// Nếu lưới sudoku hiện tại không phải là lưới mặc định của chương trình thì sẽ tắt chế độ chia màu
	if (!isInitiated(initialGrid, grid))
		mode = 2;
	
	
	string coordinate;

	// Mảng toạ độ để ép người dùng nhập chính xác định dạng
	string validCoordinate[81] = { "a1","b1","c1","d1","e1","f1","g1","h1","i1","a2","b2","c2","d2","e2","f2","g2","h2","i2","a3","b3","c3","d3","e3","f3","g3","h3","i3","a4","b4","c4","d4","e4","f4","g4","h4","i4","a5","b5","c5","d5","e5","f5","g5","h5","i5","a6","b6","c6","d6","e6","f6","g6","h6","i6","a7","b7","c7","d7","e7","f7","g7","h7","i7","a8","b8","c8","d8","e8","f8","g8","h8","i8","a9","b9","c9","d9","e9","f9","g9","h9","i9" };

	int flag;
	do
	{
		flag = 0;
		wcout << L"Nhập toạ độ ô cần điền(vd: a1, c1, d9, g7...): ";
		cin.sync();
		getline(cin, coordinate);
		// chuyển dữ liệu tọa độ in hoa thành thường
		for (int i = 0; i < coordinate.length(); i++)
			coordinate[i] = tolower(coordinate[i]);
		if (coordinate == "end")
			break;
		
		// kiểm tra xem toạ độ có hợp lệ không
		for (int index = 0; index < 81; index++)
			if (coordinate == validCoordinate[index])
				flag = 1;
		if (flag == 0)
		{
			setcolor(12);
			wcout << L"Bạn đã nhập sai định dạng của toạ độ, vui lòng nhập lại hoặc thoát khỏi chức năng chơi game\n";
			setcolor(15);
			continue;
		}

		// truy xuất chỉ số cột/dòng thông qua mã ASCII
		int row = (int)coordinate[1] - 49;
		int col = (int)coordinate[0] - 97;
		// Nếu toạ độ nhập vào là ô khởi tạo thì sẽ không hợp lệ
		if (initialGrid[row][col].value > 0 && mode == 1)
		{
			setcolor(12);
			wcout << L"Toạ độ ô bạn vừa nhập là ô đã được khởi tạo sẵn nên không thể thay đổi giá trị được, vui lòng nhập lại hoặc thoát khỏi chức năng chơi game\n";
			setcolor(15);
			continue;
		}

		// nhập giá trị cần điền vào ô
		int value;
		wcout << L"Nhập vào giá trị của ô (từ 1 tới 9): ";
		do
		{
			value = 0;
			// Người dùng phải nhập đúng số kiểu dữ liệu
			value = getInt();
			if (!isValid(value, 1, 9))
			{
				setcolor(12);
				wcout << L"Không hợp lệ, hãy thử lại: ";
				setcolor(15);
			}
				
		} while (!isValid(value, 1, 9));

		// Nạp dữ liệu vừa nhập vào vị trí ô hiện tại
		grid[row][col].value = value;

		// cập nhật lại lưới sudoku
		system("CLS");
		interfaceEditValue();
		initiateInterface(grid, mode);
		int height, length;
		// Nếu người dùng đã nhập đầy thì sẽ hiện 1 trong 2 thông báo này
		if (isCorrect(grid))
		{
			setcolor(11);
			wcout << L"\nChúc mừng bạn đã hoàn thành trò chơi, cảm ơn vì đã sử dụng chương trình này\nHãy chọn lệnh tiếp theo\n";
			setcolor(15);
		}
		
		if (!FindUnassignedLocation(grid, length, height) && !isCorrect(grid))
		{
			setcolor(12);
			wcout << L"\nThông báo: bạn đã điền kín các lưới nhưng kết quả vẫn chưa chính xác\nHãy kiểm tra lại các ô thật kĩ\n";
			setcolor(15);
		}
			
	} while (coordinate != "end");
	
	// Xoá màn hình và hiển thị lại menu
	system("CLS");
	displayCommand();
	fileIn.close();
}

void showHint(sudoku currentGrid[9][9], sudoku answersGrid[9][9])
{
	interfaceHint();
	sudoku initialGrid[9][9];
	int currentValue[81];
	int initialValue[81];
	int answersValue[81];
	int flag[81];

	// Lấy vị trí các ô khởi tạo
	fstream fileIn;
	fileIn.open("DefaultSudoku.in", ios::in);
	readFile(fileIn, initialGrid);

	// Dùng để đánh số thứ tự cho các phần tử trong danh sách
	int count = 0;
	// đổ dữ liệu ra mảng 1 chiều
	for (int row = 0; row < 9; row++)
	{
		for (int col = 0; col < 9; col++)
		{
			// lấy danh sách các giá trị trong lưới đang chơi
			currentValue[count] = currentGrid[row][col].value;
			// lấy danh sách các giá trị trong lưới ban đầu
			initialValue[count] = initialGrid[row][col].value;
			// lấy danh sách các giá trị cờ hiệu của lưới hiện tại
			flag[count] = currentGrid[row][col].flag;
			// lấy danh sách các giá trị trong lưới kết quả
			answersValue[count++] = answersGrid[row][col].value;
		}
	}

	// Dùng để đánh số thứ tự dòng của bảng
	int rowIndex = 1;
	// Dùng để truy xuất phần tử trong danh sách cần in
	count = 0;
	// In các giá trị ra bảng
	for (int i = 0; i < 15; i++)
	{
		if (i == 0)
		{
			setcolor(15);
			wcout << L"    A   B   C   D   E   F   G   H   I\n";
			wcout << L"  ╔═══╤═══╤═══╦═══╤═══╤═══╦═══╤═══╤═══╗" << endl;
		}

		if (i == 1 || i == 3 || i == 6 || i == 8 || i == 11 || i == 13)
		{
			setcolor(15);
			wcout << L"  ╟───┼───┼───╫───┼───┼───╫───┼───┼───╢";
		}
		for (int j = 0; j < 8; j++)
		{
			if ((j == 0) && (i != 1 && i != 3 && i != 6 && i != 8 && i != 11 && i != 13))
			{
				setcolor(15);
				wcout << rowIndex++ << L" ║ ";
				// Ô khởi tạo có màu đỏ
				if (currentValue[count] == initialValue[count] && currentValue[count] == answersValue[count])
				{
					setcolor(12);
					wcout << currentValue[count];
				}
				// Ô cần hiện kết quả có màu xanh nhạt
				else if (flag[count] == 1)
				{
					setcolor(11);
					wcout << answersValue[count];
				}
				// giá trị rỗng
				else if (currentValue[count] == 0)
				{

					setcolor(15);
					wcout << " ";
				}
				// Ô có giá trị của người chơi có màu trắng
				else
				{
					setcolor(15);
					wcout << currentValue[count];
				}
				count++;
				setcolor(15);
				wcout << L" │ ";
			}

			if ((j == 1 || j == 3 || j == 4 || j == 6 || j == 7) && (i != 1 && i != 3 && i != 6 && i != 8 && i != 11 && i != 13))
			{
				// Ô khởi tạo có màu đỏ
				if (currentValue[count] == initialValue[count] && currentValue[count] == answersValue[count])
				{
					setcolor(12);
					wcout << currentValue[count];
				}
				// Ô cần hiện kết quả có màu xanh nhạt
				else if (flag[count] == 1)
				{
					setcolor(11);
					wcout << answersValue[count];
				}
				// giá trị rỗng
				else if (currentValue[count] == 0)
				{

					setcolor(15);
					wcout << " ";
				}
				// Ô có giá trị của người chơi có màu trắng
				else
				{
					setcolor(15);
					wcout << currentValue[count];
				}
				count++;
				setcolor(15);
				wcout << L" │ ";
			}

			if ((j == 2 || j == 5 || j == 7) && (i != 1 && i != 3 && i != 6 && i != 8 && i != 11 && i != 13))
			{
				// Ô khởi tạo có màu đỏ
				if (currentValue[count] == initialValue[count] && currentValue[count] == answersValue[count])
				{
					setcolor(12);
					wcout << currentValue[count];
				}
				// Ô cần hiện kết quả có màu xanh nhạt
				else if (flag[count] == 1)
				{
					setcolor(11);
					wcout << answersValue[count];
				}
				// giá trị rỗng
				else if (currentValue[count] == 0)
				{

					setcolor(15);
					wcout << " ";
				}
				// Ô có giá trị của người chơi có màu trắng
				else
				{
					setcolor(15);
					wcout << currentValue[count];
				}
				count++;
				setcolor(15);
				wcout << L" ║ ";
			}
		}
		if (i == 4 || i == 9)
		{
			setcolor(15);
			wcout << endl << L"  ╠═══╪═══╪═══╬═══╪═══╪═══╬═══╪═══╪═══╣";
		}
		if (i == 14)
		{
			setcolor(15);
			wcout << endl << L"  ╚═══╧═══╧═══╩═══╧═══╧═══╩═══╧═══╧═══╝";
		}
		wcout << endl;
	}
}

void revealValue(sudoku currentGrid[9][9])
{
	fstream fileInit;
	fstream fileIn;
	string coordinate;
	sudoku answersGrid[9][9];
	fileInit.open("DefaultSudoku.in", ios::in);

	//	đọc tập tin khởi tạo rồi giải
	readFile(fileInit, answersGrid);
	SolveSudoku(answersGrid);

	// Dùng để roà sát toạ độ hợp lệ
	string validCoordinate[81] = { "a1","b1","c1","d1","e1","f1","g1","h1","i1","a2","b2","c2","d2","e2","f2","g2","h2","i2","a3","b3","c3","d3","e3","f3","g3","h3","i3","a4","b4","c4","d4","e4","f4","g4","h4","i4","a5","b5","c5","d5","e5","f5","g5","h5","i5","a6","b6","c6","d6","e6","f6","g6","h6","i6","a7","b7","c7","d7","e7","f7","g7","h7","i7","a8","b8","c8","d8","e8","f8","g8","h8","i8","a9","b9","c9","d9","e9","f9","g9","h9","i9" };
	int count;
	int flag;

	// Hiển thị lời giải
	do
	{
		count = 0;
		flag = 0;
		wcout << L"Nhập toạ độ ô cần bạn cần biết đáp án(vd: a1, c1, d9, g7...): ";
		cin.sync();
		getline(cin, coordinate);
		// chuyển tọa độ đã nhập từ in hoa thành thường
		for (int i = 0; i < coordinate.length(); i++)
			coordinate[i] = tolower(coordinate[i]);
		if (coordinate == "end")
			break;
		// Kiểm tra toạ độ hợp lệ
		for (int index = 0; index < 81; index++)
			if (coordinate == validCoordinate[index])
				flag = 1;
		if (flag == 0)
		{
			setcolor(12);
			wcout << L"Bạn đã nhập sai định dạng của toạ độ, vui lòng nhập lại hoặc thoát khỏi chức năng chơi game\n";
			setcolor(15);
			continue;
		}

		// Truy xuất chỉ số dòng/cột thông qua toạ độ nhập vào bằng mã ASCII
		int row = (int)coordinate[1] - 49;
		int col = (int)coordinate[0] - 97;

	    // Bật cờ cho ô cần hiển thị kết quả
		currentGrid[row][col].flag = 1;
		// cập nhật lưới
		system("CLS");
		showHint(currentGrid, answersGrid);
	} while (coordinate != "end");

	// Tắt cờ hiệu cho các ô
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
			currentGrid[row][col].flag = 0;

	// Xoá màn hình và hiển thị lại menu
	system("CLS");
	displayCommand();
}

void showWrongValue(sudoku grid[9][9])
{
	// kiểm tra xem lưới đã đầy chưa
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
		{
			if (grid[row][col].value == 0)
			{
				setcolor(12);
				wcout << L"Bạn chưa điền kín tất cả các ô nên chưa thể sử dụng chức năng này\nVui lòng nhập lệnh khác\n";
				setcolor(15);
				return;
			}
		}
	int count = 0;
	// tạo 1 ma trận kết quả đúng từ tập tin khởi tạo
	sudoku resultGrid[9][9];
	fstream fileIn("DefaultSudoku.in", ios::in);
	readFile(fileIn, resultGrid);
	SolveSudoku(resultGrid);

	// tạo 1 ma trận chứa các giá trị khởi tạo
	fileIn.open("DefaultSudoku.in", ios::in);
	sudoku initialGrid[9][9];
	readFile(fileIn, initialGrid);
	int initialValue[81];
	int answer[81];
	int result[81];
	int random[81];
	
	// Đổ các giá trị ra mảng 1 chiều
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
		{
			// lấy giá trị các ô khởi tạo
			initialValue[count] = initialGrid[row][col].value;
			// lấy giá trị các ô do người dùng nhập
			answer[count] = grid[row][col].value;
			// lấy giá trị các kết quả
			result[count++] = resultGrid[row][col].value;
		}

	// Chạy hàm đánh dấu các ô có lỗi sai
	spotWrongValue(grid, resultGrid, initialGrid);

	// Dùng để đánh số thứ tự của các phần tử trong danh sách
	int id = 0;
	// Lấy danh sách các vị trí có giá trị sai
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
			if (grid[row][col].flag == 2)
				random[id++] = grid[row][col].position;

	srand((unsigned int)time(NULL));

	// truy xuất ngẫu nhiên 1 vị trí sai trong danh sách trên
	int pick = rand() % id;


	// Dùng để đánh số thứ tự dòng của bảng
	int rowIndex = 1;
	// Dùng để truy xuất phần tử trong danh sách cần in
	count = 0;
	// In các giá trị ra bảng
	for (int i = 0; i < 15; i++)
	{
		if (i == 0)
		{
			setcolor(15);
			wcout << L"    A   B   C   D   E   F   G   H   I\n";
			wcout << L"  ╔═══╤═══╤═══╦═══╤═══╤═══╦═══╤═══╤═══╗" << endl;
		}

		if (i == 1 || i == 3 || i == 6 || i == 8 || i == 11 || i == 13)
		{
			setcolor(15);
			wcout << L"  ╟───┼───┼───╫───┼───┼───╫───┼───┼───╢";
		}
		for (int j = 0; j < 8; j++)
		{
			if ((j == 0) && (i != 1 && i != 3 && i != 6 && i != 8 && i != 11 && i != 13))
			{
				setcolor(15);
				wcout << rowIndex++ << L" ║ ";
				// Giá trị khởi tạo có màu đỏ
				if (answer[count] == initialValue[count])
				{
					setcolor(12);
					wcout << answer[count];
				}
				// giá trị sai có màu vàng
				else if (count == random[pick])
				{
					setcolor(14);
					wcout << answer[count];
				}
				// giá trị đúng có màu trắng
				else
				{
					setcolor(15);
					wcout << answer[count];
				}
				count++;
				setcolor(15);
				wcout << L" │ ";
			}

			if ((j == 1 || j == 3 || j == 4 || j == 6 || j == 7) && (i != 1 && i != 3 && i != 6 && i != 8 && i != 11 && i != 13))
			{
				// Giá trị khởi tạo có màu đỏ
				if (answer[count] == initialValue[count])
				{
					setcolor(12);
					wcout << answer[count];
				}
				// giá trị sai có màu vàng
				else if (count == random[pick])
				{
					setcolor(14);
					wcout << answer[count];
				}
				// giá trị đúng có màu trắng
				else
				{
					setcolor(15);
					wcout << answer[count];
				}
				count++;
				setcolor(15);
				wcout << L" │ ";
			}

			if ((j == 2 || j == 5 || j == 7) && (i != 1 && i != 3 && i != 6 && i != 8 && i != 11 && i != 13))
			{
				// Giá trị khởi tạo có màu đỏ
				if (answer[count] == initialValue[count])
				{
					setcolor(12);
					wcout << answer[count];
				}
				// giá trị sai có màu vàng
				else if (count == random[pick])
				{
					setcolor(14);
					wcout << answer[count];
				}
				// giá trị đúng có màu trắng
				else
				{
					setcolor(15);
					wcout << answer[count];
				}
				count++;
				setcolor(15);
				wcout << L" ║ ";
			}
		}
		if (i == 4 || i == 9)
		{
			setcolor(15);
			wcout << endl << L"  ╠═══╪═══╪═══╬═══╪═══╪═══╬═══╪═══╪═══╣";
		}
		if (i == 14)
		{
			setcolor(15);
			wcout << endl << L"  ╚═══╧═══╧═══╩═══╧═══╧═══╩═══╧═══╧═══╝";
		}
		wcout << endl;
	}
	// tắt cờ hiệu cho toàn bộ lưới sudoku
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
			grid[row][col].flag = 0;
}

void showComputerResult(sudoku grid[9][9], int mode, string address)
{
	int count = 0;
	int temp[81];
	sudoku init[9][9];
	int initial[81];
	fstream fileIn;
	// tên tập tin chứa đường xuyên hoặc tập tin chứa giá trị sudoku tạo sẵn
	if (mode == 1)
		fileIn.open("DefaultSudoku.in", ios::in);
	else
		fileIn.open(address, ios::in);
		
	readFile(fileIn, init);
	count = 0;
	// Đổ các giá trị ra mảng 1 chiều
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
		{
			// Lấy danh sách giá trị của lưới hiện tại
			temp[count] = grid[row][col].value;
			// lấy danh sách giá trị của lưới khởi tạo
			initial[count++] = init[row][col].value;
		}
	// dùng để hiển thị chỉ số dòng của bảng sudoku
	int rowIndex = 1;


	// Dùng để xác định phần tử cần in ra bảng 
	count = 0;

	// Đổ giá trị của các loại ô ra bảng
	for (int i = 0; i < 15; i++)
	{
		if (i == 0)
		{
			setcolor(15);
			wcout << L"    A   B   C   D   E   F   G   H   I\n";
			wcout << L"  ╔═══╤═══╤═══╦═══╤═══╤═══╦═══╤═══╤═══╗" << endl;
		}

		if (i == 1 || i == 3 || i == 6 || i == 8 || i == 11 || i == 13)
		{
			setcolor(15);
			wcout << L"  ╟───┼───┼───╫───┼───┼───╫───┼───┼───╢";
		}
		for (int j = 0; j < 8; j++)
		{
			if ((j == 0) && (i != 1 && i != 3 && i != 6 && i != 8 && i != 11 && i != 13))
			{
				setcolor(15);
				wcout << rowIndex++ << L" ║ ";
				// Ô khởi tạo có màu đỏ
				if (temp[count] == initial[count] && temp[count] != 0 && initial[count] != -1)
				{
					setcolor(12);
					wcout << temp[count];
				}
				// ô trống sẽ được thay thế bằng khoảng trắng
				else if (temp[count] == 0)
				{
					wcout << " ";
				}
				// Giá trị đường xuyên có màu đỏ
				else if (initial[count] == -1)
				{
					setcolor(12);
					wcout << temp[count];
				}
				// trường hợp còn lại là màu xanh lá
				else
				{
					setcolor(10);
					wcout << temp[count];
				}
				count++;
				setcolor(15);
				wcout << L" │ ";
			}

			if ((j == 1 || j == 3 || j == 4 || j == 6 || j == 7) && (i != 1 && i != 3 && i != 6 && i != 8 && i != 11 && i != 13))
			{
				// Ô khởi tạo có màu đỏ
				if (temp[count] == initial[count] && temp[count] != 0 && initial[count] != -1)
				{
					setcolor(12);
					wcout << temp[count];
				}
				// ô trống sẽ được thay thế bằng khoảng trắng
				else if (temp[count] == 0)
				{
					wcout << " ";
				}
				// Giá trị đường xuyên có màu đỏ
				else if (initial[count] == -1)
				{
					setcolor(12);
					wcout << temp[count];
				}
				// trường hợp còn lại là màu xanh lá
				else
				{
					setcolor(10);
					wcout << temp[count];
				}
				count++;
				setcolor(15);
				wcout << L" │ ";
			}

			if ((j == 2 || j == 5 || j == 7) && (i != 1 && i != 3 && i != 6 && i != 8 && i != 11 && i != 13))
			{
				// Ô khởi tạo có màu đỏ
				if (temp[count] == initial[count] && temp[count] != 0 && initial[count] != -1)
				{
					setcolor(12);
					wcout << temp[count];
				}
				// ô trống sẽ được thay thế bằng khoảng trắng
				else if (temp[count] == 0)
				{
					wcout << " ";
				}
				// Giá trị đường xuyên có màu đỏ
				else if (initial[count] == -1)
				{
					setcolor(12);
					wcout << temp[count];
				}
				// trường hợp còn lại là màu xanh lá
				else
				{
					setcolor(10);
					wcout << temp[count];
				}
				count++;
				setcolor(15);
				wcout << L" ║ ";
			}
		}
		if (i == 4 || i == 9)
		{
			setcolor(15);
			wcout << endl << L"  ╠═══╪═══╪═══╬═══╪═══╪═══╬═══╪═══╪═══╣";
		}
		if (i == 14)
		{
			setcolor(15);
			wcout << endl << L"  ╚═══╧═══╧═══╩═══╧═══╧═══╩═══╧═══╧═══╝";
		}
		wcout << endl;
	}
}

void computerPlaying(sudoku grid[][9], int mode)	
{
	
	//Chế độ bình thường
	if (mode == 1)
	{
		sudoku resultGrid[9][9];
		fstream fileIn("DefaultSudoku.in", ios::in);
		readFile(fileIn, resultGrid);
		SolveSudoku(resultGrid);
		showComputerResult(resultGrid, mode, "");
	}
	// Chế độ đường xuyên
	else
	{
		sudoku Diagonal[9][9];
		fstream fileIn("DefaultDiagonalSudoku.in", ios::in);
		// Nếu không tồn tại đầu vào thì sẽ có 3 lựa chọn
		if (!fileIn.is_open())
		{
			string confirm;
			setcolor(12);
			wcout << L"Không tồn tại tập tin đầu vào, bạn có muốn tạo một sudoku đường xuyên hoặc chạy tập tin của mình hay không?\n";
			setcolor(15);
			do
			{
				wcout << L"Nhập '1' để tạo mới, '2' để chạy tập tin của mình, '3' chọn lệnh khác: ";
				cin.sync();
				getline(cin, confirm);
				if (confirm != "1" && confirm != "2" && confirm != "3")
				{
					setcolor(12);
					wcout << L"Lệnh không hợp lệ, hãy thử lại: ";
					setcolor(15);
				}
			} while (confirm != "1" && confirm != "2" && confirm != "3");
			// Tạo mới sudoku đường xuyên
			if (confirm == "1")
			{
				initiateDiagonalSudoku(Diagonal);
				solveDiagonalSudoku(Diagonal);
				wcout << L"Đã tạo mới sudoku đường xuyên và được lưu với tên là DefaultDiagonalSudoku\n\n";
				showComputerResult(Diagonal, 0, "DefaultDiagonalSudoku.in");
			}
			// Người dùng sử dụng lưới sudoku đường xuyên do mình cung cấp
			else if (confirm == "2")
			{
				sudoku Diagonal[9][9];
				string fileName;
				do
				{
					do
					{
						wcout << L"Nhập vào địa chỉ: ";
						cin.sync();
						getline(cin, fileName);
						// Điều kiện thoát khỏi chế độ
						if (fileName == "end")
						{
							// Xoá màn hình và hiển thị lại menu
							system("CLS");
							displayCommand();
							return;
						}
							
						// Đọc và kiểm tra xem tập tin có bị trống hay không
						fstream file(fileName, ios::in);
						readFile(file, Diagonal);
						if (isBlank(Diagonal))
						{
							setcolor(12);
							wcout << L"Tập tin đầu vào không hợp lệ, hãy thử lại hoặc nhập 'end' để huỷ\n";
							setcolor(15);
						}
							

					} while (isBlank(Diagonal) && fileName != "end");
					// Thêm chỉ số bổ trợ(cờ hiệu, số thứ tự ô)
					addExtraStat(Diagonal);
					if (!isDiagonalSudoku(Diagonal))
					{
						setcolor(12);
						wcout << L"Không đúng định dạng tập tin sudoku đường xuyên hãy thử lại hoặc nhập 'end' để huỷ\n";
						setcolor(15);
					}
						
					// Nếu không đúng định dạng sudoku đường xuyên thì sẽ quay lại
				} while (!isDiagonalSudoku(Diagonal));
				// Giải sudoku và in kết quả ra màn hình
				solveDiagonalSudoku(Diagonal);
				wcout << L"Đã chạy tập tin sudoku đường xuyên do người dùng cung cấp\n\n";
				showComputerResult(Diagonal, 0, fileName);
			}
			// Người dùng chọn lệnh khác
			else
			{
				// Xoá màn hình và hiển thị lại menu
				system("CLS");
				displayCommand();
				return;
			}
				
		}
		// Nếu đã tồn tại 1 sudoku đường xuyên thì cũng có 3 lựa chọn
		else
		{
			string confirm;
			setcolor(12);
			wcout << L"Bạn muốn tạo mới 1 sudoku đường xuyên, chạy tập tin mặc định hay do mình cung cấp?\n";
			setcolor(15);
			do
			{
				wcout << L"Nhập '1' để tạo mới, '2' để chạy tập tin mặc định, '3' để mở 1 đầu vào do người chơi cung cấp: ";
				cin.sync();
				getline(cin, confirm);
				if (confirm != "1" && confirm != "2" && confirm != "3")
				{
					setcolor(12);
					wcout << L"Lệnh không hợp lệ, hãy thử lại: ";
					setcolor(15);
				}
			} while (confirm != "1" && confirm != "2" && confirm != "3");
			// Tạo mới sudoku đường xuyên
			if (confirm == "1")
			{
				initiateDiagonalSudoku(Diagonal);
				solveDiagonalSudoku(Diagonal);
				wcout << L"Đã tạo mới sudoku đường xuyên và được lưu với tên là DefaultDiagonalSudoku\n\n";
				showComputerResult(Diagonal, 0, "DefaultDiagonalSudoku.in");
			}
			// Chạy tập tin mặc định
			else if(confirm == "2")
			{
				readFile(fileIn, Diagonal);
				// Giải và in kết quả 
				solveDiagonalSudoku(Diagonal);
				wcout << L"Đã chạy sudoku đường xuyên có sẵn\n\n";
				showComputerResult(Diagonal, 0, "DefaultDiagonalSudoku.in");
			}
			// Chạy tập tin của người dùng
			else
			{
				sudoku Diagonal[9][9];
				string fileName;
				do
				{
					do
					{
						wcout << L"Nhập vào địa chỉ: ";
						cin.sync();
						getline(cin, fileName);
						if (fileName == "end")
						{
							// Xoá màn hình và hiển thị lại menu
							system("CLS");
							displayCommand();
							return;
						}
						// Đọc tập tin và kiểm tra xem có trống không
						fstream file(fileName, ios::in);
						readFile(file, Diagonal);
						if (isBlank(Diagonal))
						{
							setcolor(12);
							wcout << L"Hãy thử lại hoặc nhập 'end' để huỷ\n";
							setcolor(15);
						}
							
					} while (isBlank(Diagonal) && fileName != "end");
					// Thêm chỉ số bổ trở cho quy trình kiểm tra
					addExtraStat(Diagonal);
					if (!isDiagonalSudoku(Diagonal))
					{
						setcolor(12);
						wcout << L"Không đúng định dạng tập tin sudoku đường xuyên hãy thử lại hoặc nhập 'end' để huỷ\n";
						setcolor(15);
					}
						
				} while (!isDiagonalSudoku(Diagonal));
				// Giải và in kết quả ra màn hình
				solveDiagonalSudoku(Diagonal);
				wcout << L"Đã chạy tập tin sudoku đường xuyên do người dùng cung cấp\n\n";
				showComputerResult(Diagonal, 0, fileName);
			}
		}
		fileIn.close();
	}
}

void finishGame(sudoku currentGrid[9][9])
{
	// tạo 1 lưới có kết quả đầy đủ từ lưới ban đầu
	fstream fileIn("DefaultSudoku.in", ios::in);
	sudoku answersGrid[9][9];
	sudoku initialGrid[9][9];
	readFile(fileIn, answersGrid);
	SolveSudoku(answersGrid);

	// tạo thêm 1 lưới chứa vị trí của các ô ban đầu
	fileIn.open("DefaultSudoku.in", ios::in);
	readFile(fileIn, initialGrid);

	// dùng để khoá/mở chế độ chia màu
	int lock = 0;
	if (!isInitiated(initialGrid, currentGrid))
	{
		setcolor(12);
		wcout << L"Đầu vào không thuộc tập tin khởi tạo nên các ô sẽ có cùng màu\n";
		setcolor(15);
		lock = 1;
	}
	int flag[81];
	int answersValue[81];
	int currentValue[81];
	int initialValue[81];
	int count = 0;
	int rowIndex = 1;
	// đánh dấu các ô có giá trị sai
	for (int row = 0; row < 9; row++)
	{
		for (int col = 0; col < 9; col++)
		{
			initialValue[count] = initialGrid[row][col].value;
			answersValue[count] = answersGrid[row][col].value;
			currentValue[count] = currentGrid[row][col].value;
			// đánh dấu các ô có giá trị sai
			if (currentGrid[row][col].value != answersGrid[row][col].value)
				answersGrid[row][col].flag = 1;
			// đổ toạ độ các ô có giá trị sai ra mảng 1 chiều
			flag[count++] = answersGrid[row][col].flag;
		}
	}

	// Dùng để xác định phần tử cần in ra bảng 
	count = 0;

	// Đổ giá trị của các loại ô ra bảng
	for (int i = 0; i < 15; i++)
	{
		if (i == 0)
		{
			setcolor(15);
			wcout << L"    A   B   C   D   E   F   G   H   I\n";
			wcout << L"  ╔═══╤═══╤═══╦═══╤═══╤═══╦═══╤═══╤═══╗" << endl;
		}

		if (i == 1 || i == 3 || i == 6 || i == 8 || i == 11 || i == 13)
		{
			setcolor(15);
			wcout << L"  ╟───┼───┼───╫───┼───┼───╫───┼───┼───╢";
		}
		for (int j = 0; j < 8; j++)
		{
			if ((j == 0) && (i != 1 && i != 3 && i != 6 && i != 8 && i != 11 && i != 13))
			{
				setcolor(15);
				wcout << rowIndex++ << L" ║ ";
				// ô khởi tạo có màu đỏ
				if (answersValue[count] == initialValue[count] && lock != 1)
				{
					setcolor(12);
					wcout << answersValue[count];
				}
				// ô có giá trị sai có màu xanh
				else if (flag[count] == 1 && lock != 1)
				{
					setcolor(14);
					wcout << answersValue[count];
				}
				// ô có giá trị đúng thì màu trắng
				else
				{
					setcolor(15);
					wcout << answersValue[count];
				}
				count++;
				setcolor(15);
				wcout << L" │ ";
			}

			if ((j == 1 || j == 3 || j == 4 || j == 6 || j == 7) && (i != 1 && i != 3 && i != 6 && i != 8 && i != 11 && i != 13))
			{
				// ô khởi tạo có màu đỏ
				if (answersValue[count] == initialValue[count] && lock != 1)
				{
					setcolor(12);
					wcout << answersValue[count];
				}
				// ô có giá trị sai có màu vàng
				else if (flag[count] == 1 && lock != 1)
				{
					setcolor(14);
					wcout << answersValue[count];
				}
				// ô có giá trị đúng thì màu trắng
				else
				{
					setcolor(15);
					wcout << answersValue[count];
				}
				count++;
				setcolor(15);
				wcout << L" │ ";
			}

			if ((j == 2 || j == 5 || j == 7) && (i != 1 && i != 3 && i != 6 && i != 8 && i != 11 && i != 13))
			{
				// ô khởi tạo có màu đỏ
				if (answersValue[count] == initialValue[count] && lock != 1)
				{
					setcolor(12);
					wcout << answersValue[count];
				}
				// ô có giá trị sai có màu vàng
				else if (flag[count] == 1 && lock != 1)
				{
					setcolor(14);
					wcout << answersValue[count];
				}
				// ô có giá trị đúng thì màu trắng
				else
				{
					setcolor(15);
					wcout << answersValue[count];
				}
				count++;
				setcolor(15);
				wcout << L" ║ ";
			}
		}
		if (i == 4 || i == 9)
		{
			setcolor(15);
			wcout << endl << L"  ╠═══╪═══╪═══╬═══╪═══╪═══╬═══╪═══╪═══╣";
		}
		if (i == 14)
		{
			setcolor(15);
			wcout << endl << L"  ╚═══╧═══╧═══╩═══╧═══╧═══╩═══╧═══╧═══╝";
		}
		wcout << endl;
	}
}

void openingInterface()
{
	// Điều chỉnh vị trí cho phần mở đầu trò chơi
	for (int i = 9; i < 15; i++)
	{
		placeCursor(25, 12);
		setcolor(15);
		wcout << "<=========================================>\n";
		placeCursor(25, 13);
		setcolor(15);
		wcout << "|             W E L L C O M E             |\n";
		placeCursor(25, 14);
		wcout << "|                T O   M Y                |\n";
		setcolor(15);
		placeCursor(25, 15);
		wcout << "|";
		setcolor(i);
		placeCursor(26, 15);
		wcout << "               S U D O K U               ";
		setcolor(15);
		placeCursor(67, 15);
		wcout << "|\n";
		placeCursor(25, 16);
		wcout << "<=========================================>\n";
		placeCursor(50, 30);
		wcout << L"Được viết bởi: 1560602 Nguyễn Hải Triều\n\t\t\t\t\t\t\t\t 1560645 Phạm Minh Tuấn\n\t\t\t\t\t\t\t\t 1560675 Dương Quang Vinh ";
		if (i == 14)
		{
			placeCursor(30, 17);
			wcout << L"Nhập một phím bất kì để tiếp tục\n";
			system("pause>nul");
			break;
		}
		Sleep(700);
		system("CLS");
	}
	system("CLS");
	displayCommand();
}

void interact(sudoku grid[9][9])
{

	string command;
	LPCWSTR str = TEXT("silky_heart.wav");
	PlaySound(str, GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
	do
	{
		int flag = 0;
		// lệnh nhập vào chỉ có duy nhất 1 kí tự
		do
		{
			wcout << L"Nhập lệnh >> ";
			cin.sync();
			getline(cin, command);
			if (command.length() > 1)
			{
				setcolor(12);
				wcout << L"Lệnh không hợp lệ!\n";
				setcolor(15);
			}
				
		} while (command.length() > 1);

		// Nếu lệnh nhập vào là kí tự thường thì sẽ được chuyển sang kí tự hoa

		if (command[0] != '?' && command[0] > 96 && command[0] < 123)
			command[0] -= 32;

		switch (command[0])
		{
		default:
			setcolor(12);
			wcout << L"Lệnh không hợp lệ!\n";
			setcolor(15);
			break;
		case '?':// hiển thị lại bảng câu lệnh
			system("CLS");
			displayCommand();
			break;
		case 'N':// tạo lượt chơi mới
			system("CLS");
			interfaceNewGame();
			newGame(grid);
			break;
		case 'E':// chế độ người chơi
			system("CLS");
			interfaceEditValue();
			initiateInterface(grid, 1);
			editValue(grid);
			break;
		case 'R':// hiển thị giá trị đúng của 1 ô
			system("CLS");
			interfaceHint();
			initiateInterface(grid, 1);
			revealValue(grid);
			break;
		case 'W':// hiển thị giá trị sai của 1 ô
			system("CLS");
			interfaceShowWrongValue();
			showWrongValue(grid);
			break;
		case 'C':// chế độ máy chơi
			system("CLS");
			interfaceComPlay();
			computerPlaying(grid, 1);
			break;
		case 'F':// chế độ hoàn thảnh trò chơi
			system("CLS");
			interfaceFinishGame();
			finishGame(grid);
			break;
		case 'D':// chế độ đường xuyên
			system("CLS");
			interfaceDiagonalMode();
			computerPlaying(grid, 0);
			break;
		case 'H':// hiển thị luật chơi
			system("CLS");
			interfaceGameRules();
			displayGameRules();
			break;
		case 'O':// mở game nhanh
			system("CLS");
			interfaceLoadGame();
			loadGame(grid);
			break;
		case 'S':// lưu game nhanh
			system("CLS");
			interfaceSaveGame();
			saveGame(grid);
			break;
		case 'T':// Tắt nhạc
			PlaySound(0, 0, 0);
			break;
		case 'U':// Mở nhạc
			PlaySound(str, GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC | SND_LOOP);
			break;
		case 'Q':// Thoát chương trình
			wcout << L"Cảm ơn vì đã sử dụng chương trình\n";
			return;
		}
	} while (command[0] != 'Q');
}

void initiateGame()
{

	// Chỉnh màn hình console
	HWND console = GetConsoleWindow();
	MoveWindow(console, 50, 50, 800, 600, TRUE);
	
	// Chỉnh cỡ chữ
	setFontAndSize(16);

	// Chỉnh cho màn hình console hiển thị Tiếng Việt
	_setmode(_fileno(stdout), _O_U16TEXT);

	sudoku grid[9][9];
	// 2 hàm chính để chạy toàn bộ chương trình
	openingInterface();
	interact(grid);

}