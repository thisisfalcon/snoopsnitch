/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "TransportFormatCombinationControl.h"

static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_3 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tdd_5[] = {
	{ ATF_POINTER, 1, offsetof(struct TransportFormatCombinationControl__modeSpecificInfo__tdd, tfcs_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TFCS_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tfcs-ID"
		},
};
static int asn_MAP_tdd_oms_5[] = { 0 };
static ber_tlv_tag_t asn_DEF_tdd_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tfcs-ID at 10290 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_5 = {
	sizeof(struct TransportFormatCombinationControl__modeSpecificInfo__tdd),
	offsetof(struct TransportFormatCombinationControl__modeSpecificInfo__tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_5,
	1,	/* Count of tags in the map */
	asn_MAP_tdd_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_5 = {
	"tdd",
	"tdd",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_tdd_tags_5,
	sizeof(asn_DEF_tdd_tags_5)
		/sizeof(asn_DEF_tdd_tags_5[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_5,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_5)
		/sizeof(asn_DEF_tdd_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd_5,
	1,	/* Elements count */
	&asn_SPC_tdd_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TransportFormatCombinationControl__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TransportFormatCombinationControl__modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 10288 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 10290 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_3 = {
	sizeof(struct TransportFormatCombinationControl__modeSpecificInfo),
	offsetof(struct TransportFormatCombinationControl__modeSpecificInfo, _asn_ctx),
	offsetof(struct TransportFormatCombinationControl__modeSpecificInfo, present),
	sizeof(((struct TransportFormatCombinationControl__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_3 = {
	"modeSpecificInfo",
	"modeSpecificInfo",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_modeSpecificInfo_constr_3,
	asn_MBR_modeSpecificInfo_3,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_3	/* Additional specs */
};

static ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_14 = {
	sizeof(struct TransportFormatCombinationControl__laterNonCriticalExtensions__v820NonCriticalExtensions__nonCriticalExtensions),
	offsetof(struct TransportFormatCombinationControl__laterNonCriticalExtensions__v820NonCriticalExtensions__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_14 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_nonCriticalExtensions_tags_14,
	sizeof(asn_DEF_nonCriticalExtensions_tags_14)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_14[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_14,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_14)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v820NonCriticalExtensions_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TransportFormatCombinationControl__laterNonCriticalExtensions__v820NonCriticalExtensions, transportformatcombinationcontrol_v820ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportFormatCombinationControl_v820ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transportformatcombinationcontrol-v820ext"
		},
	{ ATF_POINTER, 1, offsetof(struct TransportFormatCombinationControl__laterNonCriticalExtensions__v820NonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static int asn_MAP_v820NonCriticalExtensions_oms_12[] = { 1 };
static ber_tlv_tag_t asn_DEF_v820NonCriticalExtensions_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v820NonCriticalExtensions_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transportformatcombinationcontrol-v820ext at 10301 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions at 10302 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v820NonCriticalExtensions_specs_12 = {
	sizeof(struct TransportFormatCombinationControl__laterNonCriticalExtensions__v820NonCriticalExtensions),
	offsetof(struct TransportFormatCombinationControl__laterNonCriticalExtensions__v820NonCriticalExtensions, _asn_ctx),
	asn_MAP_v820NonCriticalExtensions_tag2el_12,
	2,	/* Count of tags in the map */
	asn_MAP_v820NonCriticalExtensions_oms_12,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v820NonCriticalExtensions_12 = {
	"v820NonCriticalExtensions",
	"v820NonCriticalExtensions",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_v820NonCriticalExtensions_tags_12,
	sizeof(asn_DEF_v820NonCriticalExtensions_tags_12)
		/sizeof(asn_DEF_v820NonCriticalExtensions_tags_12[0]) - 1, /* 1 */
	asn_DEF_v820NonCriticalExtensions_tags_12,	/* Same as above */
	sizeof(asn_DEF_v820NonCriticalExtensions_tags_12)
		/sizeof(asn_DEF_v820NonCriticalExtensions_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v820NonCriticalExtensions_12,
	2,	/* Elements count */
	&asn_SPC_v820NonCriticalExtensions_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_laterNonCriticalExtensions_10[] = {
	{ ATF_POINTER, 2, offsetof(struct TransportFormatCombinationControl__laterNonCriticalExtensions, transportFormatCombinationControl_r3_add_ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transportFormatCombinationControl-r3-add-ext"
		},
	{ ATF_POINTER, 1, offsetof(struct TransportFormatCombinationControl__laterNonCriticalExtensions, v820NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v820NonCriticalExtensions_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v820NonCriticalExtensions"
		},
};
static int asn_MAP_laterNonCriticalExtensions_oms_10[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_laterNonCriticalExtensions_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_laterNonCriticalExtensions_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transportFormatCombinationControl-r3-add-ext at 10298 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v820NonCriticalExtensions at 10301 */
};
static asn_SEQUENCE_specifics_t asn_SPC_laterNonCriticalExtensions_specs_10 = {
	sizeof(struct TransportFormatCombinationControl__laterNonCriticalExtensions),
	offsetof(struct TransportFormatCombinationControl__laterNonCriticalExtensions, _asn_ctx),
	asn_MAP_laterNonCriticalExtensions_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_laterNonCriticalExtensions_oms_10,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_laterNonCriticalExtensions_10 = {
	"laterNonCriticalExtensions",
	"laterNonCriticalExtensions",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_laterNonCriticalExtensions_tags_10,
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_10)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_10[0]) - 1, /* 1 */
	asn_DEF_laterNonCriticalExtensions_tags_10,	/* Same as above */
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_10)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_laterNonCriticalExtensions_10,
	2,	/* Elements count */
	&asn_SPC_laterNonCriticalExtensions_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_TransportFormatCombinationControl_1[] = {
	{ ATF_POINTER, 1, offsetof(struct TransportFormatCombinationControl, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-TransactionIdentifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TransportFormatCombinationControl, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TransportFormatCombinationControl, dpch_TFCS_InUplink),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TFC_Subset,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dpch-TFCS-InUplink"
		},
	{ ATF_POINTER, 3, offsetof(struct TransportFormatCombinationControl, activationTimeForTFCSubset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activationTimeForTFCSubset"
		},
	{ ATF_POINTER, 2, offsetof(struct TransportFormatCombinationControl, tfc_ControlDuration),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TFC_ControlDuration,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tfc-ControlDuration"
		},
	{ ATF_POINTER, 1, offsetof(struct TransportFormatCombinationControl, laterNonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_laterNonCriticalExtensions_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"laterNonCriticalExtensions"
		},
};
static int asn_MAP_TransportFormatCombinationControl_oms_1[] = { 0, 3, 4, 5 };
static ber_tlv_tag_t asn_DEF_TransportFormatCombinationControl_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_TransportFormatCombinationControl_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-TransactionIdentifier at 10286 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* modeSpecificInfo at 10288 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dpch-TFCS-InUplink at 10293 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* activationTimeForTFCSubset at 10294 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* tfc-ControlDuration at 10295 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* laterNonCriticalExtensions at 10298 */
};
static asn_SEQUENCE_specifics_t asn_SPC_TransportFormatCombinationControl_specs_1 = {
	sizeof(struct TransportFormatCombinationControl),
	offsetof(struct TransportFormatCombinationControl, _asn_ctx),
	asn_MAP_TransportFormatCombinationControl_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_TransportFormatCombinationControl_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_TransportFormatCombinationControl = {
	"TransportFormatCombinationControl",
	"TransportFormatCombinationControl",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_TransportFormatCombinationControl_tags_1,
	sizeof(asn_DEF_TransportFormatCombinationControl_tags_1)
		/sizeof(asn_DEF_TransportFormatCombinationControl_tags_1[0]), /* 1 */
	asn_DEF_TransportFormatCombinationControl_tags_1,	/* Same as above */
	sizeof(asn_DEF_TransportFormatCombinationControl_tags_1)
		/sizeof(asn_DEF_TransportFormatCombinationControl_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_TransportFormatCombinationControl_1,
	6,	/* Elements count */
	&asn_SPC_TransportFormatCombinationControl_specs_1	/* Additional specs */
};
