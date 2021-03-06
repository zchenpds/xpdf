 /***************************************************************************
 *   Copyright (C) 2006 by Dominik Seichter                                *
 *   domseichter@web.de                                                    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Library General Public License as       *
 *   published by the Free Software Foundation; either version 2 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this program; if not, write to the                 *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include "PdfString.h"

#include "PdfFilter.h"
#include "PdfOutputDevice.h"

#include <malloc.h>
namespace PoDoFo {

extern bool podofo_is_little_endian();

const PdfString PdfString::StringNull = PdfString();
const char PdfString::s_pszUnicodeMarker[] = { (char) 0xFE, (char) 0xFF };

// Conversion table from PDFDocEncoding (almost Latin1) to UTF16
const pdf_utf16be PdfString::s_cPdfDocEncoding[256] = {
    0x0000,
    0x0001,
    0x0002,
    0x0003,
    0x0004,
    0x0005,
    0x0006,
    0x0007,
    0x0008,
    0x0009,
    0x000A,
    0x000B,
    0x000C,
    0x000D,
    0x000E,
    0x000F,
    0x0010,
    0x0011,
    0x0012,
    0x0013,
    0x0014,
    0x0015,
    0x0017,
    0x0017,
    0x02D8,
    0x02C7, // dec 25
    0x02C6,
    0x02D9,
    0x02DD,
    0x02DB,
    0x02DA,
    0x02DC,
    0x0020,
    0x0021,
    0x0022,
    0x0023,
    0x0024,
    0x0025,
    0x0026,
    0x0027,
    0x0028,
    0x0029,
    0x002A,
    0x002B,
    0x002C,
    0x002D,
    0x002E,
    0x002F,
    0x0030,
    0x0031,
    0x0032,
    0x0033,
    0x0034,
    0x0035,
    0x0036,
    0x0037,
    0x0038,
    0x0039, // dec 57 
    0x003A,
    0x003B,
    0x003C,
    0x003D,
    0x003E,
    0x003F,
    0x0040,
    0x0041,
    0x0042,
    0x0043,
    0x0044,
    0x0045,
    0x0046,
    0x0047,
    0x0048,
    0x0049,
    0x004A,
    0x004B,
    0x004C,
    0x004D,
    0x004E,
    0x004F,
    0x0050,
    0x0051,
    0x0052,
    0x0053,
    0x0054,
    0x0055,
    0x0056,
    0x0057,
    0x0058,
    0x0059, // 89
    0x005A,
    0x005B,
    0x005C,
    0x005D,
    0x005E,
    0x005F,
    0x0060,
    0x0061,
    0x0062,
    0x0063,
    0x0064,
    0x0065,
    0x0066,
    0x0067,
    0x0068,
    0x0069,
    0x006A,
    0x006B,
    0x006C,
    0x006D,
    0x006E,
    0x006F,
    0x0070,
    0x0071,
    0x0072,
    0x0073,
    0x0074,
    0x0075,
    0x0076,
    0x0077,
    0x0078,
    0x0079, //121 
    0x007A,
    0x007B,
    0x007C,
    0x007D,
    0x007E,
    0x0000, // Undefined
    0x2022,
    0x2020,
    0x2021,
    0x2026,
    0x2014,
    0x2013,
    0x0192,
    0x2044,
    0x2039,
    0x203A,
    0x2212,
    0x2030,
    0x201E,
    0x201C,
    0x201D,
    0x2018,
    0x2019,
    0x201A,
    0x2122,
    0xFB01, // dec147 
    0xFB02,
    0x0141,
    0x0152,
    0x0160,
    0x0178,
    0x017D,
    0x0131,
    0x0142,
    0x0153,
    0x0161,
    0x017E,
    0x0000, // Undefined
    0x20AC,
    0x00A1,
    0x00A2,
    0x00A3,
    0x00A4,
    0x00A5,
    0x00A6,
    0x00A7,
    0x00A8,
    0x00A9,
    0x00AA,
    0x00AB,
    0x00AC,
    0x0000, // Undefined
    0x00AE,
    0x00AF,
    0x00B0,
    0x00B1,
    0x00B2,
    0x00B3,
    0x00B4,
    0x00B5,
    0x00B6,
    0x00B7,
    0x00B8,
    0x00B9,
    0x00BA,
    0x00BB,
    0x00BC,
    0x00BD,
    0x00BE,
    0x00BF,
    0x00C0,
    0x00C1,
    0x00C2,
    0x00C3,
    0x00C4,
    0x00C5,
    0x00C6,
    0x00C7,
    0x00C8,
    0x00C9,
    0x00CA,
    0x00CB,
    0x00CC,
    0x00CD,
    0x00CE,
    0x00CF,
    0x00D0,
    0x00D1,
    0x00D2,
    0x00D3,
    0x00D4,
    0x00D5,
    0x00D6,
    0x00D7,
    0x00D8,
    0x00D9,
    0x00DA,
    0x00DB,
    0x00DC,
    0x00DD,
    0x00DE,
    0x00DF,
    0x00E0,
    0x00E1,
    0x00E2,
    0x00E3,
    0x00E4,
    0x00E5,
    0x00E6,
    0x00E7,
    0x00E8,
    0x00E9,
    0x00EA,
    0x00EB,
    0x00EC,
    0x00ED,
    0x00EE,
    0x00EF,
    0x00F0,
    0x00F1,
    0x00F2,
    0x00F3,
    0x00F4,
    0x00F5,
    0x00F6,
    0x00F7,
    0x00F8,
    0x00F9,
    0x00FA,
    0x00FB,
    0x00FC,
    0x00FD,
    0x00FE,
    0x00FF
};

PdfString::PdfString()
    : m_bHex( false ), m_bUnicode( false )
{
}

PdfString::PdfString( const std::string& sString )
    : m_bHex( false ), m_bUnicode( false )
{
    if( sString.length() )
        Init( sString.c_str(), sString.length() );
}

PdfString::PdfString( const char* pszString )
    : m_bHex( false ), m_bUnicode( false )
{
    if( pszString )
        Init( pszString, strlen( pszString ) );
}

PdfString::PdfString( const char* pszString, long lLen, bool bHex )
    : m_bHex( bHex ), m_bUnicode( false )
{
    Init( pszString, lLen );
}

PdfString::PdfString( const pdf_utf8* pszStringUtf8 )
    : m_bHex( false ), m_bUnicode( true )
{
    InitFromUtf8( pszStringUtf8, strlen( reinterpret_cast<const char*>(pszStringUtf8) ) );
}

PdfString::PdfString( const pdf_utf8* pszStringUtf8, long lLen )
    : m_bHex( false ), m_bUnicode( true )
{
    InitFromUtf8( pszStringUtf8, lLen );
}

PdfString::PdfString( const PdfString & rhs )
    : PdfDataType(), m_bHex( false ), m_bUnicode( false )
{
    this->operator=( rhs );
}

PdfString::~PdfString()
{
}

void PdfString::SetHexData( const char* pszHex, long lLen )
{
    if( !pszHex ) 
    {
        PODOFO_RAISE_ERROR( ePdfError_InvalidHandle );
    }

    if( lLen == -1 )
        lLen = strlen( pszHex );

    m_bHex   = true;
    m_buffer = PdfRefCountedBuffer( lLen + 1);

    memcpy( m_buffer.GetBuffer(), pszHex, lLen );
    m_buffer.GetBuffer()[lLen] = '\0';
}

void PdfString::Write ( PdfOutputDevice* pDevice ) const
{
    // Strings in PDF documents may contain \0 especially if they are encrypted
    // this case has to be handled!

    pDevice->Print( m_bHex ? "<" : "(" );
    if( m_bUnicode ) 
        pDevice->Write( PdfString::s_pszUnicodeMarker, sizeof( PdfString::s_pszUnicodeMarker ) );

    if( m_buffer.GetSize() )
        pDevice->Write( m_buffer.GetBuffer(), m_buffer.GetSize()-1 );
    pDevice->Print( m_bHex ? ">" : ")" );
}

const PdfString & PdfString::operator=( const PdfString & rhs )
{
    this->m_bHex     = rhs.m_bHex;
    this->m_bUnicode = rhs.m_bUnicode;
    this->m_buffer   = rhs.m_buffer;

    return *this;
}

bool PdfString::operator>( const PdfString & rhs ) const
{
    PdfString str1 = *this;
    PdfString str2 = rhs;

    if( m_bHex || rhs.m_bHex )
    {
        // one or both strings are hex:
        // we can only compare non hex strings
        // so decode them.
        str1 = str1.HexDecode();
        str2 = str2.HexDecode();
    }

    if( m_bUnicode || rhs.m_bUnicode )
    {
        // one or both strings are unicode:
        // make sure both are unicode so that 
        // we do not loose information
        str1 = str1.ToUnicode();
        str2 = str2.ToUnicode();
    }

    return str1.m_buffer > str2.m_buffer;
}

bool PdfString::operator<( const PdfString & rhs ) const
{
    PdfString str1 = *this;
    PdfString str2 = rhs;

    if( m_bHex || rhs.m_bHex )
    {
        // one or both strings are hex:
        // we can only compare non hex strings
        // so decode them.
        str1 = str1.HexDecode();
        str2 = str2.HexDecode();
    }

    if( m_bUnicode || rhs.m_bUnicode )
    {
        // one or both strings are unicode:
        // make sure both are unicode so that 
        // we do not loose information
        str1 = str1.ToUnicode();
        str2 = str2.ToUnicode();
    }

    return str1.m_buffer < str2.m_buffer;
}

bool PdfString::operator==( const PdfString & rhs ) const
{
    PdfString str1 = *this;
    PdfString str2 = rhs;

    if( m_bHex || rhs.m_bHex )
    {
        // one or both strings are hex:
        // we can only compare non hex strings
        // so decode them.
        str1 = str1.HexDecode();
        str2 = str2.HexDecode();
    }

    if( m_bUnicode || rhs.m_bUnicode )
    {
        // one or both strings are unicode:
        // make sure both are unicode so that 
        // we do not loose information
        str1 = str1.ToUnicode();
        str2 = str2.ToUnicode();
    }

    return str1.m_buffer == str2.m_buffer;
}

void PdfString::Init( const char* pszString, long lLen )
{
    // TODO: escape characters inside of strings!
    if( pszString ) 
    {
        bool bUft16LE = false;
        // check if it is a unicode string (UTF-16BE)
        // UTF-16BE strings have to start with 0xFE 0xFF
        if( lLen >= 2 ) 
        {
            m_bUnicode = (pszString[0] == PdfString::s_pszUnicodeMarker[0] && 
                          pszString[1] == PdfString::s_pszUnicodeMarker[1]);

            // Check also for UTF-16LE
            if( !m_bUnicode && (pszString[0] == PdfString::s_pszUnicodeMarker[1] && 
                                pszString[1] == PdfString::s_pszUnicodeMarker[0]) )
            {
                bUft16LE = true;
            }
        }

        // skip the first two bytes 
        if( m_bUnicode )
        {
            lLen      -= 2;
            pszString += 2;
        }

        m_buffer = PdfRefCountedBuffer( m_bUnicode ? lLen + 2 : lLen + 1);
        memcpy( m_buffer.GetBuffer(), pszString, lLen );
        m_buffer.GetBuffer()[lLen] = '\0';
        // terminate unicode strings with \0\0
        if( m_bUnicode )
            m_buffer.GetBuffer()[lLen+1] = '\0';
                

        // if the buffer is a UTF-16LE string
        // convert it to UTF-16BE
        if( bUft16LE ) 
        {
            SwapBytes( m_buffer.GetBuffer(), lLen );
        }

        if( m_bHex )
        {
            m_bHex = false;
            *this  = this->HexEncode();
        }
    }
}

void PdfString::InitFromUtf8( const pdf_utf8* pszStringUtf8, long lLen )
{
    long        lBufLen = lLen << 1;
    pdf_utf16be *pBuffer = (pdf_utf16be *) alloca(lBufLen); // twice as large buffer should always be enough

    lBufLen = PdfString::ConvertUTF8toUTF16( pszStringUtf8, lLen, pBuffer, lBufLen );

    lBufLen = lBufLen << 1; // lBufLen is the number of characters, we need the number of bytes now!
    m_buffer = PdfRefCountedBuffer( lBufLen + 2 );
    memcpy( m_buffer.GetBuffer(), reinterpret_cast<const char*>(pBuffer), lBufLen );
    m_buffer.GetBuffer()[lBufLen] = '\0';
    m_buffer.GetBuffer()[lBufLen+1] = '\0';
}

PdfString PdfString::HexEncode() const
{
    if( this->IsHex() )
        return *this;
    else
    {
        std::auto_ptr<PdfFilter> pFilter;

        long                  lLen = m_buffer.GetSize() << 1;
        PdfString             str;
        PdfRefCountedBuffer   buffer( lLen );
        PdfMemoryOutputStream stream( buffer.GetBuffer(), lLen );

        pFilter = PdfFilterFactory::Create( ePdfFilter_ASCIIHexDecode );
        pFilter->BeginEncode( &stream );
        pFilter->EncodeBlock( m_buffer.GetBuffer(), m_buffer.GetSize() );
        pFilter->EndEncode();

        str.m_buffer   = buffer;
        str.m_bHex     = true;
        str.m_bUnicode = m_bUnicode;

        return str;
    }
} 

PdfString PdfString::HexDecode() const
{
    if( !this->IsHex() )
        return *this;
    else
    {
        std::auto_ptr<PdfFilter> pFilter;

        long                  lLen = m_buffer.GetSize() >> 1;
        PdfString             str;
        PdfRefCountedBuffer   buffer( lLen );
        PdfMemoryOutputStream stream( buffer.GetBuffer(), lLen );

        pFilter = PdfFilterFactory::Create( ePdfFilter_ASCIIHexDecode );
        pFilter->BeginDecode( &stream );
        pFilter->DecodeBlock( m_buffer.GetBuffer(), m_buffer.GetSize() );
        pFilter->EndDecode();

        str.m_buffer   = buffer;
        str.m_bHex     = false;
        str.m_bUnicode = m_bUnicode;

        return str;
    }
} 

PdfString PdfString::ToUnicode() const
{
    if( this->IsUnicode() )
        return *this;
    else
    {
        PdfString src = *this;
        if( this->IsHex() )
            src = this->HexDecode();

        long                  lLen = src.GetLength() * sizeof(pdf_utf16be);
        PdfString             str;
        PdfRefCountedBuffer   buffer( lLen );
        pdf_utf16be*          pString = reinterpret_cast<pdf_utf16be*>(buffer.GetBuffer());

        printf("lLen = %i\n", lLen );
        printf("src  = %i\n", src.GetLength() );
        for( int i=0;i<src.GetLength();i++ )
            pString[i] = s_cPdfDocEncoding[static_cast<int>(src.m_buffer.GetBuffer()[i])];

        //make sure the buffer is 0 terminated
        pString[lLen] = 0;

        // convert to UTF-16be on little endian systems
        if( podofo_is_little_endian() )
            PdfString::SwapBytes( buffer.GetBuffer(), lLen );

        str.m_buffer   = buffer;
        str.m_bHex     = false;
        str.m_bUnicode = true;
        return str;
    }
}

void PdfString::SwapBytes( char* pBuf, long lLen ) 
{
    char  cSwap;
    while( lLen > 1 )
    {
        cSwap     = *pBuf;
        *pBuf     = *(pBuf+1);
        *(++pBuf) = cSwap;
        
        ++pBuf;
        lLen -= 2;
    }
}
/*
 * The disclaimer below applies to the Unicode conversion
 * functions below. The functions where adapted for use in PoDoFo.
 *
 * The original can be found at:
 * http://www.unicode.org/Public/PROGRAMS/CVTUTF/
 */

