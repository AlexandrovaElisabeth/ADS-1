// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
if (value <= 1) {return false;}
for (uint64_t i = 2; i < value - 1; i++) {
if (value % i == 0) {return false;}}
return true;}

uint64_t nPrime(uint64_t n) {
uint64_t found = 0,  current = 0;
while (current < n)
{if (checkPrime(found))
current++;
found++;}
return found - 1;}

uint64_t nextPrime(uint64_t value) {
value+=1;
while (!isPrime(value)) {value++;}
return value;}

uint64_t sumPrime(uint64_t hbound) {
uint64_t sum = 0;
for (uint64_t i = 2; i < hbound; i++) {
if (isPrime(i)) {
sum += i;}}
return sum;}
