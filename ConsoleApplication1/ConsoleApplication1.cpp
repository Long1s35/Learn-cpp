#include <iostream>

using namespace std;

class CLift {
	int mFf, mLf;
public:
	void FirstF(int ff) {
		mFf = ff;
	}
	void LastF(int lf) {
		mLf = lf;
	}
	int GetFf() {
		return mFf;
	}
	int GetLf() {
		return mLf;
	}
	string GetString() {
		return "Лифт ездит с " + to_string(mFf) + " по " + to_string(mLf) + " этаж.";
	}
	void Print() {
		cout << GetString();
	}
	CLift(int ff, int lf) {
		mFf = ff;
		mLf = lf;
	}
	~CLift() {};
};
int main() {
	setlocale(LC_ALL, "");
	CLift lift = CLift(1, 9);
	lift.Print();
}
