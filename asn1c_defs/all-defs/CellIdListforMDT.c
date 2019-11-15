/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "CellIdListforMDT.h"

#include "ECGI.h"
asn_per_constraints_t asn_PER_type_CellIdListforMDT_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_CellIdListforMDT_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ECGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_CellIdListforMDT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_CellIdListforMDT_specs_1 = {
	sizeof(struct CellIdListforMDT),
	offsetof(struct CellIdListforMDT, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_CellIdListforMDT = {
	"CellIdListforMDT",
	"CellIdListforMDT",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_CellIdListforMDT_tags_1,
	sizeof(asn_DEF_CellIdListforMDT_tags_1)
		/sizeof(asn_DEF_CellIdListforMDT_tags_1[0]), /* 1 */
	asn_DEF_CellIdListforMDT_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellIdListforMDT_tags_1)
		/sizeof(asn_DEF_CellIdListforMDT_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_CellIdListforMDT_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_CellIdListforMDT_1,
	1,	/* Single element */
	&asn_SPC_CellIdListforMDT_specs_1	/* Additional specs */
};

