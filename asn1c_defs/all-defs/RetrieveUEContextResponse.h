/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_RetrieveUEContextResponse_H_
#define	_RetrieveUEContextResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RetrieveUEContextResponse */
typedef struct RetrieveUEContextResponse {
	ProtocolIE_Container_8180P62_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RetrieveUEContextResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RetrieveUEContextResponse;
extern asn_SEQUENCE_specifics_t asn_SPC_RetrieveUEContextResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_RetrieveUEContextResponse_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RetrieveUEContextResponse_H_ */
#include <asn_internal.h>
