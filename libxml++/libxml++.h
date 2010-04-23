/* libxml++.h
 * libxml++ and this file are copyright (C) 2000 by Ari Johnson, and
 * are covered by the GNU Lesser General Public License, which should be
 * included with libxml++ as the file COPYING.
 */

#ifndef __LIBXMLCPP_H
#define __LIBXMLCPP_H

/** @mainpage libxml++ Reference Manual
 *
 * @section description Description
 *
 * libxml++ is a C++ wrapper for the libxml2 XML parser library. It presents a
 * simple C++-like API that can achieve common tasks with less code.
 *
 * See also the libxml++ website: http://libxmlplusplus.sourceforge.net/
 *
 * @section basics Basic usage
 *
 * Include the libxml++ header:
 * @code
 * #include <libxml++.h>
 * @endcode
 * This includes every header installed by libxml++, so can slow down
 * compilation, but suffices for this simple example. Assuming that your
 * program source file is @c program.cc, compile it with:
 * @code
 * g++ program.cc -o program  `pkg-config --cflags --libs libxml++-2.6`
 * @endcode
 * Alternatively, if using autoconf, use the following in @c configure.ac:
 * @code
 * PKG_CHECK_MODULES([LIBXMLXX], [libxml++-2.6])
 * @endcode
 * Then use the generated @c LIBXMLXX_CFLAGS and @c LIBXMLXX_LIBS variables in
 * the project @c Makefile.am files. For example:
 * @code
 * program_CPPFLAGS = $(LIBXMLXX_CFLAGS)
 * program_LDADD = $(LIBXMLXX_LIBS)
 * @endcode
 */
#include <libxml++/exceptions/internal_error.h>
#include <libxml++/exceptions/parse_error.h>
#include <libxml++/parsers/domparser.h>
#include <libxml++/parsers/saxparser.h>
#include <libxml++/parsers/textreader.h>
#include <libxml++/nodes/node.h>
#include <libxml++/nodes/commentnode.h>
#include <libxml++/nodes/element.h>
#include <libxml++/nodes/entityreference.h>
#include <libxml++/nodes/textnode.h>
#include <libxml++/attribute.h>
#include <libxml++/document.h>
#include <libxml++/validators/validator.h>
#include <libxml++/validators/dtdvalidator.h>
#include <libxml++/validators/schemavalidator.h>

#endif //__LIBXMLCPP_H
