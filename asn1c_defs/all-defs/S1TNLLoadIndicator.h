/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_S1TNLLoadIndicator_H_
#define	_S1TNLLoadIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LoadIndicator.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* S1TNLLoadIndicator */
typedef struct S1TNLLoadIndicator {
	LoadIndicator_t	 dLS1TNLLoadIndicator;
	LoadIndicator_t	 uLS1TNLLoadIndicator;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1TNLLoadIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1TNLLoadIndicator;
extern asn_SEQUENCE_specifics_t asn_SPC_S1TNLLoadIndicator_specs_1;
extern asn_TYPE_member_t asn_MBR_S1TNLLoadIndicator_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _S1TNLLoadIndicator_H_ */
#include <asn_internal.h>
