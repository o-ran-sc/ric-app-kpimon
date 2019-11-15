/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_CRNTI_H_
#define	_CRNTI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CRNTI */
typedef BIT_STRING_t	 CRNTI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CRNTI;
asn_struct_free_f CRNTI_free;
asn_struct_print_f CRNTI_print;
asn_constr_check_f CRNTI_constraint;
ber_type_decoder_f CRNTI_decode_ber;
der_type_encoder_f CRNTI_encode_der;
xer_type_decoder_f CRNTI_decode_xer;
xer_type_encoder_f CRNTI_encode_xer;
per_type_decoder_f CRNTI_decode_uper;
per_type_encoder_f CRNTI_encode_uper;
per_type_decoder_f CRNTI_decode_aper;
per_type_encoder_f CRNTI_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CRNTI_H_ */
#include <asn_internal.h>
