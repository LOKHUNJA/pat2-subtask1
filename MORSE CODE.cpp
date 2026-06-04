#0408066049086
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function to return Morse code for each letter
string getMorseCode(char letter)
{
    switch (toupper(letter))
    {
        case 'A': return ".-";
        case 'B': return "-...";
        case 'C': return "-.-.";
        case 'D': return "-..";
        case 'E': return ".";
        case 'F': return "..-.";
        case 'G': return "--.";
        case 'H': return "....";
        case 'I': return "..";
        case 'J': return ".---";
        case 'K': return "-.-";
        case 'L': return ".-..";
        case 'M': return "--";
        case 'N': return "-.";
        case 'O': return "---";
        case 'P': return ".--.";
        case 'Q': return "--.-";
        case 'R': return ".-.";
        case 'S': return "...";
        case 'T': return "-";
        case 'U': return "..-";
        case 'V': return "...-";
        case 'W': return ".--";
        case 'X': return "-..-";
        case 'Y': return "-.--";
        case 'Z': return "--..";
        default: return "";
    }
}

int main()
{
    string message;
    string fullMorse = "";

    // Ask user for input
    cout << "Enter a short message: ";
    getline(cin, message);

    cout << "\nMorse Code Translation:\n";

    // Loop through each character
    for (int i = 0; i < message.length(); i++)
    {
        char ch = message[i];

        // Check for spaces between words
        if (ch == ' ')
        {
            fullMorse += "       "; // 7 spaces between words
        }
        else
        {
            string morse = getMorseCode(ch);

            // Display letter and Morse code
            cout << toupper(ch) << ": " << morse << endl;

            // Add to full Morse message
            fullMorse += morse + "   "; // 3 spaces between letters
        }
    }

    // Display full Morse code message
    cout << "\nFull Morse code with spaces:\n";
    cout << fullMorse << endl;

    return 0;

