/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "HS-SICH-ReferenceSignalInfoList.h"

static int
memb_midambleConfiguration_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_midambleShift_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_timeSlot_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 5)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_midambleConfiguration_constr_3 = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_midambleShift_constr_4 = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_timeSlot_constr_5 = {
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (1..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_HS_SICH_ReferenceSignalInfoList_constr_1 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_ReferenceSignalInfoList__Member, midambleConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_midambleConfiguration_constraint_2,
		&asn_PER_memb_midambleConfiguration_constr_3,
		0,
		"midambleConfiguration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_ReferenceSignalInfoList__Member, midambleShift),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_midambleShift_constraint_2,
		&asn_PER_memb_midambleShift_constr_4,
		0,
		"midambleShift"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_ReferenceSignalInfoList__Member, timeSlot),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_timeSlot_constraint_2,
		&asn_PER_memb_timeSlot_constr_5,
		0,
		"timeSlot"
		},
};
static ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* midambleConfiguration at 9192 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* midambleShift at 9193 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* timeSlot at 9194 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct HS_SICH_ReferenceSignalInfoList__Member),
	offsetof(struct HS_SICH_ReferenceSignalInfoList__Member, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
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
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Member_2,
	3,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_HS_SICH_ReferenceSignalInfoList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_HS_SICH_ReferenceSignalInfoList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_HS_SICH_ReferenceSignalInfoList_specs_1 = {
	sizeof(struct HS_SICH_ReferenceSignalInfoList),
	offsetof(struct HS_SICH_ReferenceSignalInfoList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_HS_SICH_ReferenceSignalInfoList = {
	"HS-SICH-ReferenceSignalInfoList",
	"HS-SICH-ReferenceSignalInfoList",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_HS_SICH_ReferenceSignalInfoList_tags_1,
	sizeof(asn_DEF_HS_SICH_ReferenceSignalInfoList_tags_1)
		/sizeof(asn_DEF_HS_SICH_ReferenceSignalInfoList_tags_1[0]), /* 1 */
	asn_DEF_HS_SICH_ReferenceSignalInfoList_tags_1,	/* Same as above */
	sizeof(asn_DEF_HS_SICH_ReferenceSignalInfoList_tags_1)
		/sizeof(asn_DEF_HS_SICH_ReferenceSignalInfoList_tags_1[0]), /* 1 */
	&asn_PER_type_HS_SICH_ReferenceSignalInfoList_constr_1,
	asn_MBR_HS_SICH_ReferenceSignalInfoList_1,
	1,	/* Single element */
	&asn_SPC_HS_SICH_ReferenceSignalInfoList_specs_1	/* Additional specs */
};
