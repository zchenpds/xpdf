/* C code produced by gperf version 3.0.4 */
/* Command-line: ../src/gperf -k4 -t -l -I -K foreign_name  */

struct language {
  const char *foreign_name;
  const char *english_name;
  const char *locale;
};
#include <string.h>

#define TOTAL_KEYWORDS 20
#define MIN_WORD_LENGTH 4
#define MAX_WORD_LENGTH 20
#define MIN_HASH_VALUE 4
#define MAX_HASH_VALUE 39
/* maximum key range = 36, duplicates = 0 */

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
       5, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40,  0, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40,  0, 40, 40, 40, 40, 40,
      25, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 20, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 25, 40, 40,
      40,  0, 40, 40, 40, 10, 40, 40, 40, 40,
      15, 15, 40, 40, 10, 10,  5, 10,  5, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40,  0, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40,  0, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40,  5,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40,  0, 40, 40, 40
    };
  return len + asso_values[(unsigned char)str[3]];
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
  static unsigned char lengthtable[] =
    {
       0,  0,  0,  0,  4,  0,  6,  0,  8,  4, 10,  0, 12,  0,
      14, 10, 16,  0,  0, 14, 10, 16,  0,  0, 14, 10, 16,  0,
       0, 14, 20,  0,  0,  0, 14, 10,  0,  0,  0, 14
    };
  static struct language wordlist[] =
    {
      {""}, {""}, {""}, {""},
      {"N-e\207",       "Chinese",    "zh_CN.UTF-8"},
      {""},
      {"e\345g,\212\236",     "Japanese",   "ja_JP.UTF-8"},
      {""},
      {"\022\240\022\033\022-\022\233",       "Amharic",    NULL},
      {"\325\\\256\000",       "Korean",     "ko_KR.UTF-8"},
      {"\001\015\000e\000s\000k\000y",      "Czech",      "cs_CZ.UTF-8"},
      {""},
      {"\000T\000\374\000r\000k\000\347\000e",     "Turkish",    "tr_TR.UTF-8"},
      {""},
      {"\000D\000e\000u\000t\000s\000c\000h",    "German",     "de_DE.UTF-8"},
      {"\005\342\005\321\005\350\005\331\005\352",      "Hebrew",     "he_IL.UTF-8"},
      {"\003\225\003\273\003\273\003\267\003\275\003\271\003\272\003\254",   "Greek",      "el_GR.UTF-8"},
      {""}, {""},
      {"\000S\000v\000e\000n\000s\000k\000a",    "Swedish",    "sv_SE.UTF-8"},
      {"\000S\000u\000o\000m\000i",      "Finnish",    "fi_FI.UTF-8"},
      {"\000I\000t\000a\000l\000i\000a\000n\000o",   "Italian",    "it_IT.UTF-8"},
      {""}, {""},
      {"\000E\000s\000p\000a\000\361\000o\000l",    "Spanish",    "es_ES.UTF-8"},
      {"\000N\000o\000r\000s\000k",      "Norwegian",  "no_NO.UTF-8"},
      {"\000F\000r\000a\000n\000\347\000a\000i\000s",   "French",     "fr_FR.UTF-8"},
      {""}, {""},
      {"\000E\000n\000g\000l\000i\000s\000h",    "English",    "en_GB.UTF-8"},
      {"\000T\000i\036\277\000n\000g\000 \000V\000i\036\307\000t", "Vietnamese", "vi_VN.UTF-8"},
      {""}, {""}, {""},
      {"\004 \004C\004A\004A\004:\0048\0049",    "Russian",    "ru_RU.UTF-8"},
      {"\000D\000a\000n\000s\000k",      "Danish",     "da_DK.UTF-8"},
      {""}, {""}, {""},
      {"\016 \0162\016)\0162\016D\016\027\016\"",    "Thai",       "th_TH.UTF-8"}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = wordlist[key].foreign_name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &wordlist[key];
          }
    }
  return 0;
}
