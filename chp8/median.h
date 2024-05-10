//new median.h
#ifndef GUARD_median_h
#define GUARD_median_h
#include <vector>
#include <algorithm>
#include<stdexcept>

using namespace std;

template<class T>

// vector<double>�� �߾Ӱ��� ����.
// �Լ��� ȣ���ϸ� �μ��� ������ ���͸� ��°�� ����
T median(vector<T> v) {
	typedef typename vector <T>::size_type vec_sz;
	vec_sz size = v.size();

	if (size == 0)
		throw domain_error("median of empty vector");

	// ������ ����
	sort(v.begin(), v.end()); // <algorithm > �ʿ�

	// ���� ������ �߾Ӱ��� ����
	vec_sz mid = size / 2;

	return size % 2 == 0 ?
		(v[mid] + v[mid - 1])/ 2 :
		v[mid];

}
#endif

