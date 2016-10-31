/* C code produced by gperf version 3.0.4 */
/* Command-line: ../src/gperf -k'1,2,$' -I -o ./modula3.gperf  */

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

#define TOTAL_KEYWORDS 106
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 9
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 158
/* maximum key range = 157, duplicates = 0 */

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
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159,  40,  35,  80,  50,   5,
       20, 159,  40,   0, 159, 105,  10,  10,   0,  15,
       90, 159,  15,  65,  30,  90,  65,  70,  50,  40,
      159, 159, 159, 159, 159, 159, 159,  50,  55,   0,
       60,   0,   5, 159,  15,  10, 159,  60,  40,  30,
        0,   5,   0, 159,   0,  55,  15,  90,  55,  65,
       50,  10, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
      159, 159, 159, 159, 159, 159
    };
  return len + asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]] + asso_values[(unsigned char)str[len - 1]];
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
      "", "",
      "IN",
      "", "", "",
      "return",
      "or",
      "ref",
      "procedure",
      "",
      "INLINE",
      "in",
      "for",
      "INTERFACE",
      "",
      "inline",
      "of",
      "readonly",
      "interface",
      "",
      "repeat",
      "if",
      "not",
      "ELSE",
      "const",
      "RETURN",
      "to",
      "try",
      "type",
      "", "",
      "finally",
      "typecase",
      "then",
      "",
      "MODULE",
      "", "",
      "from",
      "ELSIF",
      "module",
      "IF",
      "REF",
      "else",
      "BEGIN",
      "IMPORT",
      "OR",
      "NOT",
      "FROM",
      "elsif",
      "", "",
      "FOR",
      "case",
      "",
      "REPEAT",
      "OF",
      "END",
      "exception",
      "begin",
      "import",
      "TO",
      "end",
      "EXCEPTION",
      "array",
      "record",
      "FINALLY",
      "READONLY",
      "exit",
      "",
      "except",
      "do",
      "set",
      "THEN",
      "",
      "RECORD",
      "by",
      "MOD",
      "TYPE",
      "",
      "object",
      "DO",
      "TYPECASE",
      "EVAL",
      "while",
      "OBJECT",
      "METHODS",
      "TRY",
      "EXIT",
      "",
      "EXCEPT",
      "methods",
      "AND",
      "with",
      "",
      "unsafe",
      "",
      "mod",
      "eval",
      "ARRAY",
      "UNSAFE",
      "",
      "SET",
      "BITS",
      "UNTIL",
      "", "",
      "var",
      "lock",
      "value",
      "raises",
      "exports",
      "and",
      "WITH",
      "VALUE",
      "",
      "BY",
      "DIV",
      "PROCEDURE",
      "WHILE",
      "", "",
      "VAR",
      "bits",
      "",
      "RAISES",
      "EXPORTS",
      "div",
      "CASE",
      "CONST",
      "", "", "",
      "LOCK",
      "until",
      "", "", "", "", "", "", "", "", "",
      "", "", "",
      "UNTRACED",
      "", "", "", "", "", "", "", "", "",
      "untraced"
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key];

          if (*str == *s && !strcmp (str + 1, s + 1))
            return s;
        }
    }
  return 0;
}
