#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Table {
private:
	vector<vector<T>> data;

public:
	Table(int rows, int cols) : data(rows, vector<T>(cols)) {}

	vector<T>& operator[](int row) {
		return data[row];
	}

	const vector<T>& operator[](int row) const {
		return data[row];
	}

	pair<int, int> Size() const {
		return { data.size(), data.empty() ? 0 : data[0].size() };
	}
};

int main() {
	Table<int> test(2, 3);
	test[0][0] = 4;
	cout << test[0][0] << endl;

	auto size = test.Size();
	cout << "Rows: " << size.first << ", Columns: " << size.second << endl;

}