/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "RespondingNodeType-EutranrCellResourceCoordination.h"

#include "ProtocolIE-Container.h"
static asn_per_constraints_t asn_PER_type_RespondingNodeType_EutranrCellResourceCoordination_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RespondingNodeType_EutranrCellResourceCoordination_1[] = {
	{ ATF_POINTER, 0, offsetof(struct RespondingNodeType_EutranrCellResourceCoordination, choice.respond_eNB),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_Container_8180P109,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"respond-eNB"
		},
	{ ATF_POINTER, 0, offsetof(struct RespondingNodeType_EutranrCellResourceCoordination, choice.respond_en_gNB),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_Container_8180P110,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"respond-en-gNB"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RespondingNodeType_EutranrCellResourceCoordination_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* respond-eNB */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* respond-en-gNB */
};
static asn_CHOICE_specifics_t asn_SPC_RespondingNodeType_EutranrCellResourceCoordination_specs_1 = {
	sizeof(struct RespondingNodeType_EutranrCellResourceCoordination),
	offsetof(struct RespondingNodeType_EutranrCellResourceCoordination, _asn_ctx),
	offsetof(struct RespondingNodeType_EutranrCellResourceCoordination, present),
	sizeof(((struct RespondingNodeType_EutranrCellResourceCoordination *)0)->present),
	asn_MAP_RespondingNodeType_EutranrCellResourceCoordination_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RespondingNodeType_EutranrCellResourceCoordination = {
	"RespondingNodeType-EutranrCellResourceCoordination",
	"RespondingNodeType-EutranrCellResourceCoordination",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_RespondingNodeType_EutranrCellResourceCoordination_constr_1, CHOICE_constraint },
	asn_MBR_RespondingNodeType_EutranrCellResourceCoordination_1,
	2,	/* Elements count */
	&asn_SPC_RespondingNodeType_EutranrCellResourceCoordination_specs_1	/* Additional specs */
};

