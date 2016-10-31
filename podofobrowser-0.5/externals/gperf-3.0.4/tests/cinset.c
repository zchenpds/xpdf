/* C code produced by gperf version 3.0.4 */
/* Command-line: ../src/gperf -c -l -S1 -I -o ./c.gperf  */
/* Computed positions: -k'1,3' */

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

#define TOTAL_KEYWORDS 32
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 8
#define MIN_HASH_VALUE 3
#define MAX_HASH_VALUE 44
/* maximum key range = 42, duplicates = 0 */

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
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 30, 10, 10,
      25, 20,  0, 10, 45,  5, 45, 45, 25, 45,
      10, 10,  5, 45,  0,  5,  0,  0,  0, 20,
      45, 45, 25, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45, 45, 45, 45, 45,
      45, 45, 45, 45, 45, 45
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
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

          switch (key - 3)
            {
              case 0:
                if (len == 3)
                  {
                    resword = "for";
                    goto compare;
                  }
                break;
              case 3:
                if (len == 6)
                  {
                    resword = "return";
                    goto compare;
                  }
                break;
              case 4:
                if (len == 2)
                  {
                    resword = "if";
                    goto compare;
                  }
                break;
              case 5:
                if (len == 3)
                  {
                    resword = "int";
                    goto compare;
                  }
                break;
              case 6:
                if (len == 4)
                  {
                    resword = "void";
                    goto compare;
                  }
                break;
              case 7:
                if (len == 5)
                  {
                    resword = "union";
                    goto compare;
                  }
                break;
              case 8:
                if (len == 6)
                  {
                    resword = "struct";
                    goto compare;
                  }
                break;
              case 9:
                if (len == 7)
                  {
                    resword = "typedef";
                    goto compare;
                  }
                break;
              case 10:
                if (len == 8)
                  {
                    resword = "unsigned";
                    goto compare;
                  }
                break;
              case 11:
                if (len == 4)
                  {
                    resword = "goto";
                    goto compare;
                  }
                break;
              case 12:
                if (len == 5)
                  {
                    resword = "float";
                    goto compare;
                  }
                break;
              case 13:
                if (len == 6)
                  {
                    resword = "switch";
                    goto compare;
                  }
                break;
              case 15:
                if (len == 8)
                  {
                    resword = "register";
                    goto compare;
                  }
                break;
              case 16:
                if (len == 4)
                  {
                    resword = "case";
                    goto compare;
                  }
                break;
              case 17:
                if (len == 5)
                  {
                    resword = "short";
                    goto compare;
                  }
                break;
              case 18:
                if (len == 6)
                  {
                    resword = "signed";
                    goto compare;
                  }
                break;
              case 21:
                if (len == 4)
                  {
                    resword = "enum";
                    goto compare;
                  }
                break;
              case 22:
                if (len == 5)
                  {
                    resword = "const";
                    goto compare;
                  }
                break;
              case 23:
                if (len == 6)
                  {
                    resword = "extern";
                    goto compare;
                  }
                break;
              case 24:
                if (len == 2)
                  {
                    resword = "do";
                    goto compare;
                  }
                break;
              case 25:
                if (len == 8)
                  {
                    resword = "continue";
                    goto compare;
                  }
                break;
              case 26:
                if (len == 4)
                  {
                    resword = "else";
                    goto compare;
                  }
                break;
              case 27:
                if (len == 5)
                  {
                    resword = "while";
                    goto compare;
                  }
                break;
              case 28:
                if (len == 6)
                  {
                    resword = "double";
                    goto compare;
                  }
                break;
              case 29:
                if (len == 7)
                  {
                    resword = "default";
                    goto compare;
                  }
                break;
              case 30:
                if (len == 8)
                  {
                    resword = "volatile";
                    goto compare;
                  }
                break;
              case 31:
                if (len == 4)
                  {
                    resword = "auto";
                    goto compare;
                  }
                break;
              case 32:
                if (len == 5)
                  {
                    resword = "break";
                    goto compare;
                  }
                break;
              case 33:
                if (len == 6)
                  {
                    resword = "sizeof";
                    goto compare;
                  }
                break;
              case 36:
                if (len == 4)
                  {
                    resword = "long";
                    goto compare;
                  }
                break;
              case 38:
                if (len == 6)
                  {
                    resword = "static";
                    goto compare;
                  }
                break;
              case 41:
                if (len == 4)
                  {
                    resword = "char";
                    goto compare;
                  }
                break;
            }
          return 0;
        compare:
          if (*str == *resword && !memcmp (str + 1, resword + 1, len - 1))
            return resword;
        }
    }
  return 0;
}
