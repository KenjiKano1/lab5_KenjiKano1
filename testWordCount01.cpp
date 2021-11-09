#include "WordCount.h"

#include <iostream>
#include "tddFuncs.h"
using namespace std;

int main() {
  cout << "Running tests from: " << __FILE__ << endl;
  
  
  
  ASSERT_TRUE(WordCount::isWordChar('f'));
  ASSERT_TRUE(WordCount::isWordChar('T'));
  ASSERT_TRUE(!WordCount::isWordChar(0));
  ASSERT_TRUE(!WordCount::isWordChar('^'));
  ASSERT_TRUE(!WordCount::isWordChar(' '));
  

  
  return 0;
}