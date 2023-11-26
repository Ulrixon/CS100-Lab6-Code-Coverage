#include "gtest/gtest.h"
#include "../lib/Hailstone.h"
using sequence::satisfiesHailstone;


TEST(HailstoneTests, testZero){
    uint64_t a = 0;
    EXPECT_FALSE(satisfiesHailstone(a));
}

TEST(HailstoneTests, testOne){
    uint64_t a = 1;
    EXPECT_TRUE(satisfiesHailstone(a));
}

TEST(HailstoneTests, testEven){
    uint64_t a = 2;
    EXPECT_TRUE(satisfiesHailstone(a));
}

TEST(HailstoneTests, testOdd){
    uint64_t a = 3;
    EXPECT_TRUE(satisfiesHailstone(a));
}

TEST(HailstoneTests, testCanRun) {
    uint64_t a = 4;
    EXPECT_NO_THROW(satisfiesHailstone(a));
}