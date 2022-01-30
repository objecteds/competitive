#include "ping.h"
#include <bits/stdc++.h>

using namespace std;

const string err1("too many pings"), err2("invalid ping"), err3("wrong ping");
const int BIL = 1000000000;

static int S, P, cnt = 0;

void print_WA(string MSG){
	cout << "Wrong Answer: " << MSG << '\n' << flush;
	exit(0);
}

int ping(int x){
	cnt++;
	if (cnt > P) print_WA(err1);
	if (1 > x || x > BIL) print_WA(err2);
	return abs(x-S);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> S >> P;
	int ans = rabbit(P);
	if (ans != S) print_WA(err3);
	cout << "Accepted: " << cnt << '\n' << flush;
}

