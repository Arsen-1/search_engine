//created by Arsen


#include "Page.hpp"

Page::Page(std::string body, int status)
	:data{ std::move(body) }, status{ status }
{
}