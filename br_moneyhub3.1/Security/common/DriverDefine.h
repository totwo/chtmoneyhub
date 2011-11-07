#pragma once

#ifndef DRV
#include "winioctl.h"
#else
#include "windef.h"
#endif

#define		COMMUNICATE_TIME_LIMIT		(1 * 1024 * 1024 * 1024)
#define     COMMUNICATE_TIME_DOWN       (-1 * 1024 * 1024 * 1024)

#pragma pack(push, 1)

typedef struct _PID_INFO
{
	__int64  currentTime;
	UINT32  count;
	UINT32  PID[1];
}PID_INFO, *PPID_INFO;

enum  MYDRIVERSTATUS
{
	DRIVER_RUNNING = 1,
	DRIVER_RECEIVED,
	
};

#define IOCTL_SET_PROTECT_PID		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x801, METHOD_OUT_DIRECT, FILE_READ_DATA | FILE_WRITE_DATA) 
#define IOCTL_SET_SECU_PATHS		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x802, METHOD_OUT_DIRECT, FILE_READ_DATA | FILE_WRITE_DATA) 
#define IOCTL_SET_SECU_MD5			CTL_CODE(FILE_DEVICE_UNKNOWN, 0x803, METHOD_OUT_DIRECT, FILE_READ_DATA | FILE_WRITE_DATA) 
#define IOCTL_SET_UP_UNLOAD			CTL_CODE(FILE_DEVICE_UNKNOWN, 0x804, METHOD_OUT_DIRECT, FILE_READ_DATA | FILE_WRITE_DATA) 

#define IOCTL_GET_PROTECT_PIDS		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x901, METHOD_OUT_DIRECT, FILE_READ_DATA | FILE_WRITE_DATA) 

//add by bh
#define IOCTL_GET_DRIVER_STATUS		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x902, METHOD_OUT_DIRECT, FILE_READ_DATA | FILE_WRITE_DATA)

#define IOCTL_SET_HANDLE            CTL_CODE(FILE_DEVICE_UNKNOWN, 0x899, METHOD_OUT_DIRECT, FILE_READ_DATA | FILE_WRITE_DATA)
#define IOCTL_RETURN_DATA           CTL_CODE(FILE_DEVICE_UNKNOWN, 0x900, METHOD_OUT_DIRECT, FILE_READ_DATA | FILE_WRITE_DATA)

#define IOCTL_SET_BLACK_MD5			CTL_CODE(FILE_DEVICE_UNKNOWN, 0x805, METHOD_OUT_DIRECT, FILE_READ_DATA | FILE_WRITE_DATA)

#define IOCTL_SET_FILTERRESULT      CTL_CODE(FILE_DEVICE_UNKNOWN, 0x905, METHOD_OUT_DIRECT, FILE_READ_DATA | FILE_WRITE_DATA)

#pragma pack(pop)