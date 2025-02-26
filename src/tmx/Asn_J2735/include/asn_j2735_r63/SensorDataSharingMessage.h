/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SDSM"
 * 	found in "J2735_201603_2023-06-22.asn"
 * 	`asn1c -fcompound-names `
 */

#ifndef	_SensorDataSharingMessage_H_
#define	_SensorDataSharingMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DSRC_MsgCount.h"
#include "TemporaryID.h"
#include "EquipmentType.h"
#include "DDateTime.h"
#include "Position3D.h"
#include "PositionalAccuracy.h"
#include "ElevationConfidence.h"
#include "DetectedObjectList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SensorDataSharingMessage */
typedef struct SensorDataSharingMessage {
	DSRC_MsgCount_t	 msgCnt;
	TemporaryID_t	 sourceID;
	EquipmentType_t	 equipmentType;
	DDateTime_t	 sDSMTimeStamp;
	Position3D_t	 refPos;
	PositionalAccuracy_t	 refPosXYConf;
	ElevationConfidence_t	*refPosElConf	/* OPTIONAL */;
	DetectedObjectList_t	 objects;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SensorDataSharingMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SensorDataSharingMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_SensorDataSharingMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_SensorDataSharingMessage_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _SensorDataSharingMessage_H_ */
#include <asn_internal.h>
