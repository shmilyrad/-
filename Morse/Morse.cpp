#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
	_dottime=250;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime*4);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::c_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*3);
}

void Morse::w_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*7);
}
void MorseCode::transfor(char _code)

{

    switch (_code) {
        case ' ':

            c_space();

            break;
        case 'A':

        case 'a':

            dot();

            dash();

            break;

        case 'B':

        case 'b':

            dash();

            dot();

            dot();

            dot();

            break;
        case 'C':

        case 'c':

            dash();

            dot();

            dash();

            dot();

            break;
        case 'D':

        case 'd':

            dash();

            dot();

            dot();

            break;
        case 'E':

        case 'e':

            dot();

            break;
        case 'F':

        case 'f':



            dot();

            dot();

            dash();

            dot();

            break;
        case 'G':

        case 'g':

            dash();

            dash();

            dot();

            break;
        case 'H':

        case 'h':

            dot();

            dot();

            dot();

            dot();

            break;
        case 'I':

        case 'i':

            dot();

            dot();

            break;
        case 'J':

        case 'j':

            dot();

            dash();

            dash();

            dash();

            break;
        case 'K':

        case 'k':

            dash();

            dot();

            dash();

            break;
        case 'L':

        case 'l':
            dot();

            dash();

            dot();

            dot();

            break;
        case 'M':

        case 'm':

            dash();

            dash();
            break;
        case 'N':

        case 'n':

            dash();

            dot();

            break;
        case 'O':

        case 'o':

            dash();

            dash();

            dash();

            break;
        case 'P':

        case 'p':

            dot();

            dash();

            dash();

            dot();

            break;
        case 'Q':

        case 'q':

            dash();

            dash();

            dot();

            dash();

            break;
        case 'R':

        case 'r':

            dot();

            dash();

            dot();

            break;
        case 'S':

        case 's':

            dot();

            dot();

            dot();

            break;
        case 'T':

        case 't':

            dash();

            break;
        case 'U':

        case 'u':

            dot();

            dot();

            dash();

            break;
        case 'V':

        case 'v':

            dot();

            dot();

            dot();

            dash();

            break;

        case 'W':

        case 'w':

            dot();

            dash();

            dash();

            break;
        case 'X':

        case 'x':

            dash();

            dot();

            dot();

            dash();
        case 'Y':

        case 'y':

            dash();

            dot();

            dash();

            dash();
        case 'Z':

        case 'z':

            dash();

            dash();

            dot();

            dot();
        default:

            break;

    }
