/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RB_InformationReleaseList_H_
#define	_RB_InformationReleaseList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RB-Identity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RB-InformationReleaseList */
typedef struct RB_InformationReleaseList {
	A_SEQUENCE_OF(RB_Identity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RB_InformationReleaseList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RB_InformationReleaseList;

#ifdef __cplusplus
}
#endif

#endif	/* _RB_InformationReleaseList_H_ */
#include <asn_internal.h>
