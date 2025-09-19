#include <gtest/gtest.h>
#include "../include/turkish.h"

TEST(TurkishTest, BasicNumbers)
{
    EXPECT_EQ(numtoturk(0), "sıfır");
    EXPECT_EQ(numtoturk(1), "bir");
    EXPECT_EQ(numtoturk(2), "iki");
    EXPECT_EQ(numtoturk(3), "üç");
    EXPECT_EQ(numtoturk(4), "dört");
    EXPECT_EQ(numtoturk(5), "beş");
    EXPECT_EQ(numtoturk(6), "altı");
    EXPECT_EQ(numtoturk(7), "yedi");
    EXPECT_EQ(numtoturk(8), "sekiz");
    EXPECT_EQ(numtoturk(9), "dokuz");
}

TEST(TurkishTest, Dozens)
{
    EXPECT_EQ(numtoturk(10), "on");
    EXPECT_EQ(numtoturk(11), "on bir");
    EXPECT_EQ(numtoturk(20), "yirmi");
    EXPECT_EQ(numtoturk(25), "yirmi beş");
    EXPECT_EQ(numtoturk(30), "otuz");
    EXPECT_EQ(numtoturk(40), "kırk");
    EXPECT_EQ(numtoturk(50), "elli");
    EXPECT_EQ(numtoturk(60), "altmış");
    EXPECT_EQ(numtoturk(70), "yetmiş");
    EXPECT_EQ(numtoturk(80), "seksen");
    EXPECT_EQ(numtoturk(90), "doksan");
    EXPECT_EQ(numtoturk(99), "doksan dokuz");
}

TEST(TurkishTest, EdgeCases)
{
    EXPECT_EQ(numtoturk(0), "sıfır");
    EXPECT_EQ(numtoturk(10), "on");
    EXPECT_EQ(numtoturk(15), "on beş");
    EXPECT_EQ(numtoturk(22), "yirmi iki");
    EXPECT_EQ(numtoturk(33), "otuz üç");
    EXPECT_EQ(numtoturk(44), "kırk dört");
    EXPECT_EQ(numtoturk(55), "elli beş");
    EXPECT_EQ(numtoturk(66), "altmış altı");
    EXPECT_EQ(numtoturk(77), "yetmiş yedi");
    EXPECT_EQ(numtoturk(88), "seksen sekiz");
    EXPECT_EQ(numtoturk(99), "doksan dokuz");
}

// Граничные случаи
TEST(BoundaryCasesTest, MinimumValue)
{
    EXPECT_EQ(numtoturk(0), "sıfır");
}

TEST(BoundaryCasesTest, MaximumValue)
{
    EXPECT_EQ(numtoturk(99), "doksan dokuz");
}

TEST(BoundaryCasesTest, EdgeOfRange)
{
    EXPECT_EQ(numtoturk(9), "dokuz"); // последнее однозначное
    EXPECT_EQ(numtoturk(10), "on");   // первое двузначное
    EXPECT_EQ(numtoturk(98), "doksan sekiz");
    EXPECT_EQ(numtoturk(99), "doksan dokuz");
}

// Тест на consistency (одинаковые входы → одинаковые выходы)
TEST(ConsistencyTest, SameInputSameOutput)
{
    EXPECT_EQ(numtoturk(42), numtoturk(42));
    EXPECT_EQ(numtoturk(17), numtoturk(17));
    EXPECT_EQ(numtoturk(99), numtoturk(99));
}

// Тестирование отдельных функций
TEST(UnitFunctionsTest, TurkUnitsFunction)
{
    EXPECT_EQ(turkunits(0), "sıfır");
    EXPECT_EQ(turkunits(5), "beş");
    EXPECT_EQ(turkunits(9), "dokuz");
}

TEST(UnitFunctionsTest, TurkDozensFunction)
{
    EXPECT_EQ(turkdozens(1), "on");
    EXPECT_EQ(turkdozens(4), "kırk");
    EXPECT_EQ(turkdozens(9), "doksan");
    EXPECT_EQ(turkdozens(0), ""); // для 0 должна возвращать пустую строку
}