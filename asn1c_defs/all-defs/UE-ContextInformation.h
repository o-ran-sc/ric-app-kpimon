/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_UE_ContextInformation_H_
#define	_UE_ContextInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-S1AP-ID.h"
#include "UESecurityCapabilities.h"
#include "AS-SecurityInformation.h"
#include "UEAggregateMaximumBitRate.h"
#include "SubscriberProfileIDforRFP.h"
#include "E-RABs-ToBeSetup-List.h"
#include "RRC-Context.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct HandoverRestrictionList;
struct LocationReportingInformation;
struct ProtocolExtensionContainer;

/* UE-ContextInformation */
typedef struct UE_ContextInformation {
	UE_S1AP_ID_t	 mME_UE_S1AP_ID;
	UESecurityCapabilities_t	 uESecurityCapabilities;
	AS_SecurityInformation_t	 aS_SecurityInformation;
	UEAggregateMaximumBitRate_t	 uEaggregateMaximumBitRate;
	SubscriberProfileIDforRFP_t	*subscriberProfileIDforRFP;	/* OPTIONAL */
	E_RABs_ToBeSetup_List_t	 e_RABs_ToBeSetup_List;
	RRC_Context_t	 rRC_Context;
	struct HandoverRestrictionList	*handoverRestrictionList;	/* OPTIONAL */
	struct LocationReportingInformation	*locationReportingInformation;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_ContextInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_ContextInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_ContextInformation_H_ */
#include <asn_internal.h>
