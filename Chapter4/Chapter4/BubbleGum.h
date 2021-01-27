#pragma once

class BubbleGum {
private:
	int color{ 1 };
	int sweetness{ 5 };

public:
	
	// create default constructor for the class
	BubbleGum() = default;
	BubbleGum(int c, int s) {
		color = c;
		sweetness = s;
	}

	BubbleGum(const BubbleGum &) = delete;
	void SetSweet(int a) {
		sweetness = a;
	}
	void SetSweet(float) = delete;
};