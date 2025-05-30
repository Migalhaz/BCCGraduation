#include <iostream>
#include <string>

namespace MyCrypto
{
    std::string Cesar(std::string message, int key)
    {
        int max = 26;
        key = key % max;
        if (key == 0) return message;


        for (int i = 0; i < message.length(); ++i)
        {
            int firstChar;
            int lastChar;

            if (message[i] >= 'A' && message[i] <= 'Z')
            {
                firstChar = 'A';
                lastChar = 'Z';
            } 
            else if (message[i] >= 'a' && message[i] <= 'z')
            {
                firstChar = 'a';
                lastChar = 'z';
            }
            else
            {
                continue;
            }

            int charIndex = ((message[i] - firstChar + key) % max);
            int startChar = charIndex >= 0 ? firstChar : lastChar + 1;
            int newChar = startChar + charIndex;
            message[i] = newChar;
        }

        return message;
    }
}