/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "SgNBResourceCoordinationInformation.h"

#include "ProtocolExtensionContainer.h"
static int
memb_uLCoordinationInformation_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 6 && size <= 4400)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_dLCoordinationInformation_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 6 && size <= 4400)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_uLCoordinationInformation_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  13,  13,  6,  4400 }	/* (SIZE(6..4400,...)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_dLCoordinationInformation_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  13,  13,  6,  4400 }	/* (SIZE(6..4400,...)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SgNBResourceCoordinationInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SgNBResourceCoordinationInformation, nR_CGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRCGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nR-CGI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SgNBResourceCoordinationInformation, uLCoordinationInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_uLCoordinationInformation_constr_3,  memb_uLCoordinationInformation_constraint_1 },
		0, 0, /* No default value */
		"uLCoordinationInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct SgNBResourceCoordinationInformation, dLCoordinationInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_dLCoordinationInformation_constr_4,  memb_dLCoordinationInformation_constraint_1 },
		0, 0, /* No default value */
		"dLCoordinationInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct SgNBResourceCoordinationInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_8231P193,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_SgNBResourceCoordinationInformation_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_SgNBResourceCoordinationInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SgNBResourceCoordinationInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nR-CGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uLCoordinationInformation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dLCoordinationInformation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_SgNBResourceCoordinationInformation_specs_1 = {
	sizeof(struct SgNBResourceCoordinationInformation),
	offsetof(struct SgNBResourceCoordinationInformation, _asn_ctx),
	asn_MAP_SgNBResourceCoordinationInformation_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SgNBResourceCoordinationInformation_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SgNBResourceCoordinationInformation = {
	"SgNBResourceCoordinationInformation",
	"SgNBResourceCoordinationInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_SgNBResourceCoordinationInformation_tags_1,
	sizeof(asn_DEF_SgNBResourceCoordinationInformation_tags_1)
		/sizeof(asn_DEF_SgNBResourceCoordinationInformation_tags_1[0]), /* 1 */
	asn_DEF_SgNBResourceCoordinationInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_SgNBResourceCoordinationInformation_tags_1)
		/sizeof(asn_DEF_SgNBResourceCoordinationInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SgNBResourceCoordinationInformation_1,
	4,	/* Elements count */
	&asn_SPC_SgNBResourceCoordinationInformation_specs_1	/* Additional specs */
};

