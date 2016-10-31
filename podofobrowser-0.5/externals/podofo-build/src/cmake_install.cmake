# Install script for directory: /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/zchenpds/podofo")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/podofo" TYPE FILE FILES
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/Pdf3rdPtyForwardDecl.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfAction.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfAcroForm.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfAnnotation.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfArray.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfCanvas.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfContents.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfData.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfDataType.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfDate.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfDefines.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfDestination.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfDictionary.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfDocument.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfElement.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfEncrypt.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfError.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfExtGState.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfField.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfFileSpec.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfFileStream.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfFilter.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfFiltersPrivate.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfFont.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfFontCache.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfFontMetrics.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfHintStream.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfImage.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfImmediateWriter.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfInfo.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfInputDevice.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfInputStream.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfLocale.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfMemStream.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfName.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfNamesTree.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfObject.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfOutlines.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfOutputDevice.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfOutputStream.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfPage.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfPagesTree.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfPainter.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfPainterMM.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfParser.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfParserObject.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfRect.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfRefCountedBuffer.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfRefCountedInputDevice.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfReference.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfStream.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfStreamedDocument.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfString.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfTokenizer.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfVariant.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfVecObjects.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfWriter.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfXObject.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfXRef.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/PdfXRefStream.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/podofo.h"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/src/podofoapi.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpodofo.so.0.5.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpodofo.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/src/libpodofo.so.0.5.0"
    "/home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/src/libpodofo.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpodofo.so.0.5.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpodofo.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_REMOVE
           FILE "${file}")
      IF(CMAKE_INSTALL_DO_STRIP)
        EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "${file}")
      ENDIF(CMAKE_INSTALL_DO_STRIP)
    ENDIF()
  ENDFOREACH()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

