/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_CellBasedMDT_H_
#define	_CellBasedMDT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellIdListforMDT.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* CellBasedMDT */
typedef struct CellBasedMDT {
	CellIdListforMDT_t	 cellIdListforMDT;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellBasedMDT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellBasedMDT;
extern asn_SEQUENCE_specifics_t asn_SPC_CellBasedMDT_specs_1;
extern asn_TYPE_member_t asn_MBR_CellBasedMDT_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CellBasedMDT_H_ */
#include <asn_internal.h>
