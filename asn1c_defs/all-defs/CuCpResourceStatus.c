/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "KPIMonitoringModule"
 * 	found in "KPIMonitoring.asn1"
 * 	`asn1c -gen-PER`
 */

#include "CuCpResourceStatus.h"

asn_TYPE_member_t asn_MBR_CuCpResourceStatus_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CuCpResourceStatus, bhca),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bhca"
		},
	{ ATF_POINTER, 1, offsetof(struct CuCpResourceStatus, numberOfUEs),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberOfUEs"
		},
};
static const int asn_MAP_CuCpResourceStatus_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_CuCpResourceStatus_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CuCpResourceStatus_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 1 }, /* bhca */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 0 } /* numberOfUEs */
};
asn_SEQUENCE_specifics_t asn_SPC_CuCpResourceStatus_specs_1 = {
	sizeof(struct CuCpResourceStatus),
	offsetof(struct CuCpResourceStatus, _asn_ctx),
	asn_MAP_CuCpResourceStatus_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CuCpResourceStatus_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CuCpResourceStatus = {
	"CuCpResourceStatus",
	"CuCpResourceStatus",
	&asn_OP_SEQUENCE,
	asn_DEF_CuCpResourceStatus_tags_1,
	sizeof(asn_DEF_CuCpResourceStatus_tags_1)
		/sizeof(asn_DEF_CuCpResourceStatus_tags_1[0]), /* 1 */
	asn_DEF_CuCpResourceStatus_tags_1,	/* Same as above */
	sizeof(asn_DEF_CuCpResourceStatus_tags_1)
		/sizeof(asn_DEF_CuCpResourceStatus_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CuCpResourceStatus_1,
	2,	/* Elements count */
	&asn_SPC_CuCpResourceStatus_specs_1	/* Additional specs */
};

