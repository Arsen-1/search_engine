#ifndef CRAWLER_PAGE_HPP
#define CRAWLER_PAGE_HPP

#include <string>

class Page {
private:
	std::string body;
	int status;

public:
	Page(std::string body, int status);

	const std::string& getBody() const
	{
		return this->body;
	};
	int getStatus() const
	{
		return this->status;
	}
	bool valid() const
	{
		return this->status >= 200 && this->status < 300;
	}
};

#endif //CRAWLER_PAGE_HPP
