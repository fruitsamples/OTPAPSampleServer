/*	File: PAPPostScriptStuff.h		Header file for the PAPPostScriptStuff.c code file	*/#ifndef __PAPPOSTSCRIPTSTUFF__#define __PAPPOSTSCRIPTSTUFF__#ifdef __cplusplusextern "C" {#endif#if PRAGMA_ALIGN_SUPPORTED#pragma options align=mac68k#endif#if PRAGMA_IMPORT_SUPPORTED#pragma import on#endif#define kQueryPrefix	0x0D25253F#define kBeginQueryStr	"Query\015"#define kQueryStr		"Query: "#define kBeginStr		"Begin"#define kEndStr			"\015\045\045\077End"#define kEOFStr			"\015\045\045EOF\015"#define kReturnChar		0x0D#define kLineFeedChar	0x0A#define kSpaceChar		0x20enum {	kCaseMustMatch = 0,	kCaseMatchAll};enum {	kNoMatch = 0,	kPartialMatch 		= 0x0001,	kQueryPrefixFound 	= 0x0002,	kBeginEndStrFound 	= 0x0004,	kQueryStrFound 		= 0x0008,	kMatch 				= 0x000E};enum {	kFindBeginStr = 0,	kFindEndStr};// prototypesextern Boolean 		TestDataIsPSQuery(PacketPtr packetPtr);extern OSStatus 	ProcessPSQuery(PacketPtr packetPtr);extern Boolean 		DoProcessPSQuery(PacketPtr	packetPtr);extern Boolean 		IsPacketAPSQuery(PacketPtr packetPtr);extern UInt16		FindQueryString(PacketPtr packetPtr, SInt16 whichStr);extern UInt16		ProcessDefaultResponse(PacketPtr packetPtr);extern void 		SendEmptyPacket(PacketPtr packetPtr);#if PRAGMA_IMPORT_SUPPORTED#pragma import off#endif#if PRAGMA_ALIGN_SUPPORTED#pragma options align=reset#endif#ifdef __cplusplus}#endif#endif /* __PAPPOSTSCRIPTSTUFF__ */