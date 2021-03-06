/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MBMS_L23Configuration_H_
#define	_MBMS_L23Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBMS-SCCPCHIdentity.h"
#include <constr_SEQUENCE.h>
#include "MBMS-CommonCCTrChIdentity.h"
#include "MBMS-TrCHInformation-NeighbList.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_L23Configuration_PR {
	MBMS_L23Configuration_PR_NOTHING,	/* No components present */
	MBMS_L23Configuration_PR_sameAsCurrent,
	MBMS_L23Configuration_PR_different
} MBMS_L23Configuration_PR;

/* Forward declarations */
struct MBMS_MSCH_ConfigurationInfo_r6;

/* MBMS-L23Configuration */
typedef struct MBMS_L23Configuration {
	MBMS_L23Configuration_PR present;
	union MBMS_L23Configuration_u {
		struct MBMS_L23Configuration__sameAsCurrent {
			MBMS_SCCPCHIdentity_t	 currentCell_SCCPCH;
			struct MBMS_MSCH_ConfigurationInfo_r6	*msch_ConfigurationInfo	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} sameAsCurrent;
		struct MBMS_L23Configuration__different {
			MBMS_CommonCCTrChIdentity_t	*transpCh_InfoCommonForAllTrCh	/* OPTIONAL */;
			MBMS_TrCHInformation_NeighbList_t	 transpCHInformation;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} different;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_L23Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_L23Configuration;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBMS-MSCH-ConfigurationInfo-r6.h"

#endif	/* _MBMS_L23Configuration_H_ */
#include <asn_internal.h>
