#if !defined(_OLDADEFS_)
#define _OLDADEFS_

#include <oltypes.h>

/*-----------------------------------------------------------------------

FILE NAME: oldadefs.h

ABSTRACT:

   This unit contains common declarations for the Open Layers 
   Data Acquisition Library.

---------------------------------------------------------------------------*/


/* prototype for OLNOTIFYOPROC needed by driver as well as API */

typedef void (FAR PASCAL *OLNOTIFYPROC) (
   UINT uiMsg,
   WPARAM wParam,
   LPARAM lParam);

#define OLSS_QUAD	OLSS_SRL
#define OLSS_TACH	((int)OLSS_CT + 1)
typedef enum olss_tag
   {
   OLSS_AD,
   OLSS_DA,
   OLSS_DIN,
   OLSS_DOUT,
   OLSS_SRL,
   OLSS_CT
   }
OLSS;


typedef enum olssc_tag
   {
   OLSSC_MAXSECHANS,
   OLSSC_MAXDICHANS,
   OLSSC_CGLDEPTH,
   OLSSC_NUMFILTERS,
   OLSSC_NUMGAINS,
   OLSSC_NUMRANGES,
   OLSSC_NUMDMACHANS,
   OLSSC_NUMCHANNELS,
   OLSSC_NUMEXTRACLOCKS,
   OLSSC_NUMEXTRATRIGGERS,
   OLSSC_NUMRESOLUTIONS,
   
   OLSSC_SUP_INTERRUPT,
   OLSSC_SUP_SINGLEENDED,
   OLSSC_SUP_DIFFERENTIAL,
   OLSSC_SUP_BINARY,
   OLSSC_SUP_2SCOMP,
   OLSSC_SUP_SOFTTRIG,
   OLSSC_SUP_EXTERNTRIG,
   OLSSC_SUP_THRESHTRIGPOS,
   OLSSC_SUP_THRESHTRIGNEG,
   OLSSC_SUP_ANALOGEVENTTRIG,
   OLSSC_SUP_DIGITALEVENTTRIG,
   OLSSC_SUP_TIMEREVENTTRIG,
   OLSSC_SUP_TRIGSCAN,
   OLSSC_SUP_INTCLOCK,
   OLSSC_SUP_EXTCLOCK,
   OLSSC_SUP_SWCAL,
   OLSSC_SUP_EXP2896,
   OLSSC_SUP_EXP727,
   OLSSC_SUP_FILTERPERCHAN,
   OLSSC_SUP_DTCONNECT,
   OLSSC_SUP_FIFO,
   OLSSC_SUP_PROGRAMGAIN,
   OLSSC_SUP_PROCESSOR,
   OLSSC_SUP_SWRESOLUTION,
   OLSSC_SUP_CONTINUOUS,
   OLSSC_SUP_SINGLEVALUE,
   OLSSC_SUP_PAUSE,
   OLSSC_SUP_WRPMULTIPLE,
   OLSSC_SUP_WRPSINGLE,

   OLSSC_SUP_POSTMESSAGE,
   OLSSC_SUP_CASCADING,
   OLSSC_SUP_CTMODE_COUNT,
   OLSSC_SUP_CTMODE_RATE,
   OLSSC_SUP_CTMODE_ONESHOT,
   OLSSC_SUP_CTMODE_ONESHOT_RPT,

   OLSSC_MAX_DIGITALIOLIST_VALUE,
   OLSSC_SUP_DTCONNECT_CONTINUOUS,
   OLSSC_SUP_DTCONNECT_BURST,
   OLSSC_SUP_CHANNELLIST_INHIBIT,
   OLSSC_SUP_SYNCHRONOUS_DIGITALIO,
   OLSSC_SUP_SIMULTANEOUS_START,
   OLSSC_SUP_INPROCESSFLUSH,

   OLSSC_SUP_RANGEPERCHANNEL,
   OLSSC_SUP_SIMULTANEOUS_SH,
   OLSSC_SUP_RANDOM_CGL,
   OLSSC_SUP_SEQUENTIAL_CGL,
   OLSSC_SUP_ZEROSEQUENTIAL_CGL,

   OLSSC_SUP_GAPFREE_NODMA,
   OLSSC_SUP_GAPFREE_SINGLEDMA,
   OLSSC_SUP_GAPFREE_DUALDMA,

   OLSSCE_MAXTHROUGHPUT,
   OLSSCE_MINTHROUGHPUT,
   OLSSCE_MAXRETRIGGER,
   OLSSCE_MINRETRIGGER,
   OLSSCE_MAXCLOCKDIVIDER,
   OLSSCE_MINCLOCKDIVIDER,
   OLSSCE_BASECLOCK,

   OLSSCE_RANGELOW,
   OLSSCE_RANGEHIGH,
   OLSSCE_FILTER,
   OLSSCE_GAIN,
   OLSSCE_RESOLUTION, 

   OLSSC_SUP_PLS_HIGH2LOW,      
   OLSSC_SUP_PLS_LOW2HIGH,      

   OLSSC_SUP_GATE_NONE,         
   OLSSC_SUP_GATE_HIGH_LEVEL,
   OLSSC_SUP_GATE_LOW_LEVEL,    
   OLSSC_SUP_GATE_HIGH_EDGE,    
   OLSSC_SUP_GATE_LOW_EDGE,     
   OLSSC_SUP_GATE_LEVEL,     
   OLSSC_SUP_GATE_HIGH_LEVEL_DEBOUNCE,
   OLSSC_SUP_GATE_LOW_LEVEL_DEBOUNCE,    
   OLSSC_SUP_GATE_HIGH_EDGE_DEBOUNCE,    
   OLSSC_SUP_GATE_LOW_EDGE_DEBOUNCE,     
   OLSSC_SUP_GATE_LEVEL_DEBOUNCE,

   OLSS_SUP_RETRIGGER_INTERNAL,
   OLSS_SUP_RETRIGGER_SCAN_PER_TRIGGER,

   OLSSC_MAXMULTISCAN,
   OLSSC_SUP_CONTINUOUS_PRETRIG,
   OLSSC_SUP_CONTINUOUS_ABOUTTRIG, 
   OLSSC_SUP_BUFFERING,
   OLSSC_SUP_RETRIGGER_EXTRA,

   OLSSC_NONCONTIGUOUS_CHANNELNUM,
   OLSSC_SUP_SINGLEVALUE_AUTORANGE,
   OLSSC_SUP_CTMODE_UP_DOWN,
   OLSSC_SUP_CTMODE_MEASURE,
   OLSSC_SUP_WRPWAVEFORM,
   OLSSC_FIFO_SIZE_IN_K,
   OLSSC_SUP_SIMULTANEOUS_CLOCKING,
   OLSSC_SUP_FIXED_PULSE_WIDTH,
   OLSSC_SUP_QUADRATURE_DECODER,
   OLSSC_SUP_CTMODE_CONT_MEASURE,
   OLSSC_SUP_AC_COUPLING,
   OLSSC_SUP_DC_COUPLING,
   OLSSC_SUP_EXTERNAL_EXCITATION_CURRENT_SOURCE,
   OLSSC_SUP_INTERNAL_EXCITATION_CURRENT_SOURCE,
   OLSSC_EXCITATION_CURRENT_VALUE,					// NOT USED
   OLSSC_NUM_EXCITATION_CURRENT_VALUES,				// NOT USED
   OLSSC_SUP_WRPWAVEFORM_ONLY,
   OLSSC_SUP_INTERLEAVED_CJC_IN_STREAM,
   OLSSC_SUP_THERMOCOUPLES,
   OLSSC_SUP_TEMPERATURE_DATA_IN_STREAM,
   OLSSC_SUP_CJC_SOURCE_CHANNEL,
   OLSSC_SUP_CJC_SOURCE_INTERNAL,
   OLSSCE_CJC_MILLIVOLTS_PER_DEGREE_C,		// double	
   OLSSC_RETURNS_FLOATS,
   OLSSC_CURRENT_OUTPUTS,
   OLSSC_SUP_PUT_SINGLE_VALUES,
   OLSSC_SUP_SV_POS_EXTERN_TTLTRIG,
   OLSSC_SUP_SV_NEG_EXTERN_TTLTRIG,
   OLSSC_SUP_AUTO_CALIBRATE,
   OLSSC_SUP_RTDS,
   OLSSC_RETURNS_OHMS,
   OLSSC_SUP_SYNCHRONIZATION,
   OLSSC_SUP_TEMP_FILTERS,

// NOTE If you add any additional items here, you'll also need to make corresponding changes to
// the SUBSYSTEMS_CAPS structure in OLDSPTCH.H
   }
