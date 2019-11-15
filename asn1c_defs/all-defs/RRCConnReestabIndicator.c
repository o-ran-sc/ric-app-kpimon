/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "RRCConnReestabIndicator.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_RRCConnReestabIndicator_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RRCConnReestabIndicator_value2enum_1[] = {
	{ 0,	22,	"reconfigurationFailure" },
	{ 1,	15,	"handoverFailure" },
	{ 2,	12,	"otherFailure" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_RRCConnReestabIndicator_enum2value_1[] = {
	1,	/* handoverFailure(1) */
	2,	/* otherFailure(2) */
	0	/* reconfigurationFailure(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_RRCConnReestabIndicator_specs_1 = {
	asn_MAP_RRCConnReestabIndicator_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_RRCConnReestabIndicator_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRCConnReestabIndicator_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RRCConnReestabIndicator = {
	"RRCConnReestabIndicator",
	"RRCConnReestabIndicator",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRCConnReestabIndicator_tags_1,
	sizeof(asn_DEF_RRCConnReestabIndicator_tags_1)
		/sizeof(asn_DEF_RRCConnReestabIndicator_tags_1[0]), /* 1 */
	asn_DEF_RRCConnReestabIndicator_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnReestabIndicator_tags_1)
		/sizeof(asn_DEF_RRCConnReestabIndicator_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_RRCConnReestabIndicator_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRCConnReestabIndicator_specs_1	/* Additional specs */
};

