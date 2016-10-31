/* C code produced by gperf version 3.0.4 */
/* Command-line: ../src/gperf -o -S2 -I  */
/* Computed positions: -k'1,$' */

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

#define TOTAL_KEYWORDS 36
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 9
#define MIN_HASH_VALUE 4
#define MAX_HASH_VALUE 53
/* maximum key range = 50, duplicates = 0 */

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
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 40,  0,  5,
       5,  0, 10, 30, 30, 25, 54, 54, 10, 35,
       5,  5, 10, 54,  0, 30, 20,  0, 30,  0,
      54,  0, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54, 54, 54, 54, 54,
      54, 54, 54, 54, 54, 54
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
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const char *resword;

          if (key < 24)
            {
              switch (key - 4)
                {
                  case 0:
                    resword = "else";
                    goto compare;
                  case 1:
                    resword = "while";
                    goto compare;
                  case 3:
                    resword = "or";
                    goto compare;
                  case 4:
                    resword = "end";
                    goto compare;
                  case 5:
                    resword = "case";
                    goto compare;
                  case 6:
                    resword = "begin";
                    goto compare;
                  case 7:
                    resword = "record";
                    goto compare;
                  case 8:
                    resword = "do";
                    goto compare;
                  case 9:
                    resword = "for";
                    goto compare;
                  case 10:
                    resword = "file";
                    goto compare;
                  case 11:
                    resword = "until";
                    goto compare;
                  case 12:
                    resword = "downto";
                    goto compare;
                  case 13:
                    resword = "of";
                    goto compare;
                  case 14:
                    resword = "nil";
                    goto compare;
                  case 15:
                    resword = "procedure";
                    goto compare;
                  case 17:
                    resword = "packed";
                    goto compare;
                  case 18:
                    resword = "forward";
                    goto compare;
                  case 19:
                    resword = "function";
                    goto compare;
                }
            }
          else
            {
              switch (key - 24)
                {
                  case 0:
                    resword = "type";
                    goto compare;
                  case 1:
                    resword = "label";
                    goto compare;
                  case 2:
                    resword = "repeat";
                    goto compare;
                  case 3:
                    resword = "to";
                    goto compare;
                  case 4:
                    resword = "not";
                    goto compare;
                  case 5:
                    resword = "then";
                    goto compare;
                  case 6:
                    resword = "const";
                    goto compare;
                  case 8:
                    resword = "in";
                    goto compare;
                  case 9:
                    resword = "var";
                    goto compare;
                  case 10:
                    resword = "with";
                    goto compare;
                  case 13:
                    resword = "if";
                    goto compare;
                  case 14:
                    resword = "div";
                    goto compare;
                  case 15:
                    resword = "goto";
                    goto compare;
                  case 19:
                    resword = "mod";
                    goto compare;
                  case 21:
                    resword = "array";
                    goto compare;
                  case 24:
                    resword = "and";
                    goto compare;
                  case 28:
                    resword = "program";
                    goto compare;
                  case 29:
                    resword = "set";
                    goto compare;
                }
            }
          return 0;
        compare:
          if (*str == *resword && !strcmp (str + 1, resword + 1))
            return resword;
        }
    }
  return 0;
}
