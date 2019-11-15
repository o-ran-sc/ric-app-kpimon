/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_CSGMembershipStatus_H_
#define	_CSGMembershipStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSGMembershipStatus {
	CSGMembershipStatus_member	= 0,
	CSGMembershipStatus_not_member	= 1
} e_CSGMembershipStatus;

/* CSGMembershipStatus */
typedef long	 CSGMembershipStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSGMembershipStatus;
asn_struct_free_f CSGMembershipStatus_free;
asn_struct_print_f CSGMembershipStatus_print;
asn_constr_check_f CSGMembershipStatus_constraint;
ber_type_decoder_f CSGMembershipStatus_decode_ber;
der_type_encoder_f CSGMembershipStatus_encode_der;
xer_type_decoder_f CSGMembershipStatus_decode_xer;
xer_type_encoder_f CSGMembershipStatus_encode_xer;
per_type_decoder_f CSGMembershipStatus_decode_uper;
per_type_encoder_f CSGMembershipStatus_encode_uper;
per_type_decoder_f CSGMembershipStatus_decode_aper;
per_type_encoder_f CSGMembershipStatus_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CSGMembershipStatus_H_ */
#include <asn_internal.h>
