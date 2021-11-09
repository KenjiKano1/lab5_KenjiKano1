#include "WordCount.h"

#include <iostream>
#include "tddFuncs.h"
using namespace std;

int main() {
  cout << "Running tests from: " << __FILE__ << endl;
  
  
  
  ASSERT_EQUALS("foo",WordCount::makeValidWord(".foo"));
  ASSERT_EQUALS("bar",WordCount::makeValidWord("bar?"));
  ASSERT_EQUALS("fum",WordCount::makeValidWord("...fum***"));
  ASSERT_EQUALS("quote",WordCount::makeValidWord("\"quote\""));
  ASSERT_EQUALS("isn't",WordCount::makeValidWord("isn't"));
  ASSERT_EQUALS("mother-in-law",WordCount::makeValidWord("mother-in-law"));
  ASSERT_EQUALS("art",WordCount::makeValidWord("'aRT-*"));
  ASSERT_EQUALS("s",WordCount::makeValidWord("$-s'-#"));
  ASSERT_EQUALS("",WordCount::makeValidWord("$$*-'-!"));
  ASSERT_EQUALS("",WordCount::makeValidWord(""));
  

  
  return 0;
}
