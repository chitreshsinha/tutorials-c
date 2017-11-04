#include <iostream>
#include <vector>

using namespace std;

void print(vector <int> v) {
	int lenv = v.size();
	int i = 0;
	for(i=0;i<lenv;i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

void print_using_iterator(vector <int> v) {
	int lenv = v.size();
	vector <int>::iterator it;

	for(it=v.begin();it<v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	//size
	vector <int> a;
	cout << "a size: " << a.size() << endl;
	//initialize using array
	int arr[4] = {1, 2, 3, 4};
	vector <int> v (arr, arr + sizeof(arr)/sizeof(arr[0]));
	//size
	cout << "v size: " << v.size() << endl;
	//push_back
	v.push_back(5);
	//access
	cout << "v[4]: " << v[4] << endl;
	print(v);
	cout << "Print using iterator" << endl;
	print_using_iterator(v);
	//empty
	cout << v.empty() << endl;
	vector <int> x;
	cout << x.empty() << endl;
	//front
	cout << v.front() << endl;
	//back
	cout << v.back() << endl;
	v.pop_back();
	cout << v.back() << endl;




	return 0;
}