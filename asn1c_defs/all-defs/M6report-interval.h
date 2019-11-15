/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_M6report_interval_H_
#define	_M6report_interval_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M6report_interval {
	M6report_interval_ms1024	= 0,
	M6report_interval_ms2048	= 1,
	M6report_interval_ms5120	= 2,
	M6report_interval_ms10240	= 3
	/*
	 * Enumeration is extensible
	 */
} e_M6report_interval;

/* M6report-interval */
typedef long	 M6report_interval_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M6report_interval_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M6report_interval;
extern const asn_INTEGER_specifics_t asn_SPC_M6report_interval_specs_1;
asn_struct_free_f M6report_interval_free;
asn_struct_print_f M6report_interval_print;
asn_constr_check_f M6report_interval_constraint;
ber_type_decoder_f M6report_interval_decode_ber;
der_type_encoder_f M6report_interval_encode_der;
xer_type_decoder_f M6report_interval_decode_xer;
xer_type_encoder_f M6report_interval_encode_xer;
per_type_decoder_f M6report_interval_decode_uper;
per_type_encoder_f M6report_interval_encode_uper;
per_type_decoder_f M6report_interval_decode_aper;
per_type_encoder_f M6report_interval_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _M6report_interval_H_ */
#include <asn_internal.h>
