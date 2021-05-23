//
// Created by Arsen
//

#include <string>
#include <gtest/gtest.h>
#include "PageLoader.hpp"

TEST(loadingTest, test1)
{
const std::string url = "rau.am";
PageLoader pageLoader;
Page page = pageLoader.load(url);
EXPECT_EQ(page.getStatus(), 200);
}