/*
 * Copyright 2001-2004 Unicode, Inc.
 * 
 * Disclaimer
 * 
 * This source code is provided as is by Unicode, Inc. No claims are
 * made as to fitness for any particular purpose. No warranties of any
 * kind are expressed or implied. The recipient agrees to determine
 * applicability of information provided. If this file has been
 * purchased on magnetic or optical media from Unicode, Inc., the
 * sole remedy for any claim will be exchange of defective media
 * within 90 days of receipt.
 * 
 * Limitations on Rights to Redistribute This Code
 * 
 * Unicode, Inc. hereby grants the right to freely use the information
 * supplied in this file in the creation of products supporting the
 * Unicode Standard, and to make copies of this file in any form
 * for internal or external distribution as long as this notice
 * remains attached.
 */

/* ---------------------------------------------------------------------

    Conversions between UTF32, UTF-16, and UTF-8. Source code file.
    Author: Mark E. Davis, 1994.
    Rev History: Rick McGowan, fixes & updates May 2001.
    Sept 2001: fixed const & error conditions per
	mods suggested by S. Parent & A. Lillich.
    June 2002: Tim Dodd added detection and handling of incomplete
	source sequences, enhanced error detection, added casts
	to eliminate compiler warnings.
    July 2003: slight mods to back out aggressive FFFE detection.
    Jan 2004: updated switches in from-UTF8 conversions.
    Oct 2004: updated to use UNI_MAX_LEGAL_UTF32 in UTF-32 conversions.

    See the header file "ConvertUTF.h" for complete documentation.

------------------------------------------------------------------------ */

