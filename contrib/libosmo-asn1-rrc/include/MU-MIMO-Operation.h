/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MU_MIMO_Operation_H_
#define	_MU_MIMO_Operation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MU_MIMO_Operation {
	MU_MIMO_Operation_uL	= 0,
	MU_MIMO_Operation_dL	= 1,
	MU_MIMO_Operation_uLandDL	= 2,
	MU_MIMO_Operation_spare	= 3
} e_MU_MIMO_Operation;

/* MU-MIMO-Operation */
typedef long	 MU_MIMO_Operation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MU_MIMO_Operation;
asn_struct_free_f MU_MIMO_Operation_free;
asn_struct_print_f MU_MIMO_Operation_print;
asn_constr_check_f MU_MIMO_Operation_constraint;
ber_type_decoder_f MU_MIMO_Operation_decode_ber;
der_type_encoder_f MU_MIMO_Operation_encode_der;
xer_type_decoder_f MU_MIMO_Operation_decode_xer;
xer_type_encoder_f MU_MIMO_Operation_encode_xer;
per_type_decoder_f MU_MIMO_Operation_decode_uper;
per_type_encoder_f MU_MIMO_Operation_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MU_MIMO_Operation_H_ */
#include <asn_internal.h>