#include "Sudoku.h"

bool SolveSudoku(sudoku grid[9][9])
{
	int row, col;

	// Nếu lưới sudoku không còn giá trị rỗng nào nữa thì lưới đã hoàn thiện
	// => trả về giá trị true
	if (!FindUnassignedLocation(grid, row, col))
		return true;
	
	// Bỏ từng số từ tới 9 vào vị trí đang xét
	for (int num = 1; num <= 9; num++)
	{
		// Nếu giá trị đó thoả yêu cầu
		if (isSafe(grid, row, col, num))
		{
			// ô hiện tại sẽ có giá trị bằng với giá đang xét
			grid[row][col].value = num;
			// nếu lưới hoàn thành thì trả về true
			if (SolveSudoku(grid))
				return true;
			// ngược lại thì huỷ giá trị vừa rồi và tiếp tục vòng lập
			grid[row][col].value = 0;
		}
	}
	// trả về false khi đã thử hết 9 trường hợp nhưng vẫn không thoả cho 1 ô nào đó -> đi lùi
	return false;
}

/* tìm ô chưa được điền kín, nếu tồn tại ô đó thì chỉ số dòng và cột sẽ trả về vị trí ô đó
và hàm trả về giá trị true, ngược lại thì hàm trả về false*/
bool FindUnassignedLocation(sudoku grid[9][9], int &row, int &col)
{
	for (row = 0; row < 9; row++)
		for (col = 0; col < 9; col++)
			if (grid[row][col].value == 0)
				return true;
	return false;
}

bool UsedInRow(sudoku grid[9][9], int row, int num)
{
	// Dò trên dòng đang xét
	for (int col = 0; col < 9; col++)
		if (grid[row][col].value == num)
			return true;
	return false;
}

bool UsedInCol(sudoku grid[9][9], int col, int num)
{
	// Dò trên cột đang xét
	for (int row = 0; row < 9; row++)
		if (grid[row][col].value == num)
			return true;
	return false;
}


bool UsedInBox(sudoku grid[9][9], int boxStartRow, int boxStartCol, int num)
{
	// Dò trong ô vuông nhỏ 3x3 đang chứa giá trị num
	for (int row = 0; row < 3; row++)
		for (int col = 0; col < 3; col++)
			if (grid[row + boxStartRow][col + boxStartCol].value == num)
				return true;
	return false;
}

/*Nếu giá trị num thoả mãn 3 yêu cầu thì trả về true, ngược lại trả về false*/
bool isSafe(sudoku grid[9][9], int row, int col, int num)
{
	return !UsedInRow(grid, row, num) && !UsedInCol(grid, col, num) &&
		!UsedInBox(grid, row - row % 3, col - col % 3, num);
}


bool checkRow(sudoku grid[9][9])
{
	// Mỗi phần tử sẽ được xét với 8 phần tử còn lại trên dòng của nó
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
			for (int i = 0; i < 9; i++)
				if (grid[row][col].value == grid[row][i].value && i != col && grid[row][col].value != 0)
					return false;

	return true;
}

bool checkCol(sudoku grid[9][9])
{
	// Mỗi phần tử sẽ được xét với 8 phần tử còn lại trên cột của nó
	for (int col = 0; col < 9; col++)
		for (int row = 0; row < 9; row++)
			for (int i = 0; i < 9; i++)
				if (grid[row][col].value == grid[i][col].value && row != i && grid[col][row].value != 0)
					return false;
	return true;
}

bool checkBox(sudoku grid[9][9])
{
	sudoku temp[9][9];
	// Biến 9 ô vuông nhỏ của lưới sudoku hiện tại thành 9 dòng
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
			temp[row][col].value = grid[row + col / 3 - row % 3][(col % 3 + row * 3) % 9].value;

	// Trả về giá trị của hàm kiểm tra dòng dựa vào bảng sudoku tạm
	return checkRow(temp);
}

bool isCorrect(sudoku grid[9][9])
{
	// Ma trận hợp lệ nếu thoả 3 yêu cầu và ngược lại
	return checkRow(grid) && checkCol(grid) && checkBox(grid);
}

bool isInitiated(sudoku inGrid[9][9], sudoku outGrid[9][9])
{
	// so sánh hai lưới sudoku, nếu giá trị khởi tạo của inGrid khác với outGrid thì trả về false
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
			if (inGrid[row][col].value != outGrid[row][col].value && inGrid[row][col].value != 0)
				return false;

	// trả vè true nếu không có giá trị nào khác
	return true;
}

bool isBlank(sudoku grid[9][9])
{
	// Lưới được xem là 1 ô "rỗng" khi nó có chứa ô có giá trị < -1 hay > 9
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
			if (grid[row][col].value < -1 || grid[row][col].value > 9)
				return true;
	return false;
}

