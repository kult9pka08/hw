#include "lib.h"
#include <gtest/gtest.h>

TEST(VersionTest, Positive) {
    EXPECT_GT(version(), 0);
}