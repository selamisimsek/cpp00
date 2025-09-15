#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

enum  TokenType{
    FIRST_NAME,
    LAST_NAME,
    NICKNAME,
    PHONE_NUMBER,
    DARKEST_SECRET,
    INVALID
};

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    void set(const std::string& str , TokenType token);

    std::string get(TokenType token) const;
};


#endif
