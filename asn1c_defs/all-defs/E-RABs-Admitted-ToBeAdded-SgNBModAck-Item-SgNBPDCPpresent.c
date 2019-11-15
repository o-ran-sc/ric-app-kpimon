/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "E-RABs-Admitted-ToBeAdded-SgNBModAck-Item-SgNBPDCPpresent.h"

#include "GTPtunnelEndpoint.h"
#include "E-RAB-Level-QoS-Parameters.h"
#include "ULConfiguration.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent, s1_DL_GTPtunnelEndpoint),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GTPtunnelEndpoint,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s1-DL-GTPtunnelEndpoint"
		},
	{ ATF_POINTER, 7, offsetof(struct E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent, sgNB_UL_GTP_TEIDatPDCP),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GTPtunnelEndpoint,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sgNB-UL-GTP-TEIDatPDCP"
		},
	{ ATF_POINTER, 6, offsetof(struct E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent, rlc_Mode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLCMode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Mode"
		},
	{ ATF_POINTER, 5, offsetof(struct E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent, dL_Forwarding_GTPtunnelEndpoint),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GTPtunnelEndpoint,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dL-Forwarding-GTPtunnelEndpoint"
		},
	{ ATF_POINTER, 4, offsetof(struct E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent, uL_Forwarding_GTPtunnelEndpoint),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GTPtunnelEndpoint,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uL-Forwarding-GTPtunnelEndpoint"
		},
	{ ATF_POINTER, 3, offsetof(struct E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent, mCG_E_RAB_Level_QoS_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RAB_Level_QoS_Parameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mCG-E-RAB-Level-QoS-Parameters"
		},
	{ ATF_POINTER, 2, offsetof(struct E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent, uL_Configuration),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ULConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uL-Configuration"
		},
	{ ATF_POINTER, 1, offsetof(struct E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_8231P63,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent_oms_1[] = { 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* s1-DL-GTPtunnelEndpoint */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sgNB-UL-GTP-TEIDatPDCP */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rlc-Mode */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dL-Forwarding-GTPtunnelEndpoint */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* uL-Forwarding-GTPtunnelEndpoint */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* mCG-E-RAB-Level-QoS-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* uL-Configuration */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent_specs_1 = {
	sizeof(struct E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent),
	offsetof(struct E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent, _asn_ctx),
	asn_MAP_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent = {
	"E-RABs-Admitted-ToBeAdded-SgNBModAck-Item-SgNBPDCPpresent",
	"E-RABs-Admitted-ToBeAdded-SgNBModAck-Item-SgNBPDCPpresent",
	&asn_OP_SEQUENCE,
	asn_DEF_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent_tags_1,
	sizeof(asn_DEF_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent_tags_1)
		/sizeof(asn_DEF_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent_tags_1[0]), /* 1 */
	asn_DEF_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent_tags_1)
		/sizeof(asn_DEF_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent_1,
	8,	/* Elements count */
	&asn_SPC_E_RABs_Admitted_ToBeAdded_SgNBModAck_Item_SgNBPDCPpresent_specs_1	/* Additional specs */
};

