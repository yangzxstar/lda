#ifndef _STRTOKENIZER_H
#define _STRTOKENIZER_H

#include <string>
#include <vector>

class strtokenizer
{
protected:
	std::vector<std::string> tokens;
    int idx;

public:
	strtokenizer(std::string str, std::string seperators = " ");
    
	void parse(std::string str, std::string seperators);
    
    int count_tokens();
	std::string next_token();
    void start_scan();

	std::string token(int i);
};

#endif

