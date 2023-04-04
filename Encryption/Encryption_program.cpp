/**
██████╗░██╗░░░██╗██████╗░██████╗░██╗██╗░░██╗  ██████╗░░█████╗░████████╗███████╗██╗░░░░░
██╔══██╗██║░░░██║██╔══██╗██╔══██╗██║██║░██╔╝  ██╔══██╗██╔══██╗╚══██╔══╝██╔════╝██║░░░░░
██████╔╝██║░░░██║██║░░██║██████╔╝██║█████═╝░  ██████╔╝███████║░░░██║░░░█████╗░░██║░░░░░
██╔══██╗██║░░░██║██║░░██║██╔══██╗██║██╔═██╗░  ██╔═══╝░██╔══██║░░░██║░░░██╔══╝░░██║░░░░░
██║░░██║╚██████╔╝██████╔╝██║░░██║██║██║░╚██╗  ██║░░░░░██║░░██║░░░██║░░░███████╗███████╗
╚═╝░░╚═╝░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚═╝  ╚═╝░░░░░╚═╝░░╚═╝░░░╚═╝░░░╚══════╝╚══════╝
Author:Rudrik Patel
Topic: Encryption/Decryption program
 Copyright (C) 2023 Rudrik Patel - All Rights Reserved
 * You may use the code but don't modify otherwise you will
   get errors.
   If you have any problem contact me through my GitHub.
*/
#include <iostream>
#include <string>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
// declaring function to rotate the plaintext
char rotate(char c, int n);
// declaring function to check that the key is 0 to 9
bool only_digits(char *s[]);
// taking the key for user command line in terminal
int main(int argc, char *argv[])
{

    // validating key given by user
    // checking only for two argument
    if (argc != 2)
    {
        cout << "Usage: ./caesar key\n";
        return 1;
    }
    // checking that the argument is a digit
    else if (only_digits(argv) == false)
    {
        cout << "Usage: ./caesar key\n";
        return 1;
    }
    // converting key intially in string to integer
    int key = atoi(argv[1]);
    // getting input for plaintext
    cout << "This Mini project is created by Rudrik Patel" << endl;
    string p;
    cout  << "Plaintext:  ";
    getline(cin,p);
    cout << "Ciphertext: ";
    //calling rotate function to rotate each char of plaintext
    for (int x = 0; x < p.size(); x++)
    {
        char q = rotate(p[x], key);
        cout << q;
    }
    cout << endl;



}
// Making function to check that the key is digit
bool only_digits(char *s[])
{

    for (int i = 0; i < strlen(s[1]); i++)
    {
        if (isdigit(s[1][i]) == 0)
        {
            return false;
        }
    }
    return true;
}
// making function function to rotate the plaintext
char rotate(char c, int n)
{
    if (isalpha(c))
    {
        if (isupper(c))
        {
            c = ((c + n - 65) % 26) + 65;
        }
        else if (islower(c))
        {
            c = ((c + n - 97) % 26) + 97;
        }
    }
    return c;

}