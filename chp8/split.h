//split.h
#ifndef GUARD_split_h
#define GUARD_split_h


#include<algorithm> //fine, if
#include<cctype> // isspace()
#include <iostream>

using namespace std;

inline bool space(char c) {
	return isspace(c);
}

//�μ��� �����϶��� true, �׷��� �������� false

inline bool not_space(char c) {
	return !isspace(c);
}

template <class Out>
void split(const string& str, Out os) {
	
	typedef string::const_iterator iter;
	
	iter i = str.begin();


	while (i != str.end()) {

		i = find_if(i, str.end(), not_space);
	
		//���� �ܾ��� ���� ã��
		iter j = find_if(i, str.end(), space);

		//[i,j)������ ���ڸ� ����
		if (i != str.end()) {
			*os++ = string(i, j);
		}
		i = j;
	}
}

#endif

