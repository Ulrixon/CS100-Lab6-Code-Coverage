#include <gtest/gtest.h>

#include "../lib/testsubject.h"

TEST(isEvenTests, testEvenNumber) {
  int x = 2;
  EXPECT_TRUE(TestSubject::isEven(x));
}

TEST(isEvenTests, testOddNumber) {
  int x = 1;
  EXPECT_FALSE(TestSubject::isEven(x));
}

TEST(isEvenTests, testCanRun) {
  int x = -1;
  EXPECT_NO_THROW(TestSubject::isEven(x));
}


TEST(MathTests, Square) {
    EXPECT_EQ(TestSubject::square(2), 4);
    EXPECT_EQ(TestSubject::square(3), 9);
}

TEST(MathTests, testNegativeOddNumber) {
    EXPECT_EQ(TestSubject::square(-1), 1);
}

TEST(MathTests, testNegativeEvenNumber) {
    EXPECT_TRUE(TestSubject::square(-2) == 4);
}