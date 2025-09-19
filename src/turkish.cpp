#include "../include/turkish.h"

std::string turkunits(unsigned short int units)
{
    switch (units)
    {
    case 0:
        return "sıfır";
    case 1:
        return "bir";
    case 2:
        return "iki";
    case 3:
        return "üç";
    case 4:
        return "dört";
    case 5:
        return "beş";
    case 6:
        return "altı";
    case 7:
        return "yedi";
    case 8:
        return "sekiz";
    default:
        return "dokuz";
    }
}

std::string turkdozens(unsigned short int dozens)
{
    switch (dozens)
    {
    case 1:
        return "on";
    case 2:
        return "yirmi";
    case 3:
        return "otuz";
    case 4:
        return "kırk";
    case 5:
        return "elli";
    case 6:
        return "altmış";
    case 7:
        return "yetmiş";
    case 8:
        return "seksen";
    case 9:
        return "doksan";
    default:
        return "";
    }
}

std::string numtoturk(unsigned short int num)
{
    std::string final_string = "";
    if (num < 10)
    {
        final_string = turkunits(num);
        return final_string;
    }
    else
    {
        unsigned short int dozens = num / 10;
        unsigned short int units = num % 10;

        std::string final_string = turkdozens(dozens);
        if (units > 0)
        {
            final_string += " " + turkunits(units);
        }
        return final_string;
    }
}