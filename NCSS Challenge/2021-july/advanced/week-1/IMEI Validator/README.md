IMEI (International Mobile Equipment Identity) numbers are a unique number given to every mobile phone. The IMEI number for a phone can displayed on-screen on most phones by entering `*#06#` on the dialpad, or alongside other system information in the settings menu on smartphone operating systems. An example IMEI is `490154203237518`.

The last digit in an IMEI is a [checksum digit](https://en.wikipedia.org/wiki/Checksum), used to validate the correctness of the rest of the digits to try and prevent data entry mistakes. To check if an IMEI is valid, you can use the following algorithm:

* From the rightmost digit, which is the check digit, and moving left, double the value of every second digit. If the result of this doubling operation is greater than 9 (e.g. 8 × 2 = 16), then add the digits of the product (e.g. 16 → 1 + 6 = 7).
* Take the sum of all the digits.
* If the total modulo 10 is equal to 0 (if the total is divisible by 10) then the number is valid.

With our example IMEI, here's the validation process visualised:

| sdf | dfdf |
| --- | ---- |
| dfdf | fdfddsdf |

| **IMEI** | 4 | 9 | 0 | 1 | 5 | 4 | 2 | 0 | 3 | 2 | 3 | 7 | 5 | 1 | 8 |
| -------- | - | - | - | - | - | - | - | - | - | - | - | - | - | - | - |
| **Doubled** | 4 | 18 | 0 | 2 | 5 | 8 | 2 | 0 | 3 | 4 | 3 | 14 | 5 | 2 | - |
| **Summed** | 4 | + (1 + 8) | + 0 | + 2 | + 5 | + 8 | + 2 | + 0 | + 3 | + 4 | + 3 | + (1 + 4) | + 5 | + 2| = 52 + 8 (checksum digit) |

Since 52 + 8 = 60, and 60 modulo 10 = 0, the IMEI is valid.

Write a program that reads in a number, and outputs whether or not the number is a valid IMEI according to the above validation algorithm. Here's some examples of how your program should work:

    Enter number: 490154203237518
    Valid.
‎

    Enter number: 490154203237519
    Invalid.
‎

    Enter number: 353918050883590
    Valid.
‎

    Enter number: 45678
    Invalid.