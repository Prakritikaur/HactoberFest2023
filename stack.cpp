

#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> mystack;
	mystack.push(1);
	mystack.push(2);
	mystack.push(3);
	mystack.push(4);
	

	mystack.pop();
	mystack.pop();


	while (!mystack.empty()) {
		cout << ' ' << mystack.top();
		mystack.pop();
	}
}
