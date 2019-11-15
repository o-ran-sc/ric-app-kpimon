/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-X2-IEs"
 * 	found in "../../asn_defs/asn1/e2sm-gNB-X2-release-1-v041.asn.txt"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "InterfaceMessageType.h"

asn_TYPE_member_t asn_MBR_InterfaceMessageType_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterfaceMessageType, procedureCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProcedureCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"procedureCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterfaceMessageType, typeOfMessage),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TypeOfMessage,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"typeOfMessage"
		},
};
static const ber_tlv_tag_t asn_DEF_InterfaceMessageType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InterfaceMessageType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* procedureCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* typeOfMessage */
};
asn_SEQUENCE_specifics_t asn_SPC_InterfaceMessageType_specs_1 = {
	sizeof(struct InterfaceMessageType),
	offsetof(struct InterfaceMessageType, _asn_ctx),
	asn_MAP_InterfaceMessageType_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InterfaceMessageType = {
	"InterfaceMessageType",
	"InterfaceMessageType",
	&asn_OP_SEQUENCE,
	asn_DEF_InterfaceMessageType_tags_1,
	sizeof(asn_DEF_InterfaceMessageType_tags_1)
		/sizeof(asn_DEF_InterfaceMessageType_tags_1[0]), /* 1 */
	asn_DEF_InterfaceMessageType_tags_1,	/* Same as above */
	sizeof(asn_DEF_InterfaceMessageType_tags_1)
		/sizeof(asn_DEF_InterfaceMessageType_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_InterfaceMessageType_1,
	2,	/* Elements count */
	&asn_SPC_InterfaceMessageType_specs_1	/* Additional specs */
};

