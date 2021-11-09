CXX=clang++
# CXX=g++

# We have -Wno-unused-parameter so that the compiler
# doesn't complain too much about our stubs.

CXXFLAGS = -std=c++17 -Wall -Wextra -Wno-unused-parameter -Wno-unused-private-field

# Change to this before final submission:

#CXXFLAGS = -std=c++17 -Wall -Wextra -Werror

BINARIES=lab5Test

all: ${BINARIES}

lab5Test: lab5Test.o WordCount.o tddFuncs.o
	${CXX} $^ -o $@

test00: testWordCount00.o WordCount.o tddFuncs.o
	${CXX} $^ -o $@

test01: testWordCount01.o WordCount.o tddFuncs.o
	${CXX} $^ -o $@

test02: testWordCount02.o WordCount.o tddFuncs.o
	${CXX} $^ -o $@

test03: testWordCount03.o WordCount.o tddFuncs.o
	${CXX} $^ -o $@

test04: testWordCount04.o WordCount.o tddFuncs.o
	${CXX} $^ -o $@

test05: testWordCount05.o WordCount.o tddFuncs.o
	${CXX} $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
