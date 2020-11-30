/**
 * Copyright (C) 2020 by Will Frank
 *                                                                              
 * This file is part of PROJECT_NAME.                                           
 *                                                                              
 *    PROJECT_NAME is free software: you can redistribute it and/or modify it   
 *    under the terms of the GNU Lesser General Public License as published     
 *    by the Free Software Foundation, either version 3 of the License, or      
 *    (at your option) any later version.                                       
 *                                                                              
 *    PROJECT_NAME is distributed in the hope that it will be useful,           
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of            
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             
 *    GNU Lesser General Public License for more details.                       
 *                                                                              
 *    You should have received a copy of the GNU Lesser General Public          
 *    License along with PROJECT_NAME.                                          
 *    If not, see <http://www.gnu.org/licenses/>.                               
 */

/**
 * @file cpp_template.h
 * @author Will Frank
 * @date 08 Aug 2020
 * @brief File containing C++ template including of doxygen usage for reference.
 *
 * Here typically goes a more extensive explanation of what the header
 * defines. Doxygens tags are words preceeded by either a backslash @\
 * or by an at symbol @@.
 * @see http://www.stack.nl/~dimitri/doxygen/docblocks.html
 * @see http://www.stack.nl/~dimitri/doxygen/commands.html
 */

#ifndef _CPP_HEADER_H
#define _CPP_HEADER_H

#include <system_header1.h>
#include <system_header2.h>

#include "local_header1.h"
#include "local_header2.h"

/**
 * @brief Use brief, otherwise the index won't have a brief explanation.
 *
 * Detailed explanation.
 */
typedef enum Template_enum {
    BOXENUM_FIRST,  /**< Some documentation for first. */
    BOXENUM_SECOND, /**< Some documentation for second. */
    BOXENUM_ETC     /**< Etc. */
} TemplateEnum;

/**
 * @brief Use brief, otherwise the index won't have a brief explanation.
 *
 * Detailed explanation.
 */
typedef struct TemplateStruct_struct {
    int a;    /**< Some documentation for the member BoxStruct#a. */
    int b;    /**< Some documentation for the member BoxStruct#b. */
    double c; /**< Etc. */
} TemplateStruct;

/**
 * @brief Example showing how to document a function with Doxygen.
 *
 * Description of what the function does. This part may refer to the parameters
 * of the function, like @p param1 or @p param2. A word of code can also be
 * inserted like @c this which is equivalent to <tt>this</tt> and can be useful
 * to say that the function returns a @c void or an @c int. If you want to have
 * more than one word in typewriter font, then just use @<tt@>.
 * We can also include text verbatim,
 * @verbatim like this@endverbatim
 * Sometimes it is also convenient to include an example of usage:
 * @code
 * TemplateStruct *out = The_Function_Name(param1, param2);
 * printf("something...\n");
 * @endcode
 * Or,
 * @code{.py}
 * pyval = python_func(arg1, arg2)
 * print pyval
 * @endcode
 * when the language is not the one used in the current source file (but
 * <b>be careful</b> as this may be supported only by recent versions
 * of Doxygen). By the way, <b>this is how you write bold text</b> or,
 * if it is just one word, then you can just do @b this.
 * @param param1 Description of the first parameter of the function.
 * @param param2 The second one, which follows @p param1.
 * @return Describe what the function returns.
 * @see The_Second_Function
 * @see The_Last_One
 * @see http://website/
 * @note Something to note.
 * @warning Warning.
 */
TemplateStruct The_Function_Name(ParamType1 param1, ParamType2 param2);

/**
 * @brief A simple stub function to show how links do work.
 *
 * Links are generated automatically for webpages (like http://www.google.co.uk)
 * and for structures, like TemplateStruct_struct. For typedef-ed types use
 * #TemplateStruct.
 * For functions, automatic links are generated when the parenthesis () follow
 * the name of the function, like The_Function_Name().
 * Alternatively, you can use #The_Function_Name.
 * @return @c NULL is always returned.
 */
void The_Second_Function(void);

/**
 * Brief can be omitted. If you configure Doxygen with
 * <tt>JAVADOC_AUTOBRIEF=YES</tt>, then the first Line of the comment is used
 * instead. In this function this would be as if
 * @verbatim @brief Brief can be omitted. @endverbatim
 * was used instead.
 */
void The_Last_One(void);

#endif /* _CPP_HEADER_H */

