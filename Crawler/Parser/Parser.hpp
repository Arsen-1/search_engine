//
// Created by Arsen
//



#ifndef SEARCH_ENGINE_PARSER_HPP
#define SEARCH_ENGINE_PARSER_HPP

#include <string>
#include <vector>

class Parser {
private:
    std::string url;
    std::string html;
    std::vector<std::string> urls;
    std::string title;
    std::string description;
    std::string text;

public:
    Parser(const std::string& url, const std::string& html);

    const std::vector<std::string>& getUrls() const;

private:
    int parse();


#endif //SEARCH_ENGINE_PARSER_HPP
