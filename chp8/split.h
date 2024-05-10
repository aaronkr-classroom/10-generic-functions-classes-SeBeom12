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

//인수가 공백일때는 true, 그렇지 않을때는 false

inline bool not_space(char c) {
	return !isspace(c);
}

template <class Out>
void split(const string& str, Out os) {
	
	typedef string::const_iterator iter;
	
	iter i = str.begin();


	while (i != str.end()) {

		i = find_if(i, str.end(), not_space);
	
		//다음 단어의 끝을 찾음
		iter j = find_if(i, str.end(), space);

		//[i,j)범위의 문자를 복사
		if (i != str.end()) {
			*os++ = string(i, j);
		}
		i = j;
	}
}

#endif

