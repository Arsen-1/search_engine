#ifndef CRAWLER_PAGE_LOADER_HPP
#define CRAWLER_PAGE_LOADER_HPP

#include <string>
#include <sstream>
#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Infos.hpp>

#include "Page.hpp"

class PageLoader {
public:
	static Page load(const std::string& url);
};

#endif //CRAWLER_PAGE_LOADER_HPP