OLSSC;

#define OLSSCMIN      OLSSC_MAXSECHANS
#define OLSSCMAX      OLSSC_SUP_GAPFREE_DUALDMA
#define OLSSCCOUNT    (OLSSCMAX - OLSSCMIN + 1)

#define OLSSCEMIN     OLSSCE_MAXTHROUGHPUT
#define OLSSCEMAX     OLSSCE_BASECLOCK 
#define OLSSCECOUNT   (OLSSCEMAX - OLSSCEMIN + 1)
#define OLSSCEOFFSET  (OLSSCE_RESOLUTION - OLSSCEMIN +1)

#define OLSSCNMIN     OLSSC_SUP_PLS_HIGH2LOW
#define OLSSCNMAX     OLSSC_SUP_CTMODE_CONT_MEASURE
#define OLSSCNCOUNT   (OLSSCNMAX - OLSSCNMIN + 1)


typedef enum oldc_tag
   {
   OLDC_ADELEMENTS,
   OLDC_DAELEMENTS,
   OLDC_DINELEMENTS,
   OLDC_DOUTELEMENTS,
   OLDC_SRLELEMENTS,
   OLDC_CTELEMENTS,
   OLDC_TOTALELEMENTS=~0
   }
OLDC;

#define OLDCMIN      OLDC_ADELEMENTS
#define OLDCMAX      OLDC_CTELEMENTS
#define OLDCOUNT     (OLDCMAX - OLDCMIN) + 1

