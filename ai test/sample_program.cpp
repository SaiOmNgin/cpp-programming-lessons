#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<string> todoList;

	while (true) {
		cout << "Enter a task (or 'q' to quit): ";
		string task;
		getline(cin, task);

		if (task == "q") {
			break;
		}

		todoList.push_back(task);
	}

	cout << "Todo list:" << endl;
	for (const auto& task : todoList) {
		cout << "- " << task << endl;
	}

	return 0;
}
