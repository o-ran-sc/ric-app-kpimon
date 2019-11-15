/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_UE_ContextReferenceAtSeNB_H_
#define	_UE_ContextReferenceAtSeNB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GlobalENB-ID.h"
#include "UE-X2AP-ID.h"
#include "UE-X2AP-ID-Extension.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* UE-ContextReferenceAtSeNB */
typedef struct UE_ContextReferenceAtSeNB {
	GlobalENB_ID_t	 source_GlobalSeNB_ID;
	UE_X2AP_ID_t	 seNB_UE_X2AP_ID;
	UE_X2AP_ID_Extension_t	 seNB_UE_X2AP_ID_Extension;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_ContextReferenceAtSeNB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_ContextReferenceAtSeNB;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_ContextReferenceAtSeNB_H_ */
#include <asn_internal.h>
