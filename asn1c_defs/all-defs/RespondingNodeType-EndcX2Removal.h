/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_RespondingNodeType_EndcX2Removal_H_
#define	_RespondingNodeType_EndcX2Removal_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RespondingNodeType_EndcX2Removal_PR {
	RespondingNodeType_EndcX2Removal_PR_NOTHING,	/* No components present */
	RespondingNodeType_EndcX2Removal_PR_respond_eNB,
	RespondingNodeType_EndcX2Removal_PR_respond_en_gNB
	/* Extensions may appear below */
	
} RespondingNodeType_EndcX2Removal_PR;

/* Forward declarations */
struct ProtocolIE_Container;

/* RespondingNodeType-EndcX2Removal */
typedef struct RespondingNodeType_EndcX2Removal {
	RespondingNodeType_EndcX2Removal_PR present;
	union RespondingNodeType_EndcX2Removal_u {
		struct ProtocolIE_Container	*respond_eNB;
		struct ProtocolIE_Container	*respond_en_gNB;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RespondingNodeType_EndcX2Removal_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RespondingNodeType_EndcX2Removal;

#ifdef __cplusplus
}
#endif

#endif	/* _RespondingNodeType_EndcX2Removal_H_ */
#include <asn_internal.h>
