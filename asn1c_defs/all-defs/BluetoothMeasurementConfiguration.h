/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_BluetoothMeasurementConfiguration_H_
#define	_BluetoothMeasurementConfiguration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BluetoothMeasConfig.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BluetoothMeasurementConfiguration__bt_rssi {
	BluetoothMeasurementConfiguration__bt_rssi_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_BluetoothMeasurementConfiguration__bt_rssi;

/* Forward declarations */
struct BluetoothMeasConfigNameList;
struct ProtocolExtensionContainer;

/* BluetoothMeasurementConfiguration */
typedef struct BluetoothMeasurementConfiguration {
	BluetoothMeasConfig_t	 bluetoothMeasConfig;
	struct BluetoothMeasConfigNameList	*bluetoothMeasConfigNameList;	/* OPTIONAL */
	long	*bt_rssi;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BluetoothMeasurementConfiguration_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_bt_rssi_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BluetoothMeasurementConfiguration;

#ifdef __cplusplus
}
#endif

#endif	/* _BluetoothMeasurementConfiguration_H_ */
#include <asn_internal.h>
