#include <gtest/gtest.h>
#include <mylib.h>

TEST(MyLibTest, Pass)
{
    int res = add(1, 2);
    EXPECT_EQ(res, 3);
}