/* --------------------------------------------------------------------- */
/* Some fundamental constants */
#define UNI_REPLACEMENT_CHAR static_cast<unsigned long>(0x0000FFFD)
#define UNI_MAX_BMP          static_cast<unsigned long>(0x0000FFFF)
#define UNI_MAX_UTF16        static_cast<unsigned long>(0x0010FFFF)
#define UNI_MAX_UTF32        static_cast<unsigned long>(0x7FFFFFFF)
#define UNI_MAX_LEGAL_UTF32  static_cast<unsigned long>(0x0010FFFF)

#define UNI_SUR_HIGH_START   static_cast<unsigned long>(0xD800)
#define UNI_SUR_HIGH_END     static_cast<unsigned long>(0xDBFF)
#define UNI_SUR_LOW_START    static_cast<unsigned long>(0xDC00)
#define UNI_SUR_LOW_END      static_cast<unsigned long>(0xDFFF)

static const int halfShift  = 10; /* used for shifting by 10 bits */

static const unsigned long halfBase = 0x0010000UL;
static const unsigned long halfMask = 0x3FFUL;

/* --------------------------------------------------------------------- */
/*
 * Index into the table below with the first byte of a UTF-8 sequence to
 * get the number of trailing bytes that are supposed to follow it.
 * Note that *legal* UTF-8 values can't have 4 or 5-bytes. The table is
 * left as-is for anyone who may want to do such conversion, which was
 * allowed in earlier algorithms.
 */
