/* C code produced by gperf version 3.0.4 */
/* Command-line: ../src/gperf -D -k'1,$' -s 2 -I -o ./adadefs.gperf  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#include <string.h>

#define TOTAL_KEYWORDS 54
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 4
#define MAX_HASH_VALUE 90
/* maximum key range = 87, duplicates = 1 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char asso_values[] =
    {
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 30, 50, 30,
      30, 15, 55,  0,  0, 35, 91, 91,  0, 40,
      30, 91, 20, 91,  5,  5,  0, 91, 70,  0,
      15, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91
    };
  return len + asso_values[(unsigned char)str[len - 1]] + asso_values[(unsigned char)str[0]];
}

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const char *
in_word_set (str, len)
     register const char *str;
     register unsigned int len;
{
  static const char * wordlist[] =
    {
      "last",
      "width",
      "length",
      "lastbit",
      "small",
      "string",
      "safe_small",
      "tasking_error",
      "true",
      "large",
      "storage_error",
      "size",
      "range",
      "pos",
      "safe_emax",
      "safe_large",
      "storage_size",
      "aft",
      "emax",
      "count",
      "natural",
      "program_error",
      "succ",
      "terminated",
      "digits",
      "address",
      "positive",
      "character",
      "integer",
      "numeric_error",
      "constraint_error",
      "epsilon",
      "callable",
      "pred",
      "image",
      "position",
      "machine_rounds",
      "float",
      "first",
      "machine_overflows",
      "firstbit",
      "delta",
      "machine_emax",
      "machine_radix",
      "base",
      "constrained",
      "val",
      "fore",
      "false",
      "mantissa",
      "machine_emin",
      "machine_mantissa",
      "boolean",
      "value"
    };

  static short lookup[] =
    {
        -1,   -1,   -1,   -1,    0,    1,    2,    3,
        -1,   -1,    4,    5,   -1,   -1,   -1,    6,
        -1,   -1,    7,    8,    9,   -1,   -1,   10,
        11,   12,   -1,   -1,   13,   14,   15,   -1,
        16,   17,   18,   19,   -1,   20,   21,   22,
        23,   24,   25,   26,   27,   -1,   -1,   28,
        29,   -1,   -1,   30,   31,   32,   33,   34,
        -1,   -1,   35,   36, -131,   -1,   39,   40,
        -1,   41,   -1,   42,   43,   44,   -1,   45,
        -1,   46,   47,   48,  -17,   -2,   49,   -1,
        -1,   -1,   50,   -1,   -1,   -1,   51,   52,
        -1,   -1,   53
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index];

              if (*str == *s && !strcmp (str + 1, s + 1))
                return s;
            }
          else if (index < -TOTAL_KEYWORDS)
            {
              register int offset = - 1 - TOTAL_KEYWORDS - index;
              register const char * *wordptr = &wordlist[TOTAL_KEYWORDS + lookup[offset]];
              register const char * *wordendptr = wordptr + -lookup[offset + 1];

              while (wordptr < wordendptr)
                {
                  register const char *s = *wordptr;

                  if (*str == *s && !strcmp (str + 1, s + 1))
                    return s;
                  wordptr++;
                }
            }
        }
    }
  return 0;
}
