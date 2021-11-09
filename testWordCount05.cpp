#include "WordCount.h"

#include <iostream>
#include "tddFuncs.h"
using namespace std;

int main() {
  cout << "Running tests from: " << __FILE__ << endl;
  
  
  

  WordCount wc3;
  ASSERT_EQUALS(-1,wc3.decrWordCount("apple"));
  ASSERT_EQUALS(0,wc3.getTotalWords());
  ASSERT_EQUALS(0,wc3.getNumUniqueWords());
  ASSERT_EQUALS(0,wc3.getWordCount("apple"));

  ASSERT_EQUALS(1,wc3.incrWordCount("foo"));
  ASSERT_EQUALS(1,wc3.getTotalWords());
  ASSERT_EQUALS(1,wc3.getNumUniqueWords());
  ASSERT_EQUALS(1,wc3.getWordCount("foo"));

  ASSERT_EQUALS(0,wc3.decrWordCount("foo"));
  ASSERT_EQUALS(0,wc3.getTotalWords());
  ASSERT_EQUALS(0,wc3.getNumUniqueWords());
  ASSERT_EQUALS(0,wc3.getWordCount("foo"));
  ASSERT_EQUALS(-1,wc3.decrWordCount("foo"));

  ASSERT_EQUALS(1,wc3.incrWordCount("oof"));
  ASSERT_EQUALS(1,wc3.incrWordCount("ofo"));
  ASSERT_EQUALS(2,wc3.incrWordCount("OFO"));
  ASSERT_EQUALS(3,wc3.incrWordCount("^Ofo2"));
  ASSERT_EQUALS(3,wc3.getWordCount("Ofo"));
  ASSERT_EQUALS(2,wc3.decrWordCount("1ofO-"));
  ASSERT_EQUALS(3,wc3.getTotalWords());
  ASSERT_EQUALS(2,wc3.getNumUniqueWords());
  

  
  return 0;
}