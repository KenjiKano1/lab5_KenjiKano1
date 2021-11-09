#include "WordCount.h"

#include <iostream>
#include "tddFuncs.h"
using namespace std;

int main() {
  cout << "Running tests from: " << __FILE__ << endl;
  
  
  

  WordCount wc3;
  ASSERT_EQUALS(1,wc3.incrWordCount("foo"));
  ASSERT_EQUALS(1,wc3.incrWordCount("oof"));
  ASSERT_EQUALS(1,wc3.incrWordCount("ofo"));
  ASSERT_EQUALS(3,wc3.getTotalWords());
  ASSERT_EQUALS(3,wc3.getNumUniqueWords());
  ASSERT_EQUALS(1,wc3.incrWordCount("isn't"));
  ASSERT_EQUALS(2,wc3.incrWordCount("$#'isn't--"));
  ASSERT_EQUALS(1,wc3.incrWordCount("n'ist"));
  ASSERT_EQUALS(6,wc3.getTotalWords());
  ASSERT_EQUALS(5,wc3.getNumUniqueWords());

  ASSERT_EQUALS(2,wc3.getWordCount("isn't"));
  ASSERT_EQUALS(1,wc3.getWordCount("n'ist"));
  ASSERT_EQUALS(1,wc3.getWordCount("ofo"));
  

  
  return 0;
}