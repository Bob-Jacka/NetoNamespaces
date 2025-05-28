#include <iostream>

namespace plus {
	int calc(int x, int y) {
		return x + y;
	}
}

namespace minus {
	int calc(int x, int y) {
		return x - y;
	}
}

namespace multiply {
	int calc(int x, int y) {
		return x * y;
	}
}

namespace division {
	int calc(int x, int y) {
		return x / y;
	}
}

int main(int argc, char** argv)
{
	int x = 6;
	int y = 9;
	std::printf("x = %d, y = %d\n", x, y);

	std::printf("%s %d\n", "Сложение:", plus::calc(x, y));
	std::printf("%s %d\n", "Вычитание:", minus::calc(x, y));
	std::printf("%s %d\n", "Умножение:", multiply::calc(x, y));
	std::printf("%s %d\n", "Деление:", division::calc(x, y));
}