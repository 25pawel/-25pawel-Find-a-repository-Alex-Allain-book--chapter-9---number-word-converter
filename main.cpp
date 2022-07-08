#include <iostream>

using namespace std;

static void launchConverterNumberToWord(void);
static void convertNumber(int numberToConvert);
static void convertUnity(int numberToUnity);
static void convertTens(int numberToConvert);
static void convert10to19(int numberToConvert);
static void convertHundreds(int numberToHundreds);
static void convertThousands(int numberToThousands);

int main()
{
    launchConverterNumberToWord();
}

static void launchConverterNumberToWord(void)
{
    int numberToConvert;
    cout << "Welcome to converter Number -> Word\n";
    cout << "Enter number you want to convert:";
    cin >> numberToConvert;

    convertNumber(numberToConvert);
}

static void convertNumber(int numberToConvert)
{
    if(numberToConvert < 0)
    {
        cout << "minus ";
        numberToConvert *= (-1);
    }

    int unity = numberToConvert % 10;
    int tens = (numberToConvert % 100 - unity) / 10;
    int hundreds = (numberToConvert % 1000 - (tens + unity)) / 100;
    int thousands = numberToConvert / 1000;

    if(numberToConvert < 10)
    {
        convertUnity(unity);
    }
    else if(numberToConvert < 20)
    {
        convert10to19((tens+unity));
    }
    else if(numberToConvert < 100)
    {
        convertTens(tens);
        convertUnity(unity);
    }
    else if(numberToConvert < 1000)
    {
        convertHundreds(hundreds);
        convertTens(tens);
        convertUnity(unity);
    }
    else if(numberToConvert < 1000000)
    {
        convertThousands(thousands);
        convertHundreds(hundreds);
        convertTens(tens);
        convertUnity(unity);
    }
}

static void convertUnity(int numberToUnity)
{
    if(numberToUnity == 0)
    {
        cout << "zero";
    }
    else if(numberToUnity == 1)
    {
        cout << "jeden";
    }
    else if(numberToUnity == 2)
    {
        cout << "dwa";
    }
    else if(numberToUnity == 3)
    {
        cout << "trzy";
    }
    else if(numberToUnity == 4)
    {
        cout << "cztery";
    }
    else if(numberToUnity == 5)
    {
        cout << "piec";
    }
    else if(numberToUnity == 6)
    {
        cout << "szesc";
    }
    else if(numberToUnity == 7)
    {
        cout << "siedem";
    }
    else if(numberToUnity == 8)
    {
        cout << "osiem";
    }
    else if(numberToUnity == 9)
    {
        cout << "dziewiec";
    }
    else
    {
        // Should never happen
    }
}

static void convert10to19(int numberToConvert)
{
    if(numberToConvert == 10)
    {
        cout << "dziesiec";
    }
    else if(numberToConvert == 11)
    {
        cout << "jedenascie";
    }
    else if(numberToConvert == 12)
    {
        cout << "dwanascie";
    }
    else if(numberToConvert == 13)
    {
        cout << "trzynascie";
    }
    else if(numberToConvert == 14)
    {
        cout << "czternascie";
    }
    else if(numberToConvert == 15)
    {
        cout << "pietnascie";
    }
    else if(numberToConvert == 16)
    {
        cout << "szescnascie";
    }
    else if(numberToConvert == 17)
    {
        cout << "siedemnascie";
    }
    else if(numberToConvert == 18)
    {
        cout << "osiemnascie";
    }
    else if(numberToConvert == 19)
    {
        cout << "dziewietnascie";
    }
    else
    {
        // Should never happen
    }
}

static void convertTens(int numberOfTens)
{
    if(numberOfTens == 2)
    {
        cout << "dwadziescia ";
    }
    else if(numberOfTens == 3)
    {
        cout << "trzydziesci ";
    }
    else if(numberOfTens == 4)
    {
        cout << "czterdziesci ";
    }
    else if(numberOfTens == 5)
    {
        cout << "piecdziesiat ";
    }
    else if(numberOfTens == 6)
    {
        cout << "szescdziesiat ";
    }
    else if(numberOfTens == 7)
    {
        cout << "siedemdziesiat ";
    }
    else if(numberOfTens == 8)
    {
        cout << "osiemdziesiat ";
    }
    else if(numberOfTens == 9)
    {
        cout << "dziewiecdziesiat ";
    }
    else
    {
        // Should never happen
    }
}

static void convertHundreds(int numberToHundreds)
{
    if(numberToHundreds == 1)
    {
        cout << "sto ";
    }
    else if(numberToHundreds == 2)
    {
        cout << "dwiescie ";
    }
    else if(numberToHundreds == 3)
    {
        cout << "trzysta ";
    }
    else if(numberToHundreds == 4)
    {
        cout << "czterysta ";
    }
    else if(numberToHundreds == 5)
    {
        cout << "piecset ";
    }
    else if(numberToHundreds == 6)
    {
        cout << "szescset ";
    }
    else if(numberToHundreds == 7)
    {
        cout << "siedemset ";
    }
    else if(numberToHundreds == 8)
    {
        cout << "osiemset ";
    }
    else if(numberToHundreds == 9)
    {
        cout << "dziewiecset ";
    }
    else
    {
        // Should never happen
    }
}

static void convertThousands(int numberToThousands)
{
    int unityOfThousands = numberToThousands % 10;
    int tensOfThousands = (numberToThousands % 100 - unityOfThousands) / 10;
    int hundredsOfThousands = (numberToThousands % 1000 - (tensOfThousands + unityOfThousands)) / 100;

    convertHundreds(hundredsOfThousands);
    convertTens(tensOfThousands);

    if(unityOfThousands == 1)
    {
        cout << " tysiac ";
    }
    else if(unityOfThousands == 2)
    {
        convertUnity(unityOfThousands);
        cout << " tysiace ";
    }
    else if(unityOfThousands == 3)
    {
        convertUnity(unityOfThousands);
        cout << " tysiace ";
    }
    else if(unityOfThousands == 4)
    {
        convertUnity(unityOfThousands);
        cout << " tysiace ";
    }
    else if(unityOfThousands == 5)
    {
        convertUnity(unityOfThousands);
        cout << " tysiecy ";
    }
    else if(unityOfThousands == 6)
    {
        convertUnity(unityOfThousands);
        cout << " tysiecy ";
    }
    else if(unityOfThousands == 7)
    {
        convertUnity(unityOfThousands);
        cout << " tysiecy ";
    }
    else if(unityOfThousands == 8)
    {
        convertUnity(unityOfThousands);
        cout << " tysiecy ";
    }
    else if(unityOfThousands == 9)
    {
        convertUnity(unityOfThousands);
        cout << " tysiecy ";
    }
    else
    {
        // Should never happen
    }
}