/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "AreaScopeOfMDT.h"

#include "CellBasedMDT.h"
#include "TABasedMDT.h"
#include "TAIBasedMDT.h"
asn_per_constraints_t asn_PER_type_AreaScopeOfMDT_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_AreaScopeOfMDT_1[] = {
	{ ATF_POINTER, 0, offsetof(struct AreaScopeOfMDT, choice.cellBased),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellBasedMDT,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellBased"
		},
	{ ATF_POINTER, 0, offsetof(struct AreaScopeOfMDT, choice.tABased),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TABasedMDT,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tABased"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AreaScopeOfMDT, choice.pLMNWide),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pLMNWide"
		},
	{ ATF_POINTER, 0, offsetof(struct AreaScopeOfMDT, choice.tAIBased),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TAIBasedMDT,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tAIBased"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_AreaScopeOfMDT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellBased */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tABased */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pLMNWide */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* tAIBased */
};
asn_CHOICE_specifics_t asn_SPC_AreaScopeOfMDT_specs_1 = {
	sizeof(struct AreaScopeOfMDT),
	offsetof(struct AreaScopeOfMDT, _asn_ctx),
	offsetof(struct AreaScopeOfMDT, present),
	sizeof(((struct AreaScopeOfMDT *)0)->present),
	asn_MAP_AreaScopeOfMDT_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_AreaScopeOfMDT = {
	"AreaScopeOfMDT",
	"AreaScopeOfMDT",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_AreaScopeOfMDT_constr_1, CHOICE_constraint },
	asn_MBR_AreaScopeOfMDT_1,
	4,	/* Elements count */
	&asn_SPC_AreaScopeOfMDT_specs_1	/* Additional specs */
};

