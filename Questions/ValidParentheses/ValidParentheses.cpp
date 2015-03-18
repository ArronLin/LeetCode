#include "common.h"

class ValidParentheses {
public:
    bool isValid(string s) {
		int nLen = s.size();
		if(!nLen || nLen%2)
			return false;

		stack<char> myStack;
		for(int i = 0; i < nLen; ++i)
		{
			if(s.at(i) == ')')
			{
				if(myStack.empty() || myStack.top() != '(')
					return false;
				else
					myStack.pop();
			}
			else if(s.at(i) == ']')
			{
				if(myStack.empty() || myStack.top() != '[')
					return false;
				else
					myStack.pop();
			}
			else if(s.at(i) == '}')
			{
				if(myStack.empty() || myStack.top() != '{')
					return false;
				else
					myStack.pop();
			}
			else
			{
				myStack.push(s.at(i));
			}
		}

		return myStack.empty();
    }
};