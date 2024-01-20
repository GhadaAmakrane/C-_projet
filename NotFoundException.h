
#ifndef NOTFOUNDEXCEPTION_H_
#define NOTFOUNDEXCEPTION_H_
#include <stdexcept>

class NotFoundException : public std::exception {
public:
    const char* what() const noexcept override{
    	return "Livre non trouve dans la bibliotheque.";
    }
};




#endif /* NOTFOUNDEXCEPTION_H_ */
