#include "ColorPair.hpp"
#include <iostream>
#include <assert.h>

namespace TelCoColorCoder
{

    const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
    int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
    
    ColorPair GetColorFromPairNumber(int pairNumber) 
    {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }
    
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) 
    {
        return major * numberOfMinorColors + minor + 1;
    }
    
    MajorColor getMajor() {
        return majorColor;
 
    MinorColor getMinor() {
        return minorColor;
    }
    
   std::string ToString() {
                std::string colorPairStr = MajorColorNames[majorColor];
                colorPairStr += " ";
                colorPairStr += MinorColorNames[minorColor];
                return colorPairStr;
       
    printManual(int pairNumber)
    {
        for (pairNumber=1; pairNumber<26; pairNumber++)
        {     
        std::cout << "Pair Number" << pairNumber << " " << colorPair.ToString() << std::endl;
        }
    }
}
