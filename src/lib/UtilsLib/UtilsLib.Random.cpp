#include "UtilsLib.h"
#include <time.h>
#include <random>

namespace UtilsLib {

namespace Random {

std::string
getRandomString(int nLen)
{
    std::string strRandom;
    strRandom.resize(nLen);
    srand(time(NULL));
    for (int i = 0; i < nLen; i++)
    {
        strRandom[i] = (char)(rand() % 26 + 65);
    }
    strRandom[nLen - 1] = '\0';
    return strRandom;
}

} // namespace Random

} // namespace UtilsLib
