#ifndef COLOR_PAIR_HPP
#define COLOR_PAIR_HPP

#include <iostream>
#include <assert.h>

namespace TelCoColorCoder
{
  class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
            MajorColor getMajor() {
                return majorColor;
            }
            MinorColor getMinor() {
                return minorColor;
            }
            std::string ToString() {
                std::string colorPairStr = MajorColorNames[majorColor];
                colorPairStr += " ";
                colorPairStr += MinorColorNames[minorColor];
                return colorPairStr;
            }
    };
void testNumberToPair(int, TelCoColorCoder::MajorColor, TelCoColorCoder::MinorColor);
void testPairToNumber(TelCoColorCoder::MajorColor, TelCoColorCoder::MinorColor, int);
}
#endif