void addExtraStat(sudoku currentGrid[9][9])
{
	int count = 0;
	for (int row = 0; row < 9; row++)
	{
		for (int col = 0; col < 9; col++)
		{
			// tắt cờ hiệu cho toàn bộ ô trong lưới
			currentGrid[row][col].flag = 0;
			// đánh dấu vị trí cho các ô
			currentGrid[row][col].position = count++;
		}
	}
}

void createTemporarySudoku(sudoku grid[9][9])
{
	// tạo lưới 1 lưới sudoku hoàn chỉnh
	srand((unsigned int)time(NULL));
	int count = 0;
	int flag;

	// mảng này dùng để đảm bảo lưới sudoku này không bị trùng lập với các lưới khác
	int* cross = randomizeItem(9, 1, 9);

	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
		{
			if (row == col)
				grid[row][col].value = cross[row];
			else
				grid[row][col].value = 0;
		}

	// thêm các chỉ số bổ trợ cho lưới
	//addExtraStat(grid);
	delete[] cross;
}

void hideSquare(sudoku grid[9][9], int difficulty)
{

	// Độ khó sẽ quyết định số lượng ô sudoku sẽ bị giấu
	int quantity;
	switch (difficulty)
	{
	default:
		quantity = 50;
		break;
	case 1:
		quantity = 30;
		break;
	case 2:
		quantity = 40;
		break;
	case 3:
		quantity = 50;
		break;
	}
	// Khởi tạo 1 danh sách chứa các vị trí ô sudoku ngẫu nhiên và không bị trùng
	int* hideout = randomizeItem(quantity, 0, 80);
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
			for (int i = 0; i < quantity; i++)
				if (grid[row][col].position == hideout[i])
					grid[row][col].value = 0;
	// Huỷ cấp phát mảng
	delete[] hideout;
}

void generateSudoku(sudoku grid[9][9], int difficulty)
{
	// Tạo lưới tạm
	createTemporarySudoku(grid);
	// Điền kín các ô trong lưới tạm
	SolveSudoku(grid);
	// Giấu đi ngẫu nhiên một số lượng nhất định các ô trong lưới
	hideSquare(grid, difficulty);
}

void initiateSudoku(sudoku grid[9][9])
{
	int difficulty;
	wcout << L"Chọn độ khó (từ 1 tới 3): ";
	// Phải nhập chữ số nguyên, trong phạm vi từ 1 tới 3
	do
	{
		difficulty = 0;
		difficulty = getInt();
		if (difficulty < 1 || difficulty > 3)
		{
			setcolor(12);
			wcout << L"Không hợp lệ, hãy thử lại: ";
			setcolor(15);
		}
	} while (difficulty < 1 || difficulty > 3);

	// Khởi tạo lưới sudoku ban đầu
	generateSudoku(grid, difficulty);
	// Thêm các chỉ số bổ trợ cho lưới
	addExtraStat(grid);

}

void spotWrongValue(sudoku currentGrid[9][9], sudoku resultGrid[9][9], sudoku initialGrid[9][9])
{
	// đánh dấu các ô có giá trị sai so với đáp án bằng cờ hiệu của mỗi ô
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
			if (currentGrid[row][col].value != initialGrid[row][col].value && currentGrid[row][col].value != resultGrid[row][col].value)
				currentGrid[row][col].flag = 2;
}

void initiateGrid(sudoku currentGrid[9][9])
{
	// Khởi tạo các giá trị cơ bản cho 1 lưới
	int count = 0;
	for (int row = 0; row < 9; row++)
	{
		for (int col = 0; col < 9; col++)
		{
			currentGrid[row][col].value = 0;
			currentGrid[row][col].flag = 0;
			// Đánh số vị trí của mỗi ô
			currentGrid[row][col].position = count++;
		}
	}
}

void solveDiagonalSudoku(sudoku grid[9][9])
{
	fstream fileOut("DefaultDiagonalSudoku.out", ios::out);
	// Khởi tạo ngẫu nhiên các giá trị cho đường xuyên
	int* diagonalLine = randomizeItem(9, 1, 9);
	int index = 0;
	// Bỏ các giá trị đường xuyên vào các ô đường xuyên trước
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
			if (grid[row][col].value == -1)
				grid[row][col].value = diagonalLine[index++];
	// Điền kín các ô còn lại
	SolveSudoku(grid);
	// Lưu kết quả ra 1 tập tin 
	writeFile(fileOut, grid);
	delete[] diagonalLine;
}

void initiateDiagonalSudoku(sudoku grid[9][9])
{

	fstream fileOut("DefaultDiagonalSudoku.in", ios::out);
	// Khởi tạo lưới rỗng
	initiateGrid(grid);

	// Tạo mảng chứa toạ độ đường xuyên
	int* diagonalLine = createDiagonalLine();

	// Đánh dấu vị trí các ô đường xuyên
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
			for (int i = 0; i < 9; i++)
				if (grid[row][col].position == diagonalLine[i])
					grid[row][col].value = -1;

	// Lưu ra tập tin khởi tạo
	writeFile(fileOut, grid);
	delete[] diagonalLine;
}