/* C code produced by gperf version 3.0.4 */
/* Command-line: ../src/gperf --struct-type --readonly-table --enum --global -K field_name -N header_entry --ignore-case --compare-lengths ./smtp.gperf  */
/* Computed positions: -k'1,10,$' */

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

#line 1 "./smtp.gperf"

/* gperf --struct-type --readonly-table --enum --global -K field_name -N header_entry --ignore-case */
/* Contributed by Bruce Lilly
   derived from http://users.erols.com/blilly/mailparse/fields.gperf */

#include <string.h>

#line 9 "./smtp.gperf"
struct header_state { const char *field_name; };
enum
  {
    TOTAL_KEYWORDS = 109,
    MIN_WORD_LENGTH = 2,
    MAX_WORD_LENGTH = 34,
    MIN_HASH_VALUE = 6,
    MAX_HASH_VALUE = 230
  };

/* maximum key range = 225, duplicates = 0 */

#ifndef GPERF_DOWNCASE
#define GPERF_DOWNCASE 1
static unsigned char gperf_downcase[256] =
  {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
     45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122,  91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
    165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
    255
  };
#endif

#ifndef GPERF_CASE_MEMCMP
#define GPERF_CASE_MEMCMP 1
static int
gperf_case_memcmp (s1, s2, n)
     register const char *s1;
     register const char *s2;
     register unsigned int n;
{
  for (; n > 0;)
    {
      unsigned char c1 = gperf_downcase[(unsigned char)*s1++];
      unsigned char c2 = gperf_downcase[(unsigned char)*s2++];
      if (c1 == c2)
        {
          n--;
          continue;
        }
      return (int)c1 - (int)c2;
    }
  return 0;
}
#endif

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
  static const unsigned char asso_values[] =
    {
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231,  90, 231, 231, 231, 231,
      231, 231, 231,   0, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231,  20,   0,   5,   0,  10,
      115,  65,  15,  65, 231,  10,  70,  10,  60,  35,
      125, 231,  30,   0,  35,  20, 231,  20,  20,  95,
      231, 231, 231, 231, 231, 231, 231,  20,   0,   5,
        0,  10, 115,  65,  15,  65, 231,  10,  70,  10,
       60,  35, 125, 231,  30,   0,  35,  20, 231,  20,
       20,  95, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
      case 8:
      case 7:
      case 6:
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const unsigned char lengthtable[] =
  {
     0,  0,  0,  0,  0,  0,  6,  0,  3,  0, 10,  0,  2,  8,
     4, 10, 11,  7,  8,  9, 10,  0,  0, 13,  0,  0,  0,  0,
     8,  0, 15, 16,  0,  0,  0,  0,  6,  7,  8,  0, 10, 21,
     7,  0,  0,  5,  0, 12,  0, 19,  0, 16,  0, 13,  0,  0,
     0, 17,  0,  0, 20,  0, 12, 13, 19, 20,  0, 32, 13, 14,
    10,  0,  2,  8,  0,  5,  0,  7,  0, 34, 10,  0,  7, 23,
     0, 20,  6,  0,  0,  0, 25, 11,  7,  0, 19, 10, 16, 27,
    13, 14, 10, 16,  7,  0, 19, 15, 11, 17,  0, 19,  0,  0,
    17,  0,  9,  0, 16,  0, 18, 29, 30,  0, 12,  0, 24, 25,
    11, 12,  0,  4, 15,  0,  7,  8, 19, 10, 11, 12,  0,  4,
    10, 11, 17,  0,  4,  0, 11, 12,  0, 19,  0,  0, 12, 13,
     0,  0,  0, 12,  0,  0, 15,  0,  0,  0, 19,  0,  0,  0,
     0,  0, 20,  0, 12,  0,  0,  0,  0,  0, 13,  0, 20,  0,
    17,  0,  0, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    11,  0,  0,  0,  0, 16,  0,  0,  9,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0, 12,  0,  0,  0, 26,  0,  0,
     0,  0,  0,  0,  8,  0, 15
  };

static const struct header_state wordlist[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""},
#line 104 "./smtp.gperf"
    {"Status"},
    {""},
#line 19 "./smtp.gperf"
    {"Bcc"},
    {""},
#line 107 "./smtp.gperf"
    {"Supersedes"},
    {""},
#line 20 "./smtp.gperf"
    {"Cc"},
#line 21 "./smtp.gperf"
    {"Comments"},
#line 40 "./smtp.gperf"
    {"Date"},
#line 29 "./smtp.gperf"
    {"Content-ID"},
#line 32 "./smtp.gperf"
    {"Content-MD5"},
#line 53 "./smtp.gperf"
    {"Expires"},
#line 64 "./smtp.gperf"
    {"Keywords"},
#line 51 "./smtp.gperf"
    {"Encrypted"},
#line 79 "./smtp.gperf"
    {"Message-ID"},
    {""}, {""},
#line 42 "./smtp.gperf"
    {"Delivery-Date"},
    {""}, {""}, {""}, {""},
#line 14 "./smtp.gperf"
    {"Approved"},
    {""},
#line 43 "./smtp.gperf"
    {"Diagnostic-Code"},
#line 28 "./smtp.gperf"
    {"Content-Features"},
    {""}, {""}, {""}, {""},
#line 102 "./smtp.gperf"
    {"Sender"},
#line 15 "./smtp.gperf"
    {"Archive"},
#line 92 "./smtp.gperf"
    {"Received"},
    {""},
#line 95 "./smtp.gperf"
    {"References"},
#line 76 "./smtp.gperf"
    {"Media-Accept-Features"},
#line 105 "./smtp.gperf"
    {"Subject"},
    {""}, {""},
#line 52 "./smtp.gperf"
    {"Error"},
    {""},
#line 24 "./smtp.gperf"
    {"Content-Base"},
    {""},
#line 46 "./smtp.gperf"
    {"Disclose-Recipients"},
    {""},
#line 30 "./smtp.gperf"
    {"Content-Language"},
    {""},
#line 22 "./smtp.gperf"
    {"Complaints-To"},
    {""}, {""}, {""},
#line 114 "./smtp.gperf"
    {"X400-Content-Type"},
    {""}, {""},
#line 93 "./smtp.gperf"
    {"Received-content-MIC"},
    {""},
#line 16 "./smtp.gperf"
    {"Arrival-Date"},
#line 17 "./smtp.gperf"
    {"Autoforwarded"},
#line 85 "./smtp.gperf"
    {"Original-Message-ID"},
#line 84 "./smtp.gperf"
    {"Original-Envelope-ID"},
    {""},
#line 48 "./smtp.gperf"
    {"Disposition-Notification-Options"},
#line 18 "./smtp.gperf"
    {"Autosubmitted"},
#line 78 "./smtp.gperf"
    {"Mail-Copies-To"},
#line 81 "./smtp.gperf"
    {"Newsgroups"},
    {""},
#line 108 "./smtp.gperf"
    {"To"},
#line 98 "./smtp.gperf"
    {"Reply-To"},
    {""},
#line 67 "./smtp.gperf"
    {"Lines"},
    {""},
#line 70 "./smtp.gperf"
    {"List-ID"},
    {""},
#line 83 "./smtp.gperf"
    {"Original-Encoded-Information-Types"},
#line 96 "./smtp.gperf"
    {"Remote-MTA"},
    {""},
#line 35 "./smtp.gperf"
    {"Control"},
#line 112 "./smtp.gperf"
    {"X400-Content-Identifier"},
    {""},
#line 37 "./smtp.gperf"
    {"Conversion-With-Loss"},
#line 12 "./smtp.gperf"
    {"Action"},
    {""}, {""}, {""},
#line 87 "./smtp.gperf"
    {"Originator-Return-Address"},
#line 101 "./smtp.gperf"
    {"Return-Path"},
#line 110 "./smtp.gperf"
    {"Warning"},
    {""},
#line 25 "./smtp.gperf"
    {"Content-Description"},
#line 60 "./smtp.gperf"
    {"Importance"},
#line 74 "./smtp.gperf"
    {"List-Unsubscribe"},
#line 49 "./smtp.gperf"
    {"Disposition-Notification-To"},
#line 117 "./smtp.gperf"
    {"X400-Received"},
#line 73 "./smtp.gperf"
    {"List-Subscribe"},
#line 109 "./smtp.gperf"
    {"User-Agent"},
#line 27 "./smtp.gperf"
    {"Content-Duration"},
#line 106 "./smtp.gperf"
    {"Summary"},
    {""},
#line 23 "./smtp.gperf"
    {"Content-alternative"},
#line 11 "./smtp.gperf"
    {"Accept-Language"},
#line 47 "./smtp.gperf"
    {"Disposition"},
#line 65 "./smtp.gperf"
    {"Last-Attempt-Date"},
    {""},
#line 113 "./smtp.gperf"
    {"X400-Content-Return"},
    {""}, {""},
#line 41 "./smtp.gperf"
    {"Deferred-Delivery"},
    {""},
#line 71 "./smtp.gperf"
    {"List-Post"},
    {""},
#line 31 "./smtp.gperf"
    {"Content-Location"},
    {""},
#line 86 "./smtp.gperf"
    {"Original-Recipient"},
#line 45 "./smtp.gperf"
    {"Discarded-X400-MTS-Extensions"},
#line 44 "./smtp.gperf"
    {"Discarded-X400-IPMS-Extensions"},
    {""},
#line 34 "./smtp.gperf"
    {"Content-Type"},
    {""},
#line 59 "./smtp.gperf"
    {"Generate-Delivery-Report"},
#line 33 "./smtp.gperf"
    {"Content-Transfer-Encoding"},
#line 39 "./smtp.gperf"
    {"DSN-Gateway"},
#line 80 "./smtp.gperf"
    {"Message-Type"},
    {""},
#line 58 "./smtp.gperf"
    {"From"},
#line 116 "./smtp.gperf"
    {"X400-Originator"},
    {""},
#line 54 "./smtp.gperf"
    {"Failure"},
#line 97 "./smtp.gperf"
    {"Reply-By"},
#line 115 "./smtp.gperf"
    {"X400-MTS-Identifier"},
#line 36 "./smtp.gperf"
    {"Conversion"},
#line 75 "./smtp.gperf"
    {"MDN-Gateway"},
#line 50 "./smtp.gperf"
    {"Distribution"},
    {""},
#line 119 "./smtp.gperf"
    {"Xref"},
#line 72 "./smtp.gperf"
    {"List-Owner"},
#line 103 "./smtp.gperf"
    {"Sensitivity"},
#line 89 "./smtp.gperf"
    {"Posted-And-Mailed"},
    {""},
#line 88 "./smtp.gperf"
    {"Path"},
    {""},
#line 61 "./smtp.gperf"
    {"In-Reply-To"},
#line 77 "./smtp.gperf"
    {"MIME-Version"},
    {""},
#line 26 "./smtp.gperf"
    {"Content-Disposition"},
    {""}, {""},
#line 100 "./smtp.gperf"
    {"Reporting-UA"},
#line 99 "./smtp.gperf"
    {"Reporting-MTA"},
    {""}, {""}, {""},
#line 68 "./smtp.gperf"
    {"List-Archive"},
    {""}, {""},
#line 118 "./smtp.gperf"
    {"X400-Recipients"},
    {""}, {""}, {""},
#line 13 "./smtp.gperf"
    {"Alternate-Recipient"},
    {""}, {""}, {""}, {""}, {""},
#line 66 "./smtp.gperf"
    {"Latest-Delivery-Time"},
    {""},
#line 82 "./smtp.gperf"
    {"Organization"},
    {""}, {""}, {""}, {""}, {""},
#line 63 "./smtp.gperf"
    {"Injector-Info"},
    {""},
#line 38 "./smtp.gperf"
    {"DL-Expansion-History"},
    {""},
#line 94 "./smtp.gperf"
    {"Received-From-MTA"},
    {""}, {""},
#line 62 "./smtp.gperf"
    {"Incomplete-Copy"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 57 "./smtp.gperf"
    {"Followup-To"},
    {""}, {""}, {""}, {""},
#line 111 "./smtp.gperf"
    {"Will-Retry-Until"},
    {""}, {""},
#line 69 "./smtp.gperf"
    {"List-Help"},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
#line 55 "./smtp.gperf"
    {"Final-Log-ID"},
    {""}, {""}, {""},
#line 90 "./smtp.gperf"
    {"Prevent-Nondelivery-Report"},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 91 "./smtp.gperf"
    {"Priority"},
    {""},
#line 56 "./smtp.gperf"
    {"Final-Recipient"}
  };

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct header_state *
header_entry (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = wordlist[key].field_name;

            if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_memcmp (str, s, len))
              return &wordlist[key];
          }
    }
  return 0;
}
#line 120 "./smtp.gperf"


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

