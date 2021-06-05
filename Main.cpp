// you can use includes, for example:
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

int solution(vector<int>& A) {
	// write your code in C++14 (g++ 6.2.0)
	std::unordered_map<int, int> aCount;

	for (unsigned int i = 0; i < A.size(); i++) {

		if (aCount[A[i]]) {
			aCount[A[i]]++;
		} else {
			aCount[A[i]] = 1;
		}
	}
	for (auto const& x : aCount) {
		std::cout << x.first << " " << x.second << std::endl;
		if ((x.second & 1) == 1)
			return x.first;
	}
	return 0;
}

vector<int> solution2(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)

    int s = (int)A.size();

    if( K > s )
        K %= s;    

    vector<int> n;

    for(int i=K;i>= 1 ; i--) {
        n.push_back( A[s - i] );
    }
    auto first = A.cend() - K;
    auto last = A.cend();

    A.erase( first, last );

    A.insert(A.begin(), n.begin(), n.end());

    return A;
}


int solution3(vector<int> &ranks) {
    // write your code in C++14 (g++ 6.2.0)
	std::unordered_map<int, int> aCount;

	for (unsigned int i = 0; i < ranks.size(); i++) {

		if (aCount[ranks[i]]) {
			aCount[ranks[i]]++;
		} else {
			aCount[ranks[i]] = 1;
		}
	}
    int count = 0;
	for (auto const& x : aCount) {
		std::cout << x.first << " " << x.second << std::endl;
		if ( aCount[x.first + 1] )
			count += x.second;

		aCount.insert
	}
	return count;
}

int main() {
	vector<int> a = {3, 4, 3, 0, 2, 2, 3, 0, 0};
	std::cout << solution3(a);
}