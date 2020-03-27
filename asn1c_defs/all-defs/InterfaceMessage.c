/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-X2-IEs"
 * 	found in "../../asn_defs/asn1/e2sm-gNB-X2-release-1-v041.asn.txt"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "InterfaceMessage.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_InterfaceMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_InterfaceMessage = {
	"InterfaceMessage",
	"InterfaceMessage",
	&asn_OP_OCTET_STRING,
	asn_DEF_InterfaceMessage_tags_1,
	sizeof(asn_DEF_InterfaceMessage_tags_1)
		/sizeof(asn_DEF_InterfaceMessage_tags_1[0]), /* 1 */
	asn_DEF_InterfaceMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_InterfaceMessage_tags_1)
		/sizeof(asn_DEF_InterfaceMessage_tags_1[0]), /* 1 */
	{ 0, 0, OCTET_STRING_constraint },
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};
