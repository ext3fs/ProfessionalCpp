#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <string_view>
#include <stdexcept>
#include <exception>

using namespace std;

vector<int> readIntegerFile(string_view fileName)
{
	ifstream inputStream(fileName.data());
	if (inputStream.fail()) {
		// 파일 열기 실패: 익셉션을 던진다.
		throw invalid_argument("Unable to open the file.");
	}

	// 파일에 담긴 정숫값을 하나씩 읽어서 벡터에 추가한다.
	vector<int> integers;
	int temp;
	while (inputStream >> temp) {
		integers.push_back(temp);
	}

	if (!inputStream.eof()) {
		// 파일 끝(EOF)에 도달하지 않았다.
		// 다시 말해 파일을 읽는 도중에 에러가 발생했다.
		// 따라서 익셉션을 던진다.
		throw runtime_error("Error reading the file.");
	}

	return integers;
}

void myTerminate()
{
	cout << "Uncaught exception!" << endl;
	exit(1);
}

int main()
{
	set_terminate(myTerminate);

	const string fileName = "IntegerFile.txt";
	vector<int> myInts = readIntegerFile(fileName);

	for (const auto& element : myInts) {
		cout << element << " ";
	}
	cout << endl;

	return 0;
}
