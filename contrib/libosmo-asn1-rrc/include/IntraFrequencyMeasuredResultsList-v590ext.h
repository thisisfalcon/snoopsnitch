/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_IntraFrequencyMeasuredResultsList_v590ext_H_
#define	_IntraFrequencyMeasuredResultsList_v590ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DeltaRSCPPerCell;

/* IntraFrequencyMeasuredResultsList-v590ext */
typedef struct IntraFrequencyMeasuredResultsList_v590ext {
	A_SEQUENCE_OF(struct DeltaRSCPPerCell) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFrequencyMeasuredResultsList_v590ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFrequencyMeasuredResultsList_v590ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DeltaRSCPPerCell.h"

#endif	/* _IntraFrequencyMeasuredResultsList_v590ext_H_ */
#include <asn_internal.h>