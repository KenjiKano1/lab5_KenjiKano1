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
clean:
	/bin/rm -f ${BINARIES} *.o
