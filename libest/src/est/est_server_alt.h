/** @file est_server_alt.h
 *
 * Isara Corporation Quantum Safe EST Proprietary Software License
 * Statement
 *
 * LICENSE AGREEMENT: The Product(s) that reference this license include
 * embedded proprietary software and software “plug-ins” in source code or
 * object code or both (the “Software”) and accompanying materials (the
 * “Documentation”) that are subject to the license terms and restrictions
 * described below (the “License"). If you do not agree to the License
 * terms, do not use the Product, notify Isara Corporation (“Isara”) by
 * electronic mail at sales@isara.com and erase any copies of the Product
 * in your possession. If you are entering into this License on behalf of
 * a company or other legal entity, you represent that you have the right
 * to bind that entity to all terms, and “you” refers both to you
 * personally and such entity.
 *
 * USE AND DISTRIBUTION: You may use the Software only in the form and in
 * the Product(s) delivered to you for the purposes of integration,
 * development and testing with your own products and/or as part of a
 * monitoring and/or control group beta test with third parties that agree
 * in writing to be bound by the terms of this License.
 *
 * ADDITIONAL RESTRICTIONS: You shall not use, modify, reproduce, reverse
 * engineer, disassemble, decompile or otherwise attempt to derive source
 * code from the Software (except to the extent that such limitations may
 * not be prohibited by law), sublicense, or distribute the Software or
 * Documentation other than as permitted by this License. You shall not
 * remove any proprietary notices, labels or marks on the Product(s) “ZIP
 * file”, Software or Documentation. No license is granted to use or
 * reproduce any Isara trademarks.
 *
 * OWNERSHIP AND NOTICE: Except for the limited rights granted above,
 * Isara and its suppliers retain all right, title and interest in and to
 * the Software and Documentation, including copyrights, patents, trade
 * secrets and other proprietary rights. Certain components of the
 * Software that are subject to open source and third party licenses, the
 * terms and conditions of which can found at https://github.com/cisco and
 * select the applicable hash-sigs or libest license filed on the Github
 * repository. If you require additional guidance, notify sales@isara.com
 * for assistance. As a condition of the License, you agree to comply with
 * all of the foregoing open source and third party license terms. Unless
 * required by applicable law, such components are provided on an ‘AS IS’
 * BASIS, WITHOUT EXPRESS OR IMPLIED WARRANTIES OR CONDITIONS OF ANY KIND.
 *
 * WARRANTY DISCLAIMER: THE SOFTWARE AND DOCUMENTATION ARE PROVIDED TO YOU
 * "AS IS", AND YOU ASSUME THE ENTIRE RISK OF THEIR USE. ISARA AND ITS
 * SUPPLIERS MAKES NO WARRANTIES OR CONDITIONS, EXPRESS, IMPLIED,
 * STATUTORY OR IN ANY COMMUNICATION WITH YOU, AND ISARA CORPORATION
 * EXPRESSLY DISCLAIMS ANY IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT WITH RESPECT TO THE
 * SOFTWARE (INCLUDING ANY MODIFICATIONS MADE THERETO BY ANY PERSON
 * WHETHER OR NOT AN EMPLOYEE OR CONTRACTOR OF ISARA) OR DOCUMENTATION
 * PROVIDED TO YOU. ISARA EMPLOYEES AND OTHER PERSONNEL ARE NOT AUTHORIZED
 * TO MAKE ANY WARRANTY THAT IS INCONSISTENT WITH THIS DISCLAIMER.
 *
 * LIMITATION OF LIABILITY: IN NO EVENT WILL ISARA OR ITS SUPPLIERS AND
 * SUPPLIERS BE LIABLE FOR LOSS OF DATA, LOST PROFITS, COST OF COVER, OR
 * OTHER SPECIAL, INCIDENTAL, PUNITIVE, CONSEQUENTIAL, OR INDIRECT DAMAGES
 * ARISING FROM USE OF THE SOFTWARE OR DOCUMENTATION, HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, AND REGARDLESS OF WHETHER ISARA OR ITS
 * SUPPLIERS HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  ISARA
 * AND ITS SUPPLIERS BEAR NO LIABILITY FOR ANY PROGRAMS OR DATA STORED IN
 * OR USED WITH THIS PRODUCT, INCLUDING THE COST OF RECOVERING SUCH
 * PROGRAMS OR DATA.
 *
 * Copyright (c) 2017 ISARA Corporation. All Rights Reserved. This file
 * contains Proprietary information of Isara Corporation. Unauthorized
 * copying or use of this file via any medium is strictly prohibited.
 * Written by Daniel Van Geest, daniel.vangeest@isara.com, December,
 * 2017.
 */
#ifndef HEADER_EST_SERVER_ALT_H
#define HEADER_EST_SERVER_ALT_H

#include <openssl/x509.h>

/*
 * These prototypes are private to est_server.c and are
 * not part of the public API.
 */
int est_server_req_check_alt_csr(X509_REQ *req);

#endif
