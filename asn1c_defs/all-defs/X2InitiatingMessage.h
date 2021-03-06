/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Descriptions"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_X2InitiatingMessage_H_
#define	_X2InitiatingMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProcedureCode.h"
#include "Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "HandoverRequest.h"
#include "HandoverRequestAcknowledge.h"
#include "HandoverPreparationFailure.h"
#include "ResetRequest.h"
#include "ResetResponse.h"
#include "X2SetupRequest.h"
#include "X2SetupResponse.h"
#include "X2SetupFailure.h"
#include "ResourceStatusRequest.h"
#include "ResourceStatusResponse.h"
#include "ResourceStatusFailure.h"
#include "ENBConfigurationUpdate.h"
#include "ENBConfigurationUpdateAcknowledge.h"
#include "ENBConfigurationUpdateFailure.h"
#include "MobilityChangeRequest.h"
#include "MobilityChangeAcknowledge.h"
#include "MobilityChangeFailure.h"
#include "CellActivationRequest.h"
#include "CellActivationResponse.h"
#include "CellActivationFailure.h"
#include "SeNBAdditionRequest.h"
#include "SeNBAdditionRequestAcknowledge.h"
#include "SeNBAdditionRequestReject.h"
#include "SeNBModificationRequest.h"
#include "SeNBModificationRequestAcknowledge.h"
#include "SeNBModificationRequestReject.h"
#include "SeNBModificationRequired.h"
#include "SeNBModificationConfirm.h"
#include "SeNBModificationRefuse.h"
#include "SeNBReleaseRequired.h"
#include "SeNBReleaseConfirm.h"
#include "X2RemovalRequest.h"
#include "X2RemovalResponse.h"
#include "X2RemovalFailure.h"
#include "RetrieveUEContextRequest.h"
#include "RetrieveUEContextResponse.h"
#include "RetrieveUEContextFailure.h"
#include "SgNBAdditionRequest.h"
#include "SgNBAdditionRequestAcknowledge.h"
#include "SgNBAdditionRequestReject.h"
#include "SgNBModificationRequest.h"
#include "SgNBModificationRequestAcknowledge.h"
#include "SgNBModificationRequestReject.h"
#include "SgNBModificationRequired.h"
#include "SgNBModificationConfirm.h"
#include "SgNBModificationRefuse.h"
#include "SgNBReleaseRequest.h"
#include "SgNBReleaseRequestAcknowledge.h"
#include "SgNBReleaseRequestReject.h"
#include "SgNBReleaseRequired.h"
#include "SgNBReleaseConfirm.h"
#include "SgNBChangeRequired.h"
#include "SgNBChangeConfirm.h"
#include "SgNBChangeRefuse.h"
#include "ENDCX2SetupRequest.h"
#include "ENDCX2SetupResponse.h"
#include "ENDCX2SetupFailure.h"
#include "ENDCConfigurationUpdate.h"
#include "ENDCConfigurationUpdateAcknowledge.h"
#include "ENDCConfigurationUpdateFailure.h"
#include "ENDCCellActivationRequest.h"
#include "ENDCCellActivationResponse.h"
#include "ENDCCellActivationFailure.h"
#include "ENDCPartialResetRequired.h"
#include "ENDCPartialResetConfirm.h"
#include "EUTRANRCellResourceCoordinationRequest.h"
#include "EUTRANRCellResourceCoordinationResponse.h"
#include "ENDCX2RemovalRequest.h"
#include "ENDCX2RemovalResponse.h"
#include "ENDCX2RemovalFailure.h"
#include "SNStatusTransfer.h"
#include "UEContextRelease.h"
#include "HandoverCancel.h"
#include "ErrorIndication.h"
#include "ResourceStatusUpdate.h"
#include "LoadInformation.h"
#include "PrivateMessage.h"
#include "RLFIndication.h"
#include "HandoverReport.h"
#include "X2Release.h"
#include "X2APMessageTransfer.h"
#include "SeNBReconfigurationComplete.h"
#include "SeNBReleaseRequest.h"
#include "SeNBCounterCheckRequest.h"
#include "SgNBReconfigurationComplete.h"
#include "SgNBCounterCheckRequest.h"
#include "RRCTransfer.h"
#include "SecondaryRATDataUsageReport.h"
#include "SgNBActivityNotification.h"
#include "DataForwardingAddressIndication.h"
#include "GNBStatusIndication.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2InitiatingMessage__value_PR {
	X2InitiatingMessage__value_PR_NOTHING,	/* No components present */
	X2InitiatingMessage__value_PR_HandoverRequest,
	X2InitiatingMessage__value_PR_ResetRequest,
	X2InitiatingMessage__value_PR_X2SetupRequest,
	X2InitiatingMessage__value_PR_ResourceStatusRequest,
	X2InitiatingMessage__value_PR_ENBConfigurationUpdate,
	X2InitiatingMessage__value_PR_MobilityChangeRequest,
	X2InitiatingMessage__value_PR_CellActivationRequest,
	X2InitiatingMessage__value_PR_SeNBAdditionRequest,
	X2InitiatingMessage__value_PR_SeNBModificationRequest,
	X2InitiatingMessage__value_PR_SeNBModificationRequired,
	X2InitiatingMessage__value_PR_SeNBReleaseRequired,
	X2InitiatingMessage__value_PR_X2RemovalRequest,
	X2InitiatingMessage__value_PR_RetrieveUEContextRequest,
	X2InitiatingMessage__value_PR_SgNBAdditionRequest,
	X2InitiatingMessage__value_PR_SgNBModificationRequest,
	X2InitiatingMessage__value_PR_SgNBModificationRequired,
	X2InitiatingMessage__value_PR_SgNBReleaseRequest,
	X2InitiatingMessage__value_PR_SgNBReleaseRequired,
	X2InitiatingMessage__value_PR_SgNBChangeRequired,
	X2InitiatingMessage__value_PR_ENDCX2SetupRequest,
	X2InitiatingMessage__value_PR_ENDCConfigurationUpdate,
	X2InitiatingMessage__value_PR_ENDCCellActivationRequest,
	X2InitiatingMessage__value_PR_ENDCPartialResetRequired,
	X2InitiatingMessage__value_PR_EUTRANRCellResourceCoordinationRequest,
	X2InitiatingMessage__value_PR_ENDCX2RemovalRequest,
	X2InitiatingMessage__value_PR_SNStatusTransfer,
	X2InitiatingMessage__value_PR_UEContextRelease,
	X2InitiatingMessage__value_PR_HandoverCancel,
	X2InitiatingMessage__value_PR_ErrorIndication,
	X2InitiatingMessage__value_PR_ResourceStatusUpdate,
	X2InitiatingMessage__value_PR_LoadInformation,
	X2InitiatingMessage__value_PR_PrivateMessage,
	X2InitiatingMessage__value_PR_RLFIndication,
	X2InitiatingMessage__value_PR_HandoverReport,
	X2InitiatingMessage__value_PR_X2Release,
	X2InitiatingMessage__value_PR_X2APMessageTransfer,
	X2InitiatingMessage__value_PR_SeNBReconfigurationComplete,
	X2InitiatingMessage__value_PR_SeNBReleaseRequest,
	X2InitiatingMessage__value_PR_SeNBCounterCheckRequest,
	X2InitiatingMessage__value_PR_SgNBReconfigurationComplete,
	X2InitiatingMessage__value_PR_SgNBCounterCheckRequest,
	X2InitiatingMessage__value_PR_RRCTransfer,
	X2InitiatingMessage__value_PR_SecondaryRATDataUsageReport,
	X2InitiatingMessage__value_PR_SgNBActivityNotification,
	X2InitiatingMessage__value_PR_DataForwardingAddressIndication,
	X2InitiatingMessage__value_PR_GNBStatusIndication
} X2InitiatingMessage__value_PR;

