/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_RadioframeAllocationPeriod_H_
#define	_RadioframeAllocationPeriod_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioframeAllocationPeriod {
	RadioframeAllocationPeriod_n1	= 0,
	RadioframeAllocationPeriod_n2	= 1,
	RadioframeAllocationPeriod_n4	= 2,
	RadioframeAllocationPeriod_n8	= 3,
	RadioframeAllocationPeriod_n16	= 4,
	RadioframeAllocationPeriod_n32	= 5
	/*
	 * Enumeration is extensible
	 */
} e_RadioframeAllocationPeriod;

/* RadioframeAllocationPeriod */
typedef long	 RadioframeAllocationPeriod_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RadioframeAllocationPeriod_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RadioframeAllocationPeriod;
extern const asn_INTEGER_specifics_t asn_SPC_RadioframeAllocationPeriod_specs_1;
asn_struct_free_f RadioframeAllocationPeriod_free;
asn_struct_print_f RadioframeAllocationPeriod_print;
asn_constr_check_f RadioframeAllocationPeriod_constraint;
ber_type_decoder_f RadioframeAllocationPeriod_decode_ber;
der_type_encoder_f RadioframeAllocationPeriod_encode_der;
xer_type_decoder_f RadioframeAllocationPeriod_decode_xer;
xer_type_encoder_f RadioframeAllocationPeriod_encode_xer;
per_type_decoder_f RadioframeAllocationPeriod_decode_uper;
per_type_encoder_f RadioframeAllocationPeriod_encode_uper;
per_type_decoder_f RadioframeAllocationPeriod_decode_aper;
per_type_encoder_f RadioframeAllocationPeriod_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RadioframeAllocationPeriod_H_ */
#include <asn_internal.h>
