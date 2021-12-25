/*

This third edition cancels and replaces the second edition, ISO/IEC 9899:1999, as
corrected by ISO/IEC 9899:1999/Cor 1:2001, ISO/IEC 9899:1999/Cor 2:2004, and
ISO/IEC 9899:1999/Cor 3:2007. Major changes from the previous edition include:

*/

// TODO conditional (optional) features (including some that were previously mandatory)

// support for multiple threads of execution including an improved memory sequencing
//model, atomic objects, and thread-local storage (<stdatomic.h> and
// <threads.h>)

#include <stdatomic.h>
#include <threads.h>

// more macros from
#include <float.h>

// querying and specifying alignment of objects 
#include <stdalign.h>   //C11 standard (ISO/IEC 9899:2011):  7.15 Alignment <stdalign.h> (p: 268)
#include <stdlib.h>