/* for OLDRV_SETCHANNELTYPE         */
#define OL_CHNT_SINGLEENDED         100
#define OL_CHNT_DIFFERENTIAL        101

/* for OLDRV_SETENCODING            */
#define OL_ENC_BINARY               200
#define OL_ENC_2SCOMP               201

/* for OLDRV_SETTRIGGER             */
#define OL_TRG_SOFT                 300
#define OL_TRG_EXTERN               301
#define OL_TRG_THRESH               302
#define OL_TRG_ANALOGEVENT          303
#define OL_TRG_DIGITALEVENT         304
#define OL_TRG_TIMEREVENT           305
#define OL_TRG_EXTRA                306

/* for OLDRV_SETCLOCKSOURCE         */
#define OL_CLK_INTERNAL             400
#define OL_CLK_EXTERNAL             401
#define OL_CLK_EXTRA                402

/* for OLDRV_SETGATETYPE            */
#define OL_GATE_NONE                500
#define OL_GATE_HIGH_LEVEL          501
#define OL_GATE_LOW_LEVEL           502
#define OL_GATE_HIGH_EDGE           503
#define OL_GATE_LOW_EDGE            504
#define OL_GATE_LEVEL               505
#define OL_GATE_HIGH_LEVEL_DEBOUNCE 506
#define OL_GATE_LOW_LEVEL_DEBOUNCE  507
#define OL_GATE_HIGH_EDGE_DEBOUNCE  508
#define OL_GATE_LOW_EDGE_DEBOUNCE   509
#define OL_GATE_LEVEL_DEBOUNCE      510


/* for OLDRV_SETPULSETYPE           */
#define OL_PLS_HIGH2LOW             600
#define OL_PLS_LOW2HIGH             601

