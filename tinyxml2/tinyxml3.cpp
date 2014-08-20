class tinyxml3 {
	int square(int x) {
		return x*x;
	}
	int example(int a, int b, int x, int y) {
		int result = 0;
		if (a > 0) {
			result = square(a) + square(x);
		}
		if (b > 0) {
			// "square(a)" should read "square(b)"
			result = square(a) + square(y);
		}
		return result;
	}
};