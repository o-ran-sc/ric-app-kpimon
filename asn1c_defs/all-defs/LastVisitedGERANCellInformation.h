/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_LastVisitedGERANCellInformation_H_
#define	_LastVisitedGERANCellInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LastVisitedGERANCellInformation_PR {
	LastVisitedGERANCellInformation_PR_NOTHING,	/* No components present */
	LastVisitedGERANCellInformation_PR_undefined
	/* Extensions may appear below */
	
} LastVisitedGERANCellInformation_PR;

/* LastVisitedGERANCellInformation */
typedef struct LastVisitedGERANCellInformation {
	LastVisitedGERANCellInformation_PR present;
	union LastVisitedGERANCellInformation_u {
		NULL_t	 undefined;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LastVisitedGERANCellInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LastVisitedGERANCellInformation;
extern asn_CHOICE_specifics_t asn_SPC_LastVisitedGERANCellInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_LastVisitedGERANCellInformation_1[1];
extern asn_per_constraints_t asn_PER_type_LastVisitedGERANCellInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LastVisitedGERANCellInformation_H_ */
#include <asn_internal.h>
