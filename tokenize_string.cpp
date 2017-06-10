#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
#include <sstream>
using namespace std;


void tokenize1(string s) {
	istringstream iss(s);

	while (iss) {
		string subs; 
		iss >> subs; 
		cout << "Substring: " << subs << endl; 
	}	
}

int main() {
	string s = "Hello world my name is Chitresh";
	cout << "Method : 1" << endl;
	tokenize1(s);
    return 0;
}
