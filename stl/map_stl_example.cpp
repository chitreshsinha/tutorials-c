#include <iostream>
#include <map>

using namespace std;

/*void print(const map<char, int> &M) {
	int m_size = M.size();
	int i;
	for(i=0;i<m_size;i++) {
		cout << M[] << " ";
	}
	cout << endl;
}*/

void print_using_iterator(map<char, int> &M) {
	map<char, int>::iterator it;
	for(it=M.begin();it!=M.end();++it) {
		cout << (*it).first << "->" << it->second << endl;
	}
}

void initialization_example() {
	map<char, int> M;
	M['a'] = 1;
	M['b'] = 2;
	M['c'] = 3;
	M['d'] = 4;
	cout << "Size: " << M.size() << endl;
	cout << "M['a']: " << M['a'] << endl;

	map<char, int> M1(M.begin(), M.end());
	map<char, int> M2(M1);
	cout << "Size: " << M1.size() << endl;
	cout << "Size: " << M2.size() << endl;
	print_using_iterator(M2);
	cout << "Empty M1: " << M1.empty() << endl;
	//M1.clear();
	M1 = map<char, int>();
	cout << "Empty M1: " << M1.empty() << endl;
	//map <char, int> M3 {{'x', 1}, {'y', 2}, {'z', 3}};
	map <char, int> M3 ;
	print_using_iterator(M3);
	cout << "Find: " << (M.find('b'))->second << endl;
	cout << M['c'] << endl;
}

int main() {
	initialization_example();
	return 0;
}