static const char trailingBytesForUTF8[256] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2, 3,3,3,3,3,3,3,3,4,4,4,4,5,5,5,5
};

/*
 * Magic values subtracted from a buffer value during UTF8 conversion.
 * This table contains as many values as there might be trailing bytes
 * in a UTF-8 sequence.
 */
static const unsigned long offsetsFromUTF8[6] = { 0x00000000UL, 0x00003080UL, 0x000E2080UL, 
                                                  0x03C82080UL, 0xFA082080UL, 0x82082080UL };

/*
 * Once the bits are split out into bytes of UTF-8, this is a mask OR-ed
 * into the first byte, depending on how many bytes follow.  There are
 * as many entries in this table as there are UTF-8 sequence types.
 * (I.e., one byte sequence, two byte... etc.). Remember that sequencs
 * for *legal* UTF-8 will be 4 or fewer bytes total.
 */
static const pdf_utf8 firstByteMark[7] = { 0x00, 0x00, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC };

/* --------------------------------------------------------------------- */

/*
 * Utility routine to tell whether a sequence of bytes is legal UTF-8.
 * This must be called with the length pre-determined by the first byte.
 * If not calling this from ConvertUTF8to*, then the length can be set by:
 *  length = trailingBytesForUTF8[*source]+1;
 * and the sequence is illegal right away if there aren't that many bytes
 * available.
 * If presented with a length > 4, this returns false.  The Unicode
 * definition of UTF-8 goes up to 4-byte sequences.
 */

