//created by Arsen 


#include "Page.hpp"

Page::Page(std::string effUrl, std::string data, long status)
	:effUrl{ std::move(effUrl) }, data{ std::move(data) }, status{ status }
{
}