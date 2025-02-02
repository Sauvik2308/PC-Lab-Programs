#include <iostream>
#include <cmath>

using namespace std;

// Function to reverse digits
void calculate(int num, char ch)
{
    if (ch == 'r')
    {
        int reversed = 0;
        while (num > 0)
        {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        cout << "Reversed number: " << reversed << endl;
    }
    else if (ch == 'p')
    {
        if (num <= 1)
        {
            cout << num << " is not a prime number." << endl;
            return;
        }
        bool isPrime = true;
        for (int i = 2; i <= sqrt(num); ++i)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << num << " is a prime number." << endl;
        }
        else
        {
            cout << num << " is not a prime number." << endl;
        }
    }
    else
    {
        cout << "Invalid character entered." << endl;
    }
}

int main()
{
    int num;
    char ch;

    cout << "Enter an integer and a character ('r' for reverse, 'p' for prime check): ";
    cin >> num >> ch;

    calculate(num, ch);

    return 0;
}
