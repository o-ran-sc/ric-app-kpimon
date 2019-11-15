/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_ReportingPeriodicityCSIR_H_
#define	_ReportingPeriodicityCSIR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReportingPeriodicityCSIR {
	ReportingPeriodicityCSIR_ms5	= 0,
	ReportingPeriodicityCSIR_ms10	= 1,
	ReportingPeriodicityCSIR_ms20	= 2,
	ReportingPeriodicityCSIR_ms40	= 3,
	ReportingPeriodicityCSIR_ms80	= 4
	/*
	 * Enumeration is extensible
	 */
} e_ReportingPeriodicityCSIR;

/* ReportingPeriodicityCSIR */
typedef long	 ReportingPeriodicityCSIR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportingPeriodicityCSIR;
asn_struct_free_f ReportingPeriodicityCSIR_free;
asn_struct_print_f ReportingPeriodicityCSIR_print;
asn_constr_check_f ReportingPeriodicityCSIR_constraint;
ber_type_decoder_f ReportingPeriodicityCSIR_decode_ber;
der_type_encoder_f ReportingPeriodicityCSIR_encode_der;
xer_type_decoder_f ReportingPeriodicityCSIR_decode_xer;
xer_type_encoder_f ReportingPeriodicityCSIR_encode_xer;
per_type_decoder_f ReportingPeriodicityCSIR_decode_uper;
per_type_encoder_f ReportingPeriodicityCSIR_encode_uper;
per_type_decoder_f ReportingPeriodicityCSIR_decode_aper;
per_type_encoder_f ReportingPeriodicityCSIR_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ReportingPeriodicityCSIR_H_ */
#include <asn_internal.h>
