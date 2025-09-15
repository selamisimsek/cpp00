#include "contact.hpp"

void Contact::set(const std::string& str , TokenType token)
{
	if(token == FIRST_NAME)
		{firstName = str;}
	if(token == LAST_NAME)
		{lastName = str;}
	if(token == NICKNAME)
		{nickname = str;}
	if(token == PHONE_NUMBER)
		{phoneNumber = str;}
	if(token == DARKEST_SECRET)
		{darkestSecret = str;}
}
std::string Contact::get(TokenType token) const
{
    if(token == FIRST_NAME)
        {return firstName;}
    if(token == LAST_NAME)
        {return lastName;}
    if(token == NICKNAME)
        {return nickname;}
    if(token == PHONE_NUMBER)
        {return phoneNumber;}
    if(token == DARKEST_SECRET)
		{return darkestSecret;}
	return "";
}