/* for OLDRV_SETCOUNTERMODE         */
#define OL_CTMODE_COUNT             700
#define OL_CTMODE_RATE              701
#define OL_CTMODE_ONESHOT           702
#define OL_CTMODE_ONESHOT_RPT       703
#define OL_CTMODE_UP_DOWN			704
#define OL_CTMODE_MEASURE			705
#define OL_CTMODE_CONT_MEASURE		706

/* for OLDRV_SETMEASUREMENT			*/
#define OL_GATE_RISING				750
#define OL_GATE_FALLING				751
#define OL_CLOCK_RISING				752
#define OL_CLOCK_FALLING			753

/* for OLDRV_SETDATAFLOW */
#define OL_DF_CONTINUOUS            800   
#define OL_DF_SINGLEVALUE           801
#define OL_DF_DTCONNECT_CONTINUOUS  802   
#define OL_DF_DTCONNECT_BURST       803  
#define OL_DF_CONTINUOUS_PRETRIG    804   
#define OL_DF_CONTINUOUS_ABOUTTRIG  805   
 

/* for OLDRV_SETCASCADEMODE*/
#define OL_CT_CASCADE               900
#define OL_CT_SINGLE                901

/* for OLDRV_SETWRAPMODE*/
#define OL_WRP_NONE                 1000
#define OL_WRP_MULTIPLE             1001
#define OL_WRP_SINGLE               1002

/* for OLDRV_GETQUEUESIZES*/
#define OL_QUE_READY                1100
#define OL_QUE_DONE                 1101
#define OL_QUE_INPROCESS            1102

/* NEW to OLDRV_SETTRIGGER             */
#define OL_TRG_THRESHPOS            1200
#define OL_TRG_THRESHNEG            1201

/* for OLDRV_GETRETTRIGGERMODE*/
#define OL_RETRIGGER_INTERNAL          1300
#define OL_RETRIGGER_SCAN_PER_TRIGGER  1301
#define OL_RETRIGGER_EXTRA             1302

#define OL_INDEX_DISABLED			   1400
#define OL_INDEX_LOW				   1401
#define OL_INDEX_HIGH				   1402

/* for olDaSetThermocoupleType() */
#define OL_THERMOCOUPLE_TYPE_NONE		1500
#define OL_THERMOCOUPLE_TYPE_J			1501
#define OL_THERMOCOUPLE_TYPE_K			1502
#define OL_THERMOCOUPLE_TYPE_B			1503
#define OL_THERMOCOUPLE_TYPE_E			1504
#define OL_THERMOCOUPLE_TYPE_N			1505
#define OL_THERMOCOUPLE_TYPE_R			1506
#define OL_THERMOCOUPLE_TYPE_S			1507
#define OL_THERMOCOUPLE_TYPE_T			1508

/* for olDaSetRtdType() */
#define OL_RTD_TYPE_VOLTS					1600
#define OL_RTD_TYPE_OHMS					1601
#define OL_RTD_TYPE_385_EUROPEAN_PT100_OHMS	1602
#define OL_RTD_TYPE_385_EUROPEAN_PT500_OHMS	1603
#define OL_RTD_TYPE_385_EUROPEAN_PT1000_OHMS  1604
#define OL_RTD_TYPE_392_AMERICAN_PT100_OHMS   1605
#define OL_RTD_TYPE_392_AMERICAN_PT500_OHMS   1606
#define OL_RTD_TYPE_392_AMERICAN_PT1000_OHMS  1607
 
/* for olDaSetFilterType() */
#define OL_TEMP_FILTER_RAW					1700
#define OL_TEMP_FILTER_MOVING_AVERAGE		1701
#define OL_TEMP_FILTER_QUIET				1702
#define OL_TEMP_FILTER_NOMINAL				1703


/* Offset value for olConfigWriteReg */
#define OL_POWER_STATE				100

#define OL_POWER_OFF				0
#define OL_POWER_ON					1

// Pass this constant to olDaPutSingleValues() to prevent a D/A channel
// from being updated with a new value
#define DONT_UPDATE					0x40808080

