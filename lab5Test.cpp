#include <iostream>
#include "WordCount.h"
#include "tddFuncs.h"

using namespace std;

int main(){
	cout << "Testing WordCount files..." << endl;
	WordCount wc;
	ASSERT_EQUALS(1, wc.incrWordCount("abcd"));
	ASSERT_EQUALS(2, wc.incrWordCount("abcd"));
	ASSERT_EQUALS(3, wc.incrWordCount("-abcd"));
	ASSERT_EQUALS(2, wc.decrWordCount("ABCD"));
	return 0;
}
