# Modular Arithmetics

## Modular Congruences

a and b are said to be congruence to each other under modulo N, if they leave same remainder when divided by N

a =~ b (mod N)

13 =~ 41 (mod 7)
13 mod 7 = 6
41 mod 7 = 6

if a =~ b (mod N), then a-b =~ 0 (mod N) i.e a-b is divisible by N. It can be written as 
a-b = N * k or a = N * K + b, where k can be any integer value.

## Multiplication under Modulo

if a * b = c, then a(mod N) * b (mod N) =~ c (mod N)

## Exponentiation in Modular Arithmetics

if a =~ b (mod N), then a^k = b^k (mod N)