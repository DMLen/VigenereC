# VigenereC
*A C++ implementation of the Vigenère cipher as described at [Wikipedia](https://en.wikipedia.org/wiki/Vigen%C3%A8re_cipher)*

This is a text encoder/decoder that is capable of encrypting and decrypting plaintext with a supplied key using Vigenère's cipher, which is based upon the Caesar cipher method of shifting/rotating letters. This implementation is NOT case-sensitive, and spaces are not counted in the provided key.

The program itself is a simple commandline tool. Compile the cpp code and run it, or find a pre-built .exe file in the releases tab.

Verify results against [University of Denver's Vigenère encoder/decoder](https://www.cs.du.edu/~snarayan/crypt/vigenere.html)
(Note: In each of these cases, the Key is used to encrypt as well as decrypt. Whitespaces and upper/lowercase are filtered out and ignored by this program.)

| Plaintext  | Key | Ciphertext |
| ------------- | ------------- | ------------- |
| attacking tonight | OCULORHINOLARINGOLOGY | ovnlqbpvt hznzouz |
| Humpty Dumpty sat on a wall | egg | lastze hastze wgz st g agrp |
| Humpty Dumpty sat on a wall | The egg fell | abqtze iyxamf wez us e hles |


