#include "HoTro.h"
void setFontAndSize(int FontSize)
{
	CONSOLE_FONT_INFOEX info = { 0 };
	info.cbSize = sizeof(info);
	// Chỉnh kích cỡ chữ
	info.dwFontSize.Y = FontSize;
	// Chỉnh độ rộng chữ
	info.FontWeight = FW_NORMAL;
	// Mặc định kiểu chữ console là Consolas để hiển thị Tiếng Việt 
	wcscpy_s(info.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), NULL, &info);
}

void setcolor(unsigned short color)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}

void writeFile(fstream &fOut, sudoku grid[9][9])
{
	for (int row = 0; row < 9; row++)
	{
		for (int col = 0; col < 9; col++)
			fOut << grid[row][col].value << "\t";
		fOut << endl << endl;
	}
	fOut.close();
}

void readFile(fstream &file, sudoku grid[][9])
{
	if (!file.is_open())
	{
		setcolor(12);
		wcout << L"Không mở được tập tin\n";
		setcolor(15);
	}
		
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
			file >> grid[row][col].value;
	file.close();
}

// kiểm tra xem phần tử item có tồn tại trong mảng Array không
bool existed(int Array[], int n, int item)
{
	for (int i = 0; i < n; i++)
		if (item == Array[i])
			return true;
	return false;
}

int* randomizeItem(int quantity, int min, int max)
{
	// cấp phát mảng dựa trên số lượng quantity
	int* list = new int[quantity];
	srand((unsigned int)time(NULL));
	int flag;
	/* phát sinh ngẫu nhiên các giá trị trong mảng
	   nếu phần tử đang tạo đã tồn tại trong danh sách thì sẽ lập lại quá trình tạo*/
	for (int i = 0; i < quantity; i++)
	{
		do
		{
			flag = 0;
			// Phần tử hiện tại trong danh sách sẽ được tạo ngẫu nhiên
			list[i] = (rand() % max - min) + min;
			// Nếu đã tồn tại trong danh sách thì sẽ thử lại
			for (int j = 0; j < quantity; j++)
				if (list[i] == list[j] && i != j)
					flag = 1;
			// Khi thoả mãn sẽ lấy giá trị đó và chuyển sang tìm giá trị kế tiếp
		} while (flag == 1);
	}

	// trả về địa chỉ mảng
	return list;
}

void placeCursor(int x, int y)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD placeCursorHere;
	// Chỉnh hoành độ
	placeCursorHere.X = x;
	// Chỉnh tung độ
	placeCursorHere.Y = y;

	// Dịch chuyển màn hình console dựa trên 2 toạ độ đầu vào
	SetConsoleCursorPosition(hConsole, placeCursorHere);
}

bool isValid(int num, int min, int max)
{
	// xét xem num có tồn tại trong khoảng từ min tới max
	for (int i = min; i <= max; i++)
		if (num == i)
			return true;
	return false;
}

int getInt()
{
	_setmode(_fileno(stdout), _O_U16TEXT);
	int x = 0;
	bool loop = true;

	// quá trình nhập sẽ bị lập vô tận cho tới khi loop = false
	while (loop)
	{
		string s;
		cin.sync();
		getline(cin, s);

		// chuyển sang kiểu int
		stringstream stream(s);

		// nếu stream là kiểu int thì thoát khỏi vòng lập
		if (stream >> x)
		{
			loop = false;
			continue;
		}

		// ngược lại thì tiếp tục vòng lập
		setcolor(12);
		wcout << L"Không hợp lệ, hãy thử lại: ";
		setcolor(15);
	}
	// trả về giá trị nguyên nhận được
	return x;
}