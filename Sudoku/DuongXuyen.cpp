#include "DuongXuyen.h"

int findNext(int position)
{
	// trường hợp 1: nằm ở 4 góc ma trận => chỉ có duy nhất 1 lựa chọn
	switch (position)
	{
		// góc trái phía trên => lấy ô nằm góc phải bên dưới
	case 0:
		return 10;
		break;
		// góc phải phía trên => lấy ô nằm góc trái bên dưới
	case 8:
		return 16;
		break;
		// góc trái phía dưới => lấy ô nằm góc phải phía trên
	case 72:
		return 64;
		break;
		// góc phải phía dưới => lấy ô nằm góc trái phía trên
	case 80:
		return 70;
		break;
	}

	// phát sinh ngẫu nhiên 1 số từ 1 tới 4 để lấy vị trí kế tiếp
	srand((unsigned int)time(NULL));
	int random = rand() % 4 + 1;
	int jump;

	/* trường hợp 2: nằm ở các đường biên => có 2 lựa chọn kế tuỳ thuộc vào các đường biên*/

	if (random % 2 == 0)
	{
		// biên trên
		if (position > 0 && position < 8)
			// lấy ô nằm góc phải bên dưới
			return position + 10;
		// biên trái
		else if ((position % 9 == 0) && (position % 8 != 0))
			// lấy ô nằm góc phải bên dưới
			return position + 10;
		// biên phải
		else if (((position + 1) % 9 == 0) && (position % 8 != 0))
			// lấy ô nằm góc trái bên dưới
			return position + 8;
		// biên dưới
		else if ((position > 72 && position < 80) && (position % 8 != 0))
			// lấy ô nằm góc phải bên trên
			return position - 8;
	}
	else
	{
		// biên trên
		if (position > 0 && position < 8)
			// lấy ô nằm góc trái bên dưới
			return position + 8;
		// biên trái
		else if ((position % 9 == 0) && (position % 8 != 0))
			// lấy ô nằm góc phải bên trên
			return position - 8;
		// biên phải
		else if (((position + 1) % 9 == 0) && (position % 8 != 0))
			// lấy ô nằm góc trái bên trên
			return position - 10;
		// biên dưới
		else if ((position > 72 && position < 80) && (position % 8 != 0))
			// lấy ô nằm góc trái bên trên
			return position - 10;
	}

	// trường hợp 3: nằm ở các vị trí còn lại => có 4 lựa chọn
	switch (random)
	{
	case 1:
		// lấy ô góc trái bên trên
		return position - 10;
		break;
	case 2:
		// lấy ô góc phải bên trên
		return position - 8;
		break;
	case 3:
		// lấy ô góc trái bên dưới
		return position + 8;
		break;
	case 4:
		// lấy ô góc phải bên dưới
		return position + 10;
		break;
	}
}

int* createDiagonalLine()
{
	// mảng chứa đường xuyên
	int* diagonalLine = new int[9];
	srand((unsigned int)time(NULL));

	// phát sinh ngẫu nhiên ô đường xuyên đầu tiên
	diagonalLine[0] = rand() % 81;
	int flag;
	int i = 1;
	do
	{
		// Dùng để đếm số lần tìm kiếm vị trí ô kế tiếp
		int c = 0;
		while (i < 9)
		{
			// nếu tìm kiếm quá lâu thì sẽ quay lùi tìm ô đường xuyên khác
			if (c == 30)
			{
				/* tại vị trí i - 1 đang xét hiện được xem là bị "kẹt" đường
				=> phải lùi về 1 ô trước đó để tìm đường khác*/
				diagonalLine[i - 1] = findNext(diagonalLine[i - 2]);
				// cờ vẫn được hạ để tiếp tục quá trình tìm kiếm
				flag = 0;
				// ngưng tìm kiếm ở vị trị hiện tại để quay lùi
				break;
			}
			// tìm ô đường xuyên kế tiếp
			int item = findNext(diagonalLine[i - 1]);
			// nếu thoả yêu cầu sẽ cho vào mảng đường xuyên
			if (!existed(diagonalLine, 9, item))
				diagonalLine[i++] = item;
			// khi đã tìm đủ số lượng thì sẽ bật cờ và ngừng tìm kiếm
			if (i == 9)
				flag = 1;
			c++;
		}
	} while (flag == 0);

	// trả về mảng chứa các toạ độ đường xuyên
	return diagonalLine;
}

bool isDiagonalSudoku(sudoku grid[9][9])
{
	int diagonal[9];
	int i = 0;

	// Lấy vị trí 9 ô có giá trị khởi tạo là -1 tức vị trí của 9 ô đường xuyên ban đầu
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
			if (grid[row][col].value == -1)
				diagonal[i++] = grid[row][col].position;

	// Nếu không đủ hoặc quá 9 ô thì sẽ được xem là không hợp lệ
	if (i != 9)
		return false;

	// Kiểm tra xem các ô được xem là đường xuyên có liên kết với nhau không( phải nằm 1 góc 45 độ so với ô kế)
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
			for (i = 0; i < 9; i++)
				if (diagonal[i] == grid[row][col].position)
				{
					int flag = 0;
					for (int j = 0; j < 9; j++)
						if (grid[row - 1][col + 1].position == diagonal[j] || grid[row + 1][col - 1].position == diagonal[j] || grid[row + 1][col + 1].position == diagonal[j] || grid[row - 1][col - 1].position == diagonal[j])
							flag = 1;
					if (flag == 0)
						return false;
				}
	return true;
}