#define OLDA_WM_TRIGGER_ERROR     (WM_USER+100)
#define OLDA_WM_UNDERRUN_ERROR    (WM_USER+101)
#define OLDA_WM_OVERRUN_ERROR     (WM_USER+102)
#define OLDA_WM_BUFFER_DONE       (WM_USER+103)
#define OLDA_WM_QUEUE_DONE        (WM_USER+104)
#define OLDA_WM_BUFFER_REUSED     (WM_USER+105)
#define OLDA_WM_QUEUE_STOPPED     (WM_USER+106)
#define OLDA_WM_EVENT_ERROR       (WM_USER+107)
#define OLDA_WM_MEASURE_DONE      (WM_USER+108)
#define OLDA_WM_DTCONNECT_DONE    (WM_USER+109)
#define OLDA_WM_DTCONNECT_STOPPED (WM_USER+110)
#define OLDA_WM_EVENT_DONE        (WM_USER+111)
#define OLDA_WM_PRETRIGGER_BUFFER_DONE  (WM_USER+112)
#define OLDA_WM_DEVICE_REMOVAL    (WM_USER+113)
#define OLDA_WM_IO_COMPLETE		  (WM_USER+114)

// (WM_USER+200) is reserved in olspi.h for internal driver messages


// Register definitions used by olDaWriteReg and olDaReadReg
// functions (See odaapi.h)
#define DIO_PORT_BASE      0x10000

#define DIO_PORT_CONFIG_OFFSET  0x00
#define DIO_PORT_DATA_OFFSET    0x10

#define DIO_PORT_CONFIG    (DIO_PORT_BASE + DIO_PORT_CONFIG_OFFSET)
#define DIO_PORT_DATA      (DIO_PORT_BASE + DIO_PORT_DATA_OFFSET)


// These defines are only used internally by Data Translation
#define SMBUS_BUS_BASE    0x20000  
#define I2C_BUS_BASE      0x40000 
#define USB_BUS_BASE      0x80000 
#define FLASH_MEM_BASE   0x100000
#define EXTERN_MEM_BASE  0x200000
#define LOCAL_BUS_BASE	 0x400000


// Definitions of bits within OLSSC_SUP_CTMODE_MEASURE that indicate which
// types of measurement is supported on a given board
#define SUP_GATE_RISING_BIT			0x01
#define SUP_GATE_FALLING_BIT		0x02
#define SUP_CLOCK_RISING_BIT		0x04
#define SUP_CLOCK_FALLING_BIT		0x08


// Maximum allowed size for Board Name
#define MAX_BOARD_NAME_LENGTH	41  // 40 + terminator


typedef enum COUPLING_TYPE_tag
{
	DC,
	AC
}COUPLING_TYPE, *PCOUPLING_TYPE;

typedef enum EXCITATION_CURRENT_SRC_tag
{
	INTERNAL,
	EXTERNAL,
	DISABLED
}EXCITATION_CURRENT_SRC, *PEXCITATION_CURRENT_SRC;


 /* 
   Provides conversion from a physical element within SsType to a target virtual Channel.
   The subsystem that owns the channel is owner of CHANNELMAP struct.
*/
typedef struct _channelMap
{
	int SsType;				// Source subsystem type
	int LogicalChannel;		// Source subsystem channel number
	int logicalChannelPart;	// Source subsystem channel part if logical channel bitness is larger
							// than the physical channel bitness 
	int PhysicalChannel;	// Target physical channel within the subsystem owning this channel map

} CHANNELMAP, *PCHANNELMAP;

#define SENSOR_IS_OPEN				((float)99999.0)
#define TEMP_OUT_OF_RANGE_LOW		((float)-88888.0)
#define TEMP_OUT_OF_RANGE_HIGH		((float)88888.0)

// Synchronization mode enum
#define OL_SYNC_MODE_NONE		0x0 // Set the device with no synchronization
#define OL_SYNC_MODE_MASTER		0x1 // Set the device as a master 
#define OL_SYNC_MODE_SLAVE		0x2 // Set the device as a slave

#endif



