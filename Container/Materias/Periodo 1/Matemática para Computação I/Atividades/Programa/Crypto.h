#include <iostream>
#include <string>
#include "ConsoleHandler.h"

namespace MyCrypto
{
    std::string Cesar(std::string message, int key)
    {
        if (key == 0) return message;

        for (int i = 0; i < message.length(); ++i)
        {
            if (message[i] >= 'A' && message[i] <= 'Z')
            {
                int max = ('Z' - 'A') + 1;
                int changeKey;
                if (key > 0)
                {
                    changeKey = (((message[i]) - 'A') + key) % max;
                }
                else
                {
                    
                }
                int currentChar = changeKey % max;

                message[i] = currentChar + 'A';
            }

            if (message[i] >= 'a' && message[i] <= 'z')
            {

            }
        }

        return message;
    }
}