/* X2InitiatingMessage */
typedef struct X2InitiatingMessage {
	ProcedureCode_t	 procedureCode;
	Criticality_t	 criticality;
	struct X2InitiatingMessage__value {
		X2InitiatingMessage__value_PR present;
		union X2InitiatingMessage__value_u {
			HandoverRequest_t	 HandoverRequest;
			ResetRequest_t	 ResetRequest;
			X2SetupRequest_t	 X2SetupRequest;
			ResourceStatusRequest_t	 ResourceStatusRequest;
			ENBConfigurationUpdate_t	 ENBConfigurationUpdate;
			MobilityChangeRequest_t	 MobilityChangeRequest;
			CellActivationRequest_t	 CellActivationRequest;
			SeNBAdditionRequest_t	 SeNBAdditionRequest;
			SeNBModificationRequest_t	 SeNBModificationRequest;
			SeNBModificationRequired_t	 SeNBModificationRequired;
			SeNBReleaseRequired_t	 SeNBReleaseRequired;
			X2RemovalRequest_t	 X2RemovalRequest;
			RetrieveUEContextRequest_t	 RetrieveUEContextRequest;
			SgNBAdditionRequest_t	 SgNBAdditionRequest;
			SgNBModificationRequest_t	 SgNBModificationRequest;
			SgNBModificationRequired_t	 SgNBModificationRequired;
			SgNBReleaseRequest_t	 SgNBReleaseRequest;
			SgNBReleaseRequired_t	 SgNBReleaseRequired;
			SgNBChangeRequired_t	 SgNBChangeRequired;
			ENDCX2SetupRequest_t	 ENDCX2SetupRequest;
			ENDCConfigurationUpdate_t	 ENDCConfigurationUpdate;
			ENDCCellActivationRequest_t	 ENDCCellActivationRequest;
			ENDCPartialResetRequired_t	 ENDCPartialResetRequired;
			EUTRANRCellResourceCoordinationRequest_t	 EUTRANRCellResourceCoordinationRequest;
			ENDCX2RemovalRequest_t	 ENDCX2RemovalRequest;
			SNStatusTransfer_t	 SNStatusTransfer;
			UEContextRelease_t	 UEContextRelease;
			HandoverCancel_t	 HandoverCancel;
			ErrorIndication_t	 ErrorIndication;
			ResourceStatusUpdate_t	 ResourceStatusUpdate;
			LoadInformation_t	 LoadInformation;
			PrivateMessage_t	 PrivateMessage;
			RLFIndication_t	 RLFIndication;
			HandoverReport_t	 HandoverReport;
			X2Release_t	 X2Release;
			X2APMessageTransfer_t	 X2APMessageTransfer;
			SeNBReconfigurationComplete_t	 SeNBReconfigurationComplete;
			SeNBReleaseRequest_t	 SeNBReleaseRequest;
			SeNBCounterCheckRequest_t	 SeNBCounterCheckRequest;
			SgNBReconfigurationComplete_t	 SgNBReconfigurationComplete;
			SgNBCounterCheckRequest_t	 SgNBCounterCheckRequest;
			RRCTransfer_t	 RRCTransfer;
			SecondaryRATDataUsageReport_t	 SecondaryRATDataUsageReport;
			SgNBActivityNotification_t	 SgNBActivityNotification;
			DataForwardingAddressIndication_t	 DataForwardingAddressIndication;
			GNBStatusIndication_t	 GNBStatusIndication;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2InitiatingMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2InitiatingMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_X2InitiatingMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_X2InitiatingMessage_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _X2InitiatingMessage_H_ */
#include <asn_internal.h>