static int
my_case_strcmp (s1, s2)
     register const char *s1;
     register const char *s2;
{
  for (;;)
    {
      unsigned char c1 = *s1++;
      unsigned char c2 = *s2++;
      if (c1 >= 'A' && c1 <= 'Z')
        c1 += 'a' - 'A';
      if (c2 >= 'A' && c2 <= 'Z')
        c2 += 'a' - 'A';
      if (c1 != 0 && c1 == c2)
        continue;
      return (int)c1 - (int)c2;
    }
}

int
main (argc, argv)
     int argc;
     char *argv[];
{
  int i, j, k, n, exitcode;
  unsigned int len;
  const struct header_state *hs;

  n = 1;
  if (argc > 1)
    n = atoi (argv[1]);
  if (n < 1)
    n = 1;

  exitcode = 0;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j <= MAX_HASH_VALUE; j++)
        {
          const char *s = wordlist[j].field_name;
          len = strlen (s);
          if (len)
            {
              hs = header_entry (s, len);
              if (!(hs && strcmp (hs->field_name, s) == 0))
                {
                  fprintf (stderr, "%s != %s\n", s, hs ? hs->field_name : "(null)");
                  exitcode = 1;
                }
            }
        }
      for (j = 0; j <= MAX_HASH_VALUE; j++)
        {
          char s[MAX_WORD_LENGTH+1];
          /* expensive copy with case conversion (for testing) */
          strcpy (s, wordlist[j].field_name);
          len = strlen (s);
          if (len)
            {
              for (k = 0; k < len; k++)
                if (isupper (s[k]))
                  s[k] = tolower (s[k]);
                else if (islower (s[k]))
                  s[k] = toupper (s[k]);
              hs = header_entry (s, len);
              if (!(hs && my_case_strcmp (hs->field_name, s) == 0))
                {
                  fprintf (stderr, "%s != %s\n", s, hs ? hs->field_name : "(null)");
                  exitcode = 1;
                }
            }
        }
      hs = header_entry ("Dave", 4);
      if (hs)
        {
          fprintf (stderr, "Dave == %s\n", hs->field_name);
          exitcode = 1;
        }
    }
  return exitcode;
}
