# Ceasar-Cipher-Implementation-C-
This repo describes the way to implement Ceaser Cipher for files like text, image , audio, etc.

### What is Ceasar Cipher: -
>   In cryptography, a Caesar cipher, also known as a Caesar's cipher, the shift cipher, Caesar's Code or Caesar Shift, is one of the simplest and most widely-known
> encryption techniques. It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions further down
> the alphabet. For example, with a shift of 3, A would be replaced by D, B would become E, and so on. The method is named after Julius Caesar, who used it to
> communicate with his generals.
>
>  The encryption step performed by a Caesar cipher is often incorporated as part of more complex schemes, such as the Vigenère cipher, and still has modern application
> in the ROT13 system. As with all single alphabet substitution ciphers, the Caesar cipher is easily broken and in practice offers essentially no communication security.
>
>
>
>
>   To encipher a message, simply look up each letter of the message in the "plain" line and write down the corresponding letter in the "cipher" line. To decipher, do the reverse.

*   Plaintext: `the quick brown fox jumps over the lazy dog`
*   Ciphertext: `WKH TXLFN EURZQ IRA MXPSV RYHU WKH ODCB GRJ`

> The encryption can also be represented using modular arithmetic by first transforming the letters into numbers, according to the scheme, `A = 0, B = 1,..., Z = 25.`

#### Encryption of a letter x by a shift n can be described mathematically as,

> * `E_n(x) = (x + n) \mod {26}.`

#### Decryption is performed similarly,

> * `D_n(x) = (x - n) \mod {26}.`
> The replacement remains the same throughout the message, so the cipher is classed as a type of monoalphabetic substitution, as opposed to polyalphabetic substitution.

## Breaking the Cipher
>   The Caesar cipher can be easily broken even in a ciphertext-only scenario. Two situations can be considered: 1) an attacker knows (or guesses) that some sort of   > simple substitution cipher has been used, but not specifically that it is a Caesar scheme; and 2) an attacker knows that a Caesar cipher is in use, but does not know > the shift value.

> 1. In the first case, the cipher can be broken using the same techniques as for a general simple substitution cipher, such as frequency analysis or pattern words.   >  While solving, it is likely that an attacker will quickly notice the regularity in the solution and deduce that a Caesar cipher is the specific algorithm employed.
>  The distribution of letters in a typical sample of English language text has a distinctive and predictable shape. A Caesar shift "rotates" this distribution, and it is possible to determine the shift by examining the resultant frequency graph.
>
>   The distribution of letters in a typical sample of English language text has a distinctive and predictable shape. A Caesar shift "rotates" this distribution, and it is possible to determine the shift by examining the resultant frequency graph.
In the second instance, breaking the scheme is even more straightforward. Since there are only a limited number of possible shifts (26 in English), they can each be tested in turn in a brute force attack. One way to do this is to write out a snippet of the ciphertext in a table of all possible shifts — a technique sometimes known as "completing the plain component". The example given is for the ciphertext "EXXEGOEXSRGI"; the plaintext is instantly recognisable by eye at a shift of four. Another way of viewing this method is that, under each letter of the ciphertext, the entire alphabet is written out in reverse starting at that letter. This attack can be accelerated using a set of strips prepared with the alphabet written down them in reverse order. The strips are then aligned to form the ciphertext along one row, and the plaintext should appear in one of the other rows.
>   
>   

## USE 




## Output and Screenshot
>
>![Screenshot 2022-07-01 221133](https://user-images.githubusercontent.com/78251168/176937140-c40dfed8-09ce-494d-9d55-e4e1ed736d1a.png)
>
>

