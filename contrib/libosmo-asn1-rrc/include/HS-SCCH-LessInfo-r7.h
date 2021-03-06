/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_HS_SCCH_LessInfo_r7_H_
#define	_HS_SCCH_LessInfo_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "HS-SCCH-Less-NewOperation.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HS_SCCH_LessInfo_r7__hs_scchLessOperation_PR {
	HS_SCCH_LessInfo_r7__hs_scchLessOperation_PR_NOTHING,	/* No components present */
	HS_SCCH_LessInfo_r7__hs_scchLessOperation_PR_continue,
	HS_SCCH_LessInfo_r7__hs_scchLessOperation_PR_newOperation
} HS_SCCH_LessInfo_r7__hs_scchLessOperation_PR;

/* HS-SCCH-LessInfo-r7 */
typedef struct HS_SCCH_LessInfo_r7 {
	struct HS_SCCH_LessInfo_r7__hs_scchLessOperation {
		HS_SCCH_LessInfo_r7__hs_scchLessOperation_PR present;
		union HS_SCCH_LessInfo_r7__hs_scchLessOperation_u {
			NULL_t	 Continue;
			HS_SCCH_Less_NewOperation_t	 newOperation;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} hs_scchLessOperation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HS_SCCH_LessInfo_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HS_SCCH_LessInfo_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _HS_SCCH_LessInfo_r7_H_ */
#include <asn_internal.h>
