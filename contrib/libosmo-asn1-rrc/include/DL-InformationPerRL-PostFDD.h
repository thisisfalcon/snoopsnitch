/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DL_InformationPerRL_PostFDD_H_
#define	_DL_InformationPerRL_PostFDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PrimaryCPICH-Info.h"
#include "DL-DPCH-InfoPerRL-PostFDD.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-InformationPerRL-PostFDD */
typedef struct DL_InformationPerRL_PostFDD {
	PrimaryCPICH_Info_t	 primaryCPICH_Info;
	DL_DPCH_InfoPerRL_PostFDD_t	 dl_DPCH_InfoPerRL;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_InformationPerRL_PostFDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_InformationPerRL_PostFDD;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_InformationPerRL_PostFDD_H_ */
#include <asn_internal.h>
