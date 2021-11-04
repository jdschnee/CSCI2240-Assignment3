#ifndef JSCHNEE_H_INCLUDED
#define JSCHNEE_H_INCLUDED

#define MAX(x,y) ((x) > (y) ? (x) : (y))
#define MIN(x,y) ((x) < (y) ? (x) : (y))
#define SWAP(x,y) ((x) ^= (y)); ((y) ^= (x)); ((x) ^= (y));

void getThreeInts();
void swapIntoOrder(int *one, int *two, int *three);
int getRadix();
void toBase(int val, unsigned base);

#endif // JSCHNEE_H_INCLUDED
