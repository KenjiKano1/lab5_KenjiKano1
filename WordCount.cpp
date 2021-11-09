// WordCount.cpp

#include "WordCount.h"

using namespace std;

// Default constructor
WordCount::WordCount() {}

// Simple hash function. Do not modify.
size_t WordCount::hash(const std::string & word) const {
	string validword = makeValidWord(word);
	size_t accumulator = 0;
	for (size_t i = 0; i < validword.size(); i++) {
		accumulator += validword.at(i);
	}
	return accumulator % CAPACITY;
}

int WordCount::getTotalWords() const {
	int num = 0;
	for(size_t i = 0; i < CAPACITY; i++){
		for(size_t j = 0; j < table[i].size(); j++){
			num += table[i][j].second;
		}
	}
	return num;
}

int WordCount::getNumUniqueWords() const {
	int num = 0;
	for(size_t i = 0; i < CAPACITY; i++){
		num += table[i].size();	
	}
	return num;
}

int WordCount::getWordCount(const std::string & word) const {
	string validword = makeValidWord(word);
	for(size_t i = 0; i < table[hash(validword)].size(); i++){
		if(table[hash(validword)][i].first == validword){
			return table[hash(validword)][i].second;
		}
	}
	return 0;
}

int WordCount::incrWordCount(const std::string & word) {
	string validword = makeValidWord(word);
	int count = 0;
	if(getWordCount(validword) == 0){
		table[hash(validword)].push_back(pair<string, int> (validword, 1));
		count = 1;
	}
	else{
		for(size_t i = 0; i < table[hash(validword)].size(); i++){
			if(table[hash(validword)][i].first == validword){
				table[hash(validword)][i].second +=1;
				count = table[hash(validword)][i].second;
			}
		}
	}
	return count;
}

int WordCount::decrWordCount(const std::string & word) {
	string validword = makeValidWord(word);
	int count = -1;
	if(getWordCount(validword) == 1){
		for(size_t i = 0; i < table[hash(validword)].size(); i++){
			if(table[hash(validword)][i].first == validword){
				table[hash(validword)].erase(table[hash(validword)].begin()+i);
				count = 0;
			}
		}
	}
	else if(getWordCount(validword) > 1){
		for(size_t i = 0; i < table[hash(validword)].size(); i++){
			if(table[hash(validword)][i].first == validword){
				table[hash(validword)][i].second -= 1;
				count = table[hash(validword)][i].second;
			}
		}
	}
	return count;
}

bool WordCount::isWordChar(char c) {
	if(int(c) <= 90  && int(c) >= 65)
		return true;

	return false;
}

std::string WordCount::makeValidWord(const std::string & word) {
	string nword = "";
	for(size_t i = 0; i < word.size()+1; i++){
		if((int(word[i]) >= 97 && int(word[i]) <= 122) || isWordChar(word[i])){
			nword += tolower(word[i]);
		}
		else if(!(i == 0 || i == word.size()) && (word[i] == '-' || word[i] == '\'')){
			nword += word[i];
		}
	}
	while(nword[0] == '-' || nword[nword.size() - 1] == '-' || nword[0] == '\'' || nword[nword.size() - 1] == '\''){
		if(nword[0] == '-' || nword[0] == '\''){
			nword = nword.substr(1, nword.size()-1);
		}
		else if(nword[nword.size()-1] == '-' || nword[nword.size()-1] == '\''){
			nword = nword.substr(0, nword.size()-1);
		}
	}
	return nword;
}
