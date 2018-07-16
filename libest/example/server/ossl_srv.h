/*------------------------------------------------------------------
 * ossl_srv.h - Entry point definitions into the OpenSSL
 *              interface for EST server operations. 
 *
 * November, 2012
 *
 * Copyright (c) 2012 by cisco Systems, Inc.
 * All rights reserved.
 *------------------------------------------------------------------
 */
#ifndef HEADER_OSSL_SRV_H 
#define HEADER_OSSL_SRV_H 

BIO * ossl_simple_enroll(unsigned char *p10buf, int p10len);
/* ISARA: BEGIN */
int ossl_preload_alt_key();
void ossl_free_preloaded_alt_key();
/* ISARA: END */

#endif
