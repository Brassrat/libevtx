/*
 * The internal definitions
 *
 * Copyright (c) 2011-2012, Joachim Metz <jbmetz@users.sourceforge.net>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBEVTX_INTERNAL_DEFINITIONS_H )
#define _LIBEVTX_INTERNAL_DEFINITIONS_H

#include <common.h>
#include <byte_stream.h>

#define LIBEVTX_ENDIAN_BIG				_BYTE_STREAM_ENDIAN_BIG
#define LIBEVTX_ENDIAN_LITTLE				_BYTE_STREAM_ENDIAN_LITTLE

/* Define HAVE_LOCAL_LIBEVTX for local use of libevtx
 */
#if !defined( HAVE_LOCAL_LIBEVTX )
#include <libevtx/definitions.h>

/* The definitions in <libevtx/definitions.h> are copied here
 * for local use of libevtx
 */
#else
#define LIBEVTX_VERSION						20120310

/* The version string
 */
#define LIBEVTX_VERSION_STRING					"20120310"

/* The access flags definitions
 * bit 1        set to 1 for read access
 * bit 2        set to 1 for write access
 * bit 3-8      not used
 */
enum LIBEVTX_ACCESS_FLAGS
{
	LIBEVTX_ACCESS_FLAG_READ				= 0x01,
/* Reserved: not supported yet */
	LIBEVTX_ACCESS_FLAG_WRITE				= 0x02
};

/* The file access macros
 */
#define LIBEVTX_OPEN_READ					( LIBEVTX_ACCESS_FLAG_READ )
/* Reserved: not supported yet */
#define LIBEVTX_OPEN_WRITE					( LIBEVTX_ACCESS_FLAG_WRITE )
/* Reserved: not supported yet */
#define LIBEVTX_OPEN_READ_WRITE					( LIBEVTX_ACCESS_FLAG_READ | LIBEVTX_ACCESS_FLAG_WRITE )

#endif /* !defined( HAVE_LOCAL_LIBEVTX ) */

/* The file flags definitions
 */
enum LIBEVTX_FILE_FLAGS
{
	/* The file is corrupted
	 */
	LIBEVTX_FILE_FLAG_CORRUPTED				= 0x01,
};

/* The binary XML token definitions
 */
enum LIBEVTX_BINARY_XML_TOKENS
{
	LIBEVTX_BINARY_XML_TOKEN_END_OF_FILE			= 0x00,
	LIBEVTX_BINARY_XML_TOKEN_OPEN_START_ELEMENT_TAG		= 0x01,
	LIBEVTX_BINARY_XML_TOKEN_CLOSE_START_ELEMENT_TAG	= 0x02,
	LIBEVTX_BINARY_XML_TOKEN_CLOSE_EMPTY_ELEMENT_TAG	= 0x03,
	LIBEVTX_BINARY_XML_TOKEN_END_ELEMENT_TAG		= 0x04,
	LIBEVTX_BINARY_XML_TOKEN_VALUE				= 0x05,
	LIBEVTX_BINARY_XML_TOKEN_ATTRIBUTE			= 0x06,
	LIBEVTX_BINARY_XML_TOKEN_CDATA_SECTION			= 0x07,
	LIBEVTX_BINARY_XML_TOKEN_CHARACTER_REFERENCE		= 0x08,
	LIBEVTX_BINARY_XML_TOKEN_ENTITY_REFERENCE		= 0x09,
	LIBEVTX_BINARY_XML_TOKEN_PI_TARGET			= 0x0a,
	LIBEVTX_BINARY_XML_TOKEN_PI_DATA			= 0x0b,
	LIBEVTX_BINARY_XML_TOKEN_TEMPLATE_INSTANCE		= 0x0c,
	LIBEVTX_BINARY_XML_TOKEN_NORMAL_SUBSTITUTION		= 0x0d,
	LIBEVTX_BINARY_XML_TOKEN_OPTIONAL_SUBSTITUTION		= 0x0e,
	LIBEVTX_BINARY_XML_TOKEN_REPEATED_SUBSTITUTION		= 0x0f
};

/* The maximum number of cache entries defintions
 */
#define LIBEVTX_MAXIMUM_CACHE_ENTRIES_CHUNKS			64

#endif
