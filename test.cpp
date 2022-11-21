#include <iostream>
#include <assert.h>
#include "ColorPair.cpp"

namespace TelCoColorCoder
{

void testNumberToPair(int pairNumber,
    ColorPair::MajorColor expectedMajor,
    ColorPair::MinorColor expectedMinor)
{
    ColorPair::colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    ColorPair::MajorColor major,
    ColorPair::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

}
