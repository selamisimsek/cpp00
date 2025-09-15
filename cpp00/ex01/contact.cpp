#include "contact.hpp"

void Contact::set(const std::string& str , TokenType token)
{
	if(token == (TokenType::FIRST_NAME))
		firstName = str;
	if(token == (TokenType::LAST_NAME))
		lastName = str;
	if(token == (TokenType::NICKNAME))
		nickname = str;
	if(token == (TokenType::PHONE_NUMBER))
		phoneNumber = str;
	if(token == (TokenType::DARKEST_SECRET))
		darkestSecret = str;
}
std::string Contact::get(TokenType token) const
{
    if(token == (TokenType::FIRST_NAME))
        return firstName;
    if(token == (TokenType::LAST_NAME))
        return lastName;
    if(token == (TokenType::NICKNAME))
        return nickname;
    if(token == (TokenType::PHONE_NUMBER))
        return phoneNumber;
    if(token == (TokenType::DARKEST_SECRET))
        return darkestSecret;
	return "";
}