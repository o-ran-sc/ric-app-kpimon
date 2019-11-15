/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_ResponseInformationSeNBReconfComp_H_
#define	_ResponseInformationSeNBReconfComp_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ResponseInformationSeNBReconfComp_PR {
	ResponseInformationSeNBReconfComp_PR_NOTHING,	/* No components present */
	ResponseInformationSeNBReconfComp_PR_success,
	ResponseInformationSeNBReconfComp_PR_reject_by_MeNB
	/* Extensions may appear below */
	
} ResponseInformationSeNBReconfComp_PR;

/* Forward declarations */
struct ResponseInformationSeNBReconfComp_SuccessItem;
struct ResponseInformationSeNBReconfComp_RejectByMeNBItem;

/* ResponseInformationSeNBReconfComp */
typedef struct ResponseInformationSeNBReconfComp {
	ResponseInformationSeNBReconfComp_PR present;
	union ResponseInformationSeNBReconfComp_u {
		struct ResponseInformationSeNBReconfComp_SuccessItem	*success;
		struct ResponseInformationSeNBReconfComp_RejectByMeNBItem	*reject_by_MeNB;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ResponseInformationSeNBReconfComp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResponseInformationSeNBReconfComp;

#ifdef __cplusplus
}
#endif

#endif	/* _ResponseInformationSeNBReconfComp_H_ */
#include <asn_internal.h>
