#include "WordCount.h"

#include <iostream>
#include "tddFuncs.h"
using namespace std;

int main() {
  cout << "Running tests from: " << __FILE__ << endl;
  
  
  

  WordCount wc1;
  ASSERT_EQUALS(0,wc1.getTotalWords());
  ASSERT_EQUALS(0,wc1.getNumUniqueWords());
  ASSERT_EQUALS(1,wc1.incrWordCount("foo"));
  ASSERT_EQUALS(2,wc1.incrWordCount("foo"));
  ASSERT_EQUALS(3,wc1.incrWordCount("foo"));
  ASSERT_EQUALS(1,wc1.incrWordCount("bar"));
  ASSERT_EQUALS(2,wc1.incrWordCount("bar"));
  ASSERT_EQUALS(1,wc1.incrWordCount("foobar"));
  ASSERT_EQUALS(6,wc1.getTotalWords());
  ASSERT_EQUALS(3,wc1.getNumUniqueWords());
  

  
  return 0;
}