/*
 * Copyright (c) 2007-2009 Apple Inc. All Rights Reserved.
 * 
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

/*!
	@header SecRandom
	The functions provided in SecRandom.h implement high-level accessors
    to cryptographically secure random numbers.
*/

#ifndef _SECURITY_SECRANDOM_H_
#define _SECURITY_SECRANDOM_H_

#include <Security/SecBase.h>
#include <stdint.h>
#include <sys/types.h>

#if defined(__cplusplus)
extern "C" {
#endif

/*!
    @typedef SecRandomRef
    @abstract Reference to a (psuedo) random number generator.
*/
typedef const struct __SecRandom * SecRandomRef;

/* This is a synonym for NULL, if you'd rather use a named constant.   This
   refers to a cryptographically secure random number generator.  */
extern const SecRandomRef kSecRandomDefault
    __OSX_AVAILABLE_STARTING(__MAC_10_7, __IPHONE_2_0);

/*!
	@function SecRandomCopyBytes
	@abstract Return count random bytes in *bytes, allocated by the caller.
	@result Return 0 on success or -1 if something went wrong, check errno
    to find out the real error.
*/
int SecRandomCopyBytes(SecRandomRef rnd, size_t count, uint8_t *bytes)
    __OSX_AVAILABLE_STARTING(__MAC_10_7, __IPHONE_2_0);

	
#if defined(__cplusplus)
}
#endif

#endif /* !_SECURITY_SECRANDOM_H_ */