static bool isLegalUTF8(const pdf_utf8 *source, int length) {
    pdf_utf8 a;
    const pdf_utf8 *srcptr = source+length;
    switch (length) {
    default: return false;
	/* Everything else falls through when "true"... */
    case 4: if ((a = (*--srcptr)) < 0x80 || a > 0xBF) return false;
    case 3: if ((a = (*--srcptr)) < 0x80 || a > 0xBF) return false;
    case 2: if ((a = (*--srcptr)) > 0xBF) return false;

	switch (*source) {
	    /* no fall-through in this inner switch */
	    case 0xE0: if (a < 0xA0) return false; break;
	    case 0xED: if (a > 0x9F) return false; break;
	    case 0xF0: if (a < 0x90) return false; break;
	    case 0xF4: if (a > 0x8F) return false; break;
	    default:   if (a < 0x80) return false;
	}

    case 1: if (*source >= 0x80 && *source < 0xC2) return false;
    }
    if (*source > 0xF4) return false;
    return true;
}

/* --------------------------------------------------------------------- */

/*
 * Exported function to return whether a UTF-8 sequence is legal or not.
 * This is not used here; it's just exported.
 */
bool isLegalUTF8Sequence(const pdf_utf8 *source, const pdf_utf8 *sourceEnd) {
    int length = trailingBytesForUTF8[*source]+1;
    if (source+length > sourceEnd) {
	return false;
    }
    return isLegalUTF8(source, length);
}


long PdfString::ConvertUTF8toUTF16( const pdf_utf8* pszUtf8, pdf_utf16be* pszUtf16, long lLenUtf16 )
{
    return pszUtf8 ? 
        PdfString::ConvertUTF8toUTF16( pszUtf8, strlen( reinterpret_cast<const char*>(pszUtf8) ), pszUtf16, lLenUtf16 ) : 0;
}

long PdfString::ConvertUTF8toUTF16( const pdf_utf8* pszUtf8, long lLenUtf8, 
                                    pdf_utf16be* pszUtf16, long lLenUtf16,
                                    EPdfStringConversion eConversion )
{
    const pdf_utf8* source    = pszUtf8;
    const pdf_utf8* sourceEnd = pszUtf8 + lLenUtf8 + 1; // point after the last element
    pdf_utf16be*    target    = pszUtf16;
    pdf_utf16be*    targetEnd = pszUtf16 + lLenUtf16;

    while (source < sourceEnd) 
    {
	unsigned long ch = 0;
	unsigned short extraBytesToRead = trailingBytesForUTF8[*source];
	if (source + extraBytesToRead >= sourceEnd) {
	    PODOFO_RAISE_ERROR_INFO( ePdfError_InvalidDataType, "The UTF8 string was to short while converting from UTF8 to UTF16." );
	}

	// Do this check whether lenient or strict
	if (! isLegalUTF8(source, extraBytesToRead+1)) {
	    PODOFO_RAISE_ERROR_INFO( ePdfError_InvalidDataType, "The UTF8 string was invalid while from UTF8 to UTF16." );
	}

	/*
	 * The cases all fall through. See "Note A" below.
	 */
	switch (extraBytesToRead) {
	    case 5: ch += *source++; ch <<= 6; /* remember, illegal UTF-8 */
	    case 4: ch += *source++; ch <<= 6; /* remember, illegal UTF-8 */
	    case 3: ch += *source++; ch <<= 6;
	    case 2: ch += *source++; ch <<= 6;
	    case 1: ch += *source++; ch <<= 6;
	    case 0: ch += *source++;
	}
	ch -= offsetsFromUTF8[extraBytesToRead];

	if (target >= targetEnd) {
	    source -= (extraBytesToRead+1); /* Back up source pointer! */
	    PODOFO_RAISE_ERROR( ePdfError_OutOfMemory );
	}

	if (ch <= UNI_MAX_BMP) { /* Target is a character <= 0xFFFF */
	    /* UTF-16 surrogate values are illegal in UTF-32 */
	    if (ch >= UNI_SUR_HIGH_START && ch <= UNI_SUR_LOW_END) {
		if (eConversion == ePdfStringConversion_Strict) {
		    source -= (extraBytesToRead+1); /* return to the illegal value itself */
                    PODOFO_RAISE_ERROR( ePdfError_InvalidDataType );
		    break;
		} else {
		    *target++ = UNI_REPLACEMENT_CHAR;
		}
	    } else {
		*target++ = static_cast<pdf_utf16be>(ch); /* normal case */
	    }
	} else if (ch > UNI_MAX_UTF16) {
	    if (eConversion == ePdfStringConversion_Strict) {
                PODOFO_RAISE_ERROR( ePdfError_InvalidDataType );
		source -= (extraBytesToRead+1); /* return to the start */
		break; /* Bail out; shouldn't continue */
	    } else {
		*target++ = UNI_REPLACEMENT_CHAR;
	    }
	} else {
	    /* target is a character in range 0xFFFF - 0x10FFFF. */
	    if (target + 1 >= targetEnd) {
		source -= (extraBytesToRead+1); /* Back up source pointer! */
                PODOFO_RAISE_ERROR( ePdfError_OutOfMemory );
	    }
            
	    ch -= halfBase;
	    *target++ = static_cast<pdf_utf16be>((ch >> halfShift) + UNI_SUR_HIGH_START);
	    *target++ = static_cast<pdf_utf16be>((ch & halfMask) + UNI_SUR_LOW_START);
	}
    }

    // swap to UTF-16be on LE systems
    if( podofo_is_little_endian() )
        PdfString::SwapBytes( reinterpret_cast<char*>(pszUtf16), static_cast<long>(target - pszUtf16) << 1 );

    // return characters written
    return target - pszUtf16;
}

long PdfString::ConvertUTF16toUTF8( const pdf_utf16be* pszUtf16, pdf_utf8* pszUtf8, long lLenUtf8 )
{
    long               lLen      = 0;
    const pdf_utf16be* pszStart = pszUtf16;

    while( *pszStart )
        ++lLen;

    return ConvertUTF16toUTF8( pszUtf16, lLen, pszUtf8, lLenUtf8 );
}

long PdfString::ConvertUTF16toUTF8( const pdf_utf16be* pszUtf16, long lLenUtf16, 
                                    pdf_utf8* pszUtf8, long lLenUtf8, 
                                    EPdfStringConversion eConversion  )
{
    bool               bOwnBuf   = false;
    const pdf_utf16be* source    = pszUtf16;
    const pdf_utf16be* sourceEnd = pszUtf16 + lLenUtf16 + 1; // point after the last element
    
    pdf_utf8* target    = pszUtf8;
    pdf_utf8* targetEnd = pszUtf8 + lLenUtf8;

    // swap to UTF-16be on LE systems
    if( podofo_is_little_endian() )
    {
        bOwnBuf = true;
        source  = new pdf_utf16be[lLenUtf16];
        if( !source )
        {
            PODOFO_RAISE_ERROR( ePdfError_OutOfMemory );
        }

        memcpy( const_cast<pdf_utf16be*>(source), pszUtf16, lLenUtf16 * sizeof(pdf_utf16be) );

        PdfString::SwapBytes( reinterpret_cast<char*>(const_cast<pdf_utf16be*>(source)), lLenUtf16 * sizeof(pdf_utf16be) );
        pszUtf16  = source;
        sourceEnd = pszUtf16 + lLenUtf16 + 1; // point after the last element
    }

    try {
        while (source < sourceEnd) {
            unsigned long  ch;
            unsigned short bytesToWrite = 0;
            const unsigned long byteMask = 0xBF;
            const unsigned long byteMark = 0x80; 
            const pdf_utf16be* oldSource = source; /* In case we have to back up because of target overflow. */
            ch = *source++;

            /* If we have a surrogate pair, convert to UTF32 first. */
            if (ch >= UNI_SUR_HIGH_START && ch <= UNI_SUR_HIGH_END) {
                /* If the 16 bits following the high surrogate are in the source buffer... */
                if (source < sourceEnd) {
                    unsigned long ch2 = *source;
                    /* If it's a low surrogate, convert to UTF32. */
                    if (ch2 >= UNI_SUR_LOW_START && ch2 <= UNI_SUR_LOW_END) {
                        ch = ((ch - UNI_SUR_HIGH_START) << halfShift)
                            + (ch2 - UNI_SUR_LOW_START) + halfBase;
                        ++source;
                    } else if (eConversion == ePdfStringConversion_Strict) { /* it's an unpaired high surrogate */
                        --source; /* return to the illegal value itself */
                        PODOFO_RAISE_ERROR( ePdfError_InvalidDataType );
                        break;
                    }
                } else { /* We don't have the 16 bits following the high surrogate. */
                    --source; /* return to the high surrogate */
                    PODOFO_RAISE_ERROR( ePdfError_OutOfMemory );
                    break;
                }
            } else if (eConversion == ePdfStringConversion_Strict) {
                /* UTF-16 surrogate values are illegal in UTF-32 */
                if (ch >= UNI_SUR_LOW_START && ch <= UNI_SUR_LOW_END) {
                    --source; /* return to the illegal value itself */
                    PODOFO_RAISE_ERROR( ePdfError_InvalidDataType );
                    break;
                }
            }
            /* Figure out how many bytes the result will require */
            if (ch < static_cast<unsigned long>(0x80)) {	     
                bytesToWrite = 1;
            } else if (ch < static_cast<unsigned long>(0x800)) {     
                bytesToWrite = 2;
            } else if (ch < static_cast<unsigned long>(0x10000)) {   
                bytesToWrite = 3;
            } else if (ch < static_cast<unsigned long>(0x110000)) {  
                bytesToWrite = 4;
            } else {			    
                bytesToWrite = 3;
                ch = UNI_REPLACEMENT_CHAR;
            }

            target += bytesToWrite;
            if (target > targetEnd) {
                source = oldSource; /* Back up source pointer! */
                target -= bytesToWrite; 
                PODOFO_RAISE_ERROR( ePdfError_OutOfMemory );
                break;
            }
        
            switch (bytesToWrite) { /* note: everything falls through. */
                case 4: *--target = static_cast<pdf_utf8>((ch | byteMark) & byteMask); ch >>= 6;
                case 3: *--target = static_cast<pdf_utf8>((ch | byteMark) & byteMask); ch >>= 6;
                case 2: *--target = static_cast<pdf_utf8>((ch | byteMark) & byteMask); ch >>= 6;
                case 1: *--target = static_cast<pdf_utf8>(ch | firstByteMark[bytesToWrite]);
            }
            target += bytesToWrite;
        }
    }
    catch( const PdfError & e ) 
    {
        if( bOwnBuf )
            delete[] const_cast<pdf_utf16be *>(pszUtf16);

        throw e;
    }

    if( bOwnBuf )
        delete[] const_cast<pdf_utf16be *>(pszUtf16);

    // return bytes written
    return target - pszUtf8;
}

/* ---------------------------------------------------------------------

    Note A.
    The fall-through switches in UTF-8 reading code save a
    temp variable, some decrements & conditionals.  The switches
    are equivalent to the following loop:
	{
	    int tmpBytesToRead = extraBytesToRead+1;
	    do {
		ch += *source++;
		--tmpBytesToRead;
		if (tmpBytesToRead) ch <<= 6;
	    } while (tmpBytesToRead > 0);
	}
    In UTF-8 writing code, the switches on "bytesToWrite" are
    similarly unrolled loops.

   --------------------------------------------------------------------- */


};


