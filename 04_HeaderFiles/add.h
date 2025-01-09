// The following preprocessor directives are called "header guards"
// and they allow us to protect this header from being inserted more than once
// in cpp files. They do an undefined check for the header guard. If the header
// guard has not been defined, then the header will compile and also define the
// header guard, ensuring it won't compile again.
#ifndef ADD_H
#define ADD_H

int add(int x, int y);

#endif
