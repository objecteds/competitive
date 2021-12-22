#include <bits/stdc++.h>
using namespace std;

stack<int> st;
int minimum = INT_MAX;

void push(int X) {
	if (!st.size()) {
		st.push(X);
		minimum = X;
	} else if (minimum > X) {
		st.push(X * 2 - minimum);
		minimum = X;
	} else {
		st.push(X);
	}
}

void pop() {
	if (st.top() < minimum) {
		minimum = minimum * 2 - st.top();
	}
	st.pop();
}

int top() {
	if (minimum > st.top()) {
		return minimum;
	} else {
		return st.top();
	}
}

int getMin() {
	return minimum;
}