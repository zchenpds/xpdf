
#ifndef _PDF_FONT_H_
#define _PDF_FONT_H_

#include "PdfDefines.h"
#include "PdfName.h"
#include "PdfElement.h"

namespace PoDoFo {

class PdfFontMetrics;
class PdfObject;
class PdfPage;
class PdfWriter;

/** Before you can draw text on a PDF document, you have to create 
 *  a font object first. You can reuse this font object as often 
 *  as you want.
 *  You will use PdfSimpleWriter::CreateFont most of the time
 *  to create a new font object.
 */
class PODOFO_API PdfFont : public PdfElement {
 public:
    /** Create a new PdfFont object which will introduce itself
     *  automatically to every page object it is used on.
     *
     *  The font has a default font size of 12.0pt.
     *
     *  \param pMetrics pointer to a font metrics object. The font in the PDF
     *         file will match this fontmetrics object. The metrics object is 
     *         deleted along with the font.
     *  \param bEmbed specifies whether this font should be embedded in the PDF file.
     *         Embedding fonts is usually a good idea.
     *  \param pParent parent of the font object
     *  
     */
    PdfFont( PdfFontMetrics* pMetrics, bool bEmbed, PdfVecObjects* pParent );
    virtual ~PdfFont();

    /** Set the font size before drawing with this font.
     *  \param fSize font size in points
     */
    void SetFontSize( float fSize );

    /** Retrieve the current font size of this font object
     *  \returns the current font size
     */
    inline float GetFontSize() const;

    /** Set the underlined property of the font
     *  \param bUnder if true any text drawn with this font
     *                by a PdfPainter will be underlined.
     *  Default is false
     */
    inline void SetUnderlined( bool bUnder );

    /** \returns true if the font is underlined
     */
    inline bool IsUnderlined() const;

    /** Returns the identifier of this font how it is known
     *  in the pages resource dictionary.
     *  \returns PdfName containing the identifier (e.g. /Ft13)
     */
    inline const PdfName & GetIdentifier() const;

    /** Returns a handle to the fontmetrics object of this font.
     *  This can be used for size calculations of text strings when
     *  drawn using this font.
     *  \returns a handle to the font metrics object
     */
    inline const PdfFontMetrics* GetFontMetrics() const;

 private:
    /** Embed the font file directly into the PDF file.
     *  \param pDescriptor font descriptor object
     */
    void EmbedFont( PdfObject* pDescriptor );

    /** Embed the font file directly into the PDF file.
     *
     *  The font file is a true type file.
     *
     *  \param pDescriptor font descriptor object
     */
    void EmbedTrueTypeFont( PdfObject* pDescriptor ); 

    /** Embed the font file directly into the PDF file.
     *
     *  The font file is a true type file.
     *
     *  \param pDescriptor font descriptor object
     */
    void EmbedType1Font( PdfObject* pDescriptor ); 

    /** Initialize the object
     *  \param bEmbed if true the font will be embeded into the PDF 
     */
    void Init( bool bEmbed );

 private: 
    float m_fFontSize;

    bool  m_bBold;
    bool  m_bItalic;
    bool  m_bUnderlined;

    PdfName m_Identifier;
    PdfName m_BaseFont;

    PdfFontMetrics* m_pMetrics;
};

const PdfName & PdfFont::GetIdentifier() const
{
    return m_Identifier;
}

float PdfFont::GetFontSize() const
{
    return m_fFontSize;
}

const PdfFontMetrics* PdfFont::GetFontMetrics() const
{
    return m_pMetrics;
}

void PdfFont::SetUnderlined( bool bUnder )
{
    m_bUnderlined = bUnder;
}

bool PdfFont::IsUnderlined() const
{
    return m_bUnderlined;
}

};

#endif // _PDF_FONT_H_

