#include "WordCount.h"

#include <iostream>
#include "tddFuncs.h"
using namespace std;

int main() {
  cout << "Running tests from: " << __FILE__ << endl;
  
  
  

  WordCount wc2;
  ASSERT_EQUALS(1,wc2.incrWordCount("foO"));
  ASSERT_EQUALS(2,wc2.incrWordCount("foo"));
  ASSERT_EQUALS(1,wc2.incrWordCount("bAr"));
  ASSERT_EQUALS(2,wc2.incrWordCount("BaR"));
  ASSERT_EQUALS(1,wc2.incrWordCount("foo#bar"));
  ASSERT_EQUALS(2,wc2.incrWordCount("foo_bar-"));
  ASSERT_EQUALS(1,wc2.incrWordCount("'foo-bar-"));
  ASSERT_EQUALS(0,wc2.incrWordCount("--$$--"));
  ASSERT_EQUALS(7,wc2.getTotalWords());
  ASSERT_EQUALS(4,wc2.getNumUniqueWords());
  

  
  return 0;
}