# VigenereC
*A C++ implementation of the Vigenère cipher as described at [Wikipedia](https://en.wikipedia.org/wiki/Vigen%C3%A8re_cipher)*

This is capable of encoding and decoding plaintext using Vigenère's cipher, which is based upon the Caesar cipher method of shifting/rotating letters. This implementation is NOT case-sensitive.
Verify results against [University of Denver's Vigenère encoder/decoder](https://www.cs.du.edu/~snarayan/crypt/vigenere.html)

(Note: In each of these cases, the Key is used to encrypt as well as decrypt. Whitespaces in keys are filtered by the program.)

| Plaintext  | Key | Ciphertext |
| ------------- | ------------- | ------------- |
| attacking tonight | OCULORHINOLARINGOLOGY | ovnlqbpvt hznzouz |
| Humpty Dumpty sat on a wall | egg | lastze hastze wgz st g agrp |
| Humpty Dumpty sat on a wall | The egg fell | abqtze iyxamf wez us e hles |


