/* C code produced by gperf version 3.0.4 */
/* Command-line: ../src/gperf -k1 -t -I -K foreign_name  */

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

struct language {
  const char *foreign_name;
  const char *english_name;
  const char *locale;
};
#include <string.h>

#define TOTAL_KEYWORDS 20
#define MIN_WORD_LENGTH 5
#define MAX_WORD_LENGTH 21
#define MIN_HASH_VALUE 5
#define MAX_HASH_VALUE 26
/* maximum key range = 22, duplicates = 0 */

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
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 10,  5,
      15, 27, 27, 10, 27, 27, 27, 27, 15, 27,
      27, 27, 27,  0,  0, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27, 20, 27, 27, 27,
      27, 27, 27, 27, 27, 27,  0, 27,  5, 27,
      27, 27, 27, 27, 27,  0, 27, 27, 27, 27,
      27, 27, 27, 27,  0, 10, 27, 27,  5, 27,
       0, 27, 27, 27, 27, 27, 27,  0, 27, 27,
      27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
      27, 27, 27, 27, 27, 27
    };
  return len + asso_values[(unsigned char)str[0]];
}

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
struct language *
in_word_set (str, len)
     register const char *str;
     register unsigned int len;
{
  static struct language wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""},
      {"Suomi",      "Finnish",    "fi_FI.UTF-8"},
      {"\355\225\234\352\270\200",       "Korean",     "ko_KR.UTF-8"},
      {"Svenska",    "Swedish",    "sv_SE.UTF-8"},
      {"T\303\274rk\303\247e",     "Turkish",    "tr_TR.UTF-8"},
      {"\346\227\245\346\234\254\350\252\236",     "Japanese",   "ja_JP.UTF-8"},
      {"\327\242\327\221\327\250\327\231\327\252",      "Hebrew",     "he_IL.UTF-8"},
      {"\344\270\255\346\226\207",       "Chinese",    "zh_CN.UTF-8"},
      {"English",    "English",    "en_GB.UTF-8"},
      {"Espa\303\261ol",    "Spanish",    "es_ES.UTF-8"},
      {"Ti\341\272\277ng Vi\341\273\207t", "Vietnamese", "vi_VN.UTF-8"},
      {"Dansk",      "Danish",     "da_DK.UTF-8"},
      {"\316\225\316\273\316\273\316\267\316\275\316\271\316\272\316\254",   "Greek",      "el_GR.UTF-8"},
      {"Deutsch",    "German",     "de_DE.UTF-8"},
      {"Italiano",   "Italian",    "it_IT.UTF-8"},
      {"\320\240\321\203\321\201\321\201\320\272\320\270\320\271",    "Russian",    "ru_RU.UTF-8"},
      {"Norsk",      "Norwegian",  "no_NO.UTF-8"},
      {"\340\270\240\340\270\262\340\270\251\340\270\262\340\271\204\340\270\227\340\270\242",    "Thai",       "th_TH.UTF-8"},
      {"\341\212\240\341\210\233\341\210\255\341\212\233",       "Amharic",    NULL},
      {""},
      {"Fran\303\247ais",   "French",     "fr_FR.UTF-8"},
      {""},
      {"\304\215esky",      "Czech",      "cs_CZ.UTF-8"}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].foreign_name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
