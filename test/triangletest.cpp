#include "../lib/Triangle.h"
#include <gtest/gtest.h>
using shapes::Triangle;

TEST(TriangleTests, testPerimeter) {
  Triangle *aTriangle = new Triangle(3, 3, 3);
  EXPECT_EQ(aTriangle->getPerimeter(), 9);
}

TEST(TriangleTests, testPerimeterWithSidesBeingDifferent) { // goint to fail
  Triangle *aTriangle = new Triangle(3, 3, 2);
  EXPECT_EQ(aTriangle->getPerimeter(), 8);
}

TEST(TriangleTests, testPerimeterCanRun) { // goint to fail
  Triangle *aTriangle = new Triangle(1, 1, 1);
  EXPECT_NO_THROW(aTriangle->getPerimeter());
}

TEST(TriangleTests, testConstructorWithDisorderSides) { // goint to fail

  EXPECT_DEATH(new Triangle(2, 3, 4), "First side is not the longest");
}

TEST(TriangleTests,
     testConstructorWithFirstSidesEqualsOtherSidesSum) { // goint to fail

  EXPECT_DEATH(new Triangle(4, 3, 1), "Does not satisfy triangle inequality");
}

TEST(TriangleTests, testConstructorWith333Negative) // goint to pass
{

  EXPECT_DEATH(new Triangle(3, 3, -3), "Does not satisfy triangle inequality");
}

TEST(TriangleTests, testConstructorCanCreate) // goint to pass
{

  EXPECT_NO_THROW(new Triangle(3, 3, 3));
}

TEST(TriangleTests, testAreaWith333) // goint to pass
{
  Triangle *aTriangle = new Triangle(3, 3, 3);
  EXPECT_NEAR(aTriangle->getArea(), 3.897, 0.001);
}

TEST(TriangleTests, testAreaWithSidesBeingDifferent) // goint to fail
{
  Triangle *aTriangle = new Triangle(3, 3, 2);
  EXPECT_NEAR(aTriangle->getArea(), 2.828, 0.001);
}

TEST(TriangleTests, testAreaCanRun) // goint to fail
{
  Triangle *aTriangle = new Triangle(1, 1, 1);
  EXPECT_NO_THROW(aTriangle->getArea());
}

TEST(TriangleTests, testIsosceles333) // goint to pass
{
  Triangle *aTriangle = new Triangle(3, 3, 3);
  EXPECT_TRUE(aTriangle->isIsosceles());
}

TEST(TriangleTests, testIsosceles332) // goint to pass
{
  Triangle *aTriangle = new Triangle(3, 3, 2);
  EXPECT_FALSE(aTriangle->isIsosceles());
}

TEST(TriangleTests, testIsosceles222) // goint to pass
{
  Triangle *aTriangle = new Triangle(2, 2, 2);
  EXPECT_NO_THROW(aTriangle->isIsosceles());
}

TEST(TriangleTests, testEquilateral333) // goint to pass
{
  Triangle *aTriangle = new Triangle(3, 3, 3);
  EXPECT_TRUE(aTriangle->isEquilateral());
}

TEST(TriangleTests, testEquilateral332) // goint to pass
{
  Triangle *aTriangle = new Triangle(3, 3, 2);
  EXPECT_FALSE(aTriangle->isEquilateral());
}

TEST(TriangleTests, testEquilateral222) // goint to pass
{
  Triangle *aTriangle = new Triangle(2, 2, 2);
  EXPECT_NO_THROW(aTriangle->isEquilateral());
}


TEST(TriangleTests, testKindWithDifferentSides)
{
  Triangle *aTriangle = new Triangle(4, 3, 2);
  EXPECT_EQ(Triangle::Kind::SCALENE, aTriangle->getKind());
}

TEST(TriangleTests, testKind333)
{
  Triangle *aTriangle = new Triangle(3, 3, 3);
  EXPECT_EQ(Triangle::Kind::EQUILATERAL, aTriangle->getKind());
}

TEST(TriangleTests, testKind544)
{
  Triangle *aTriangle = new Triangle(5, 4, 4);
  EXPECT_TRUE(Triangle::Kind::ISOSCELES == aTriangle->getKind());
}

TEST(TriangleTests, testKindNoThrow)
{
  Triangle *aTriangle = new Triangle(5, 4, 4);
  EXPECT_NO_THROW(aTriangle->getKind());
}

int runTests(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}