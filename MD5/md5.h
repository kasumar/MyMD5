/* MD5.H - header file for MD5C.C
 */

/* Copyright (C) 1991-2, RSA Data Security, Inc. Created 1991. All
rights reserved.

License to copy and use this software is granted provided that it
is identified as the "RSA Data Security, Inc. MD5 Message-Digest
Algorithm" in all material mentioning or referencing this software
or this function.

License is also granted to make and use derivative works provided
that such works are identified as "derived from the RSA Data
Security, Inc. MD5 Message-Digest Algorithm" in all material
mentioning or referencing the derived work.

RSA Data Security, Inc. makes no representations concerning either
the merchantability of this software or the suitability of this
software for any particular purpose. It is provided "as is"
without express or implied warranty of any kind.

These notices must be retained in any copies of any part of this
documentation and/or software.
*/

//Begin 此部分内容已移至md5.cpp
///* MD5 context. */
//typedef struct {
//    UINT4 state[4];                                   /* state (ABCD) */
//    UINT4 count[2];        /* number of bits, modulo 2^64 (lsb first) */
//    unsigned char buffer[64];                         /* input buffer */
//} MD5_CTX;

//void MD5Init PROTO_LIST ((MD5_CTX *));
//void MD5Update PROTO_LIST
//((MD5_CTX *, unsigned char *, unsigned int));
//void MD5Final PROTO_LIST ((unsigned char [16], MD5_CTX *));
//End


//////////////////////////////////////////////////////////////////////////
#if !defined(_MD5_H_)
#define _MD5_H_

//获取指定文件的MD5值
char* MDFile(const char* filePath);

#endif//!defined(_MD5_H_)
