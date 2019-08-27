#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NKKotlinException, NKKotlinArray, NKKotlinByteArray, NKKeyEventType, NKKeyEventCode, NKKotlinByteIterator, NKKotlinx_serialization_runtimeByteBuffer, NSData, NKKotlinx_serialization_runtimeByteOrder, CBCharacteristic, CBPeripheral, NKKotlinPair;

@protocol NKNotepadClientCallback, NKKotlinIterator;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface NKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface NKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface NKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface NKByte : NKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface NKUByte : NKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface NKShort : NKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface NKUShort : NKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface NKInt : NKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface NKUInt : NKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface NKLong : NKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface NKULong : NKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface NKFloat : NKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface NKDouble : NKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface NKBoolean : NKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Failure")))
@interface NKFailure : KotlinBase
- (instancetype)initWithE:(NKKotlinException *)e __attribute__((swift_name("init(e:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NKKotlinException *exception __attribute__((swift_name("exception")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger")))
@interface NKLogger : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logger __attribute__((swift_name("init()")));
- (void)vTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("v(tag:message:)")));
- (void)dTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("d(tag:message:)")));
- (void)iTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("i(tag:message:)")));
- (void)wTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("w(tag:message:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("e(tag:message:)")));
- (void)sTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("s(tag:message:)")));
@property BOOL isEnabled __attribute__((swift_name("isEnabled")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol NKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface NKKotlinEnum : KotlinBase <NKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(NKKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisconnectionCause")))
@interface NKDisconnectionCause : NKKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) NKDisconnectionCause *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) NKDisconnectionCause *unauthorized __attribute__((swift_name("unauthorized")));
@property (class, readonly) NKDisconnectionCause *unconfirmed __attribute__((swift_name("unconfirmed")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(NKDisconnectionCause *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface NKKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (NKKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface NKKotlinException : NKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("AccessException")))
@interface NKAccessException : NKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessException.Denied")))
@interface NKAccessExceptionDenied : NKAccessException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)denied __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessException.Unconfirmed")))
@interface NKAccessExceptionUnconfirmed : NKAccessException
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unconfirmed __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotepadScanResult")))
@interface NKNotepadScanResult : KotlinBase
- (instancetype)initWithName:(NSString * _Nullable)name deviceId:(NSString *)deviceId manufacturerData:(NKKotlinByteArray * _Nullable)manufacturerData rssi:(int32_t)rssi __attribute__((swift_name("init(name:deviceId:manufacturerData:rssi:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NKKotlinByteArray * _Nullable)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (NKNotepadScanResult *)doCopyName:(NSString * _Nullable)name deviceId:(NSString *)deviceId manufacturerData:(NKKotlinByteArray * _Nullable)manufacturerData rssi:(int32_t)rssi __attribute__((swift_name("doCopy(name:deviceId:manufacturerData:rssi:)")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString *deviceId __attribute__((swift_name("deviceId")));
@property (readonly) NKKotlinByteArray * _Nullable manufacturerData __attribute__((swift_name("manufacturerData")));
@property (readonly) int32_t rssi __attribute__((swift_name("rssi")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotepadMode")))
@interface NKNotepadMode : NKKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) NKNotepadMode *sync __attribute__((swift_name("sync")));
@property (class, readonly) NKNotepadMode *common __attribute__((swift_name("common")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(NKNotepadMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotePenPointer")))
@interface NKNotePenPointer : KotlinBase
- (instancetype)initWithX:(int32_t)x y:(int32_t)y t:(int64_t)t p:(int32_t)p __attribute__((swift_name("init(x:y:t:p:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (NKNotePenPointer *)doCopyX:(int32_t)x y:(int32_t)y t:(int64_t)t p:(int32_t)p __attribute__((swift_name("doCopy(x:y:t:p:)")));
@property (readonly) int32_t x __attribute__((swift_name("x")));
@property (readonly) int32_t y __attribute__((swift_name("y")));
@property (readonly) int64_t t __attribute__((swift_name("t")));
@property (readonly) int32_t p __attribute__((swift_name("p")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotePenPointer.Companion")))
@interface NKNotePenPointerCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (NKKotlinArray *)createBytes:(NKKotlinByteArray *)bytes __attribute__((swift_name("create(bytes:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BatteryInfo")))
@interface NKBatteryInfo : KotlinBase
- (instancetype)initWithPercent:(int32_t)percent charging:(BOOL)charging __attribute__((swift_name("init(percent:charging:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NKBatteryInfo *)doCopyPercent:(int32_t)percent charging:(BOOL)charging __attribute__((swift_name("doCopy(percent:charging:)")));
@property (readonly) int32_t percent __attribute__((swift_name("percent")));
@property (readonly) BOOL charging __attribute__((swift_name("charging")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Version")))
@interface NKVersion : KotlinBase
- (instancetype)initWithMajor:(int32_t)major minor:(NKInt * _Nullable)minor patch:(NKInt * _Nullable)patch __attribute__((swift_name("init(major:minor:patch:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NKInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NKInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NKVersion *)doCopyMajor:(int32_t)major minor:(NKInt * _Nullable)minor patch:(NKInt * _Nullable)patch __attribute__((swift_name("doCopy(major:minor:patch:)")));
@property (readonly) NKKotlinByteArray *bytes __attribute__((swift_name("bytes")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) NKInt * _Nullable minor __attribute__((swift_name("minor")));
@property (readonly) NKInt * _Nullable patch __attribute__((swift_name("patch")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VersionInfo")))
@interface NKVersionInfo : KotlinBase
- (instancetype)initWithHardware:(NKVersion *)hardware software:(NKVersion *)software __attribute__((swift_name("init(hardware:software:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NKVersion *)component1 __attribute__((swift_name("component1()")));
- (NKVersion *)component2 __attribute__((swift_name("component2()")));
- (NKVersionInfo *)doCopyHardware:(NKVersion *)hardware software:(NKVersion *)software __attribute__((swift_name("doCopy(hardware:software:)")));
@property (readonly) NKVersion *hardware __attribute__((swift_name("hardware")));
@property (readonly) NKVersion *software __attribute__((swift_name("software")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemoSummary")))
@interface NKMemoSummary : KotlinBase
- (instancetype)initWithMemoCount:(int32_t)memoCount totalCapacity:(int64_t)totalCapacity freeCapacity:(int64_t)freeCapacity usedCapacity:(int64_t)usedCapacity __attribute__((swift_name("init(memoCount:totalCapacity:freeCapacity:usedCapacity:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (int64_t)component4 __attribute__((swift_name("component4()")));
- (NKMemoSummary *)doCopyMemoCount:(int32_t)memoCount totalCapacity:(int64_t)totalCapacity freeCapacity:(int64_t)freeCapacity usedCapacity:(int64_t)usedCapacity __attribute__((swift_name("doCopy(memoCount:totalCapacity:freeCapacity:usedCapacity:)")));
@property (readonly) int32_t memoCount __attribute__((swift_name("memoCount")));
@property (readonly) int64_t totalCapacity __attribute__((swift_name("totalCapacity")));
@property (readonly) int64_t freeCapacity __attribute__((swift_name("freeCapacity")));
@property (readonly) int64_t usedCapacity __attribute__((swift_name("usedCapacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemoInfo")))
@interface NKMemoInfo : KotlinBase
- (instancetype)initWithSizeInByte:(int64_t)sizeInByte createdAt:(int64_t)createdAt partIndex:(int32_t)partIndex restCount:(int32_t)restCount __attribute__((swift_name("init(sizeInByte:createdAt:partIndex:restCount:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (NKMemoInfo *)doCopySizeInByte:(int64_t)sizeInByte createdAt:(int64_t)createdAt partIndex:(int32_t)partIndex restCount:(int32_t)restCount __attribute__((swift_name("doCopy(sizeInByte:createdAt:partIndex:restCount:)")));
@property (readonly) int64_t sizeInByte __attribute__((swift_name("sizeInByte")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) int32_t partIndex __attribute__((swift_name("partIndex")));
@property (readonly) int32_t restCount __attribute__((swift_name("restCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemoData")))
@interface NKMemoData : KotlinBase
- (instancetype)initWithMemoInfo:(NKMemoInfo *)memoInfo pointers:(NSArray<NKNotePenPointer *> *)pointers __attribute__((swift_name("init(memoInfo:pointers:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NKMemoInfo *)component1 __attribute__((swift_name("component1()")));
- (NSArray<NKNotePenPointer *> *)component2 __attribute__((swift_name("component2()")));
- (NKMemoData *)doCopyMemoInfo:(NKMemoInfo *)memoInfo pointers:(NSArray<NKNotePenPointer *> *)pointers __attribute__((swift_name("doCopy(memoInfo:pointers:)")));
@property (readonly) NKMemoInfo *memoInfo __attribute__((swift_name("memoInfo")));
@property (readonly) NSArray<NKNotePenPointer *> *pointers __attribute__((swift_name("pointers")));
@end;

__attribute__((swift_name("NotepadMessage")))
@interface NKNotepadMessage : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotepadMessage.KeyEvent")))
@interface NKNotepadMessageKeyEvent : NKNotepadMessage
- (instancetype)initWithType:(NKKeyEventType *)type code:(NKKeyEventCode *)code __attribute__((swift_name("init(type:code:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NKKeyEventType *)component1 __attribute__((swift_name("component1()")));
- (NKKeyEventCode *)component2 __attribute__((swift_name("component2()")));
- (NKNotepadMessageKeyEvent *)doCopyType:(NKKeyEventType *)type code:(NKKeyEventCode *)code __attribute__((swift_name("doCopy(type:code:)")));
@property (readonly) NKKeyEventType *type __attribute__((swift_name("type")));
@property (readonly) NKKeyEventCode *code __attribute__((swift_name("code")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotepadMessage.ChargingStatusChange")))
@interface NKNotepadMessageChargingStatusChange : NKNotepadMessage
- (instancetype)initWithCharging:(BOOL)charging __attribute__((swift_name("init(charging:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NKNotepadMessageChargingStatusChange *)doCopyCharging:(BOOL)charging __attribute__((swift_name("doCopy(charging:)")));
@property (readonly) BOOL charging __attribute__((swift_name("charging")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeyEventCode")))
@interface NKKeyEventCode : NKKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) NKKeyEventCode *main __attribute__((swift_name("main")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(NKKeyEventCode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeyEventType")))
@interface NKKeyEventType : NKKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) NKKeyEventType *keydown __attribute__((swift_name("keydown")));
@property (class, readonly) NKKeyEventType *keyup __attribute__((swift_name("keyup")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(NKKeyEventType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("NotepadClient")))
@interface NKNotepadClient : KotlinBase
- (instancetype)initWithAuthToken:(NKKotlinByteArray * _Nullable)authToken __attribute__((swift_name("init(authToken:)"))) __attribute__((objc_designated_initializer));
- (void)claimAuthComplete:(void (^)(void))complete error:(void (^)(NKFailure *))error __attribute__((swift_name("claimAuth(complete:error:)")));
- (void)disclaimAuthComplete:(void (^)(void))complete error:(void (^)(NKFailure *))error __attribute__((swift_name("disclaimAuth(complete:error:)")));
- (void)getDeviceNameSuccess:(void (^)(NSString *))success error:(void (^)(NKFailure *))error __attribute__((swift_name("getDeviceName(success:error:)")));
- (void)setDeviceNameTo:(NSString *)to complete:(void (^)(void))complete error:(void (^)(NKFailure *))error __attribute__((swift_name("setDeviceName(to:complete:error:)")));
- (void)getBatteryInfoSuccess:(void (^)(NKBatteryInfo *))success error:(void (^)(NKFailure *))error __attribute__((swift_name("getBatteryInfo(success:error:)")));
- (void)getDeviceDateSuccess:(void (^)(NKLong *))success error:(void (^)(NKFailure *))error __attribute__((swift_name("getDeviceDate(success:error:)")));
- (void)setDeviceDateTo:(int64_t)to complete:(void (^)(void))complete error:(void (^)(NKFailure *))error __attribute__((swift_name("setDeviceDate(to:complete:error:)")));
- (void)getAutoLockTimeSuccess:(void (^)(NKInt *))success error:(void (^)(NKFailure *))error __attribute__((swift_name("getAutoLockTime(success:error:)")));
- (void)setAutoLockTimeTo:(int32_t)to complete:(void (^)(void))complete error:(void (^)(NKFailure *))error __attribute__((swift_name("setAutoLockTime(to:complete:error:)")));
- (void)getVersionInfoSuccess:(void (^)(NKVersionInfo *))success error:(void (^)(NKFailure *))error __attribute__((swift_name("getVersionInfo(success:error:)")));
- (void)setModeTo:(NKNotepadMode *)to complete:(void (^)(void))complete error:(void (^)(NKFailure *))error __attribute__((swift_name("setMode(to:complete:error:)")));
- (NKKotlinArray *)parseSyncDataBytes:(NKKotlinByteArray *)bytes __attribute__((swift_name("parseSyncData(bytes:)")));
- (void)getMemoSummarySuccess:(void (^)(NKMemoSummary *))success error:(void (^)(NKFailure *))error __attribute__((swift_name("getMemoSummary(success:error:)")));
- (void)getMemoInfoSuccess:(void (^)(NKMemoInfo *))success error:(void (^)(NKFailure *))error __attribute__((swift_name("getMemoInfo(success:error:)")));
- (void)importMemoProgress:(void (^)(NKInt *))progress success:(void (^)(NKMemoData *))success error:(void (^)(NKFailure *))error __attribute__((swift_name("importMemo(progress:success:error:)")));
- (void)deleteMemoComplete:(void (^)(void))complete error:(void (^)(NKFailure *))error __attribute__((swift_name("deleteMemo(complete:error:)")));
- (void)upgradeWith:(NSString *)with version:(NKVersion *)version progress:(void (^)(NKInt *))progress complete:(void (^)(void))complete error:(void (^)(NKFailure *))error __attribute__((swift_name("upgrade(with:version:progress:complete:error:)")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property id<NKNotepadClientCallback> _Nullable callback __attribute__((swift_name("callback")));
@property (readonly) NKKotlinByteArray * _Nullable authToken __attribute__((swift_name("authToken")));
@end;

__attribute__((swift_name("NotepadClientCallback")))
@protocol NKNotepadClientCallback
@required
- (void)handlePointerList:(NSArray<NKNotePenPointer *> *)list __attribute__((swift_name("handlePointer(list:)")));
- (void)handleEventMessage:(NKNotepadMessage *)message __attribute__((swift_name("handleEvent(message:)")));
@end;

__attribute__((swift_name("NotepadCommand")))
@interface NKNotepadCommand : KotlinBase
- (instancetype)initWithRequest:(NKKotlinByteArray *)request intercept:(NKBoolean *(^)(NKKotlinByteArray *))intercept handle:(id _Nullable (^)(NKKotlinByteArray *))handle __attribute__((swift_name("init(request:intercept:handle:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NKKotlinByteArray *request __attribute__((swift_name("request")));
@property (readonly) NKBoolean *(^intercept)(NKKotlinByteArray *) __attribute__((swift_name("intercept")));
@property (readonly) id _Nullable (^handle)(NKKotlinByteArray *) __attribute__((swift_name("handle")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BleInputProperty")))
@interface NKBleInputProperty : NKKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) NKBleInputProperty *disabled __attribute__((swift_name("disabled")));
@property (class, readonly) NKBleInputProperty *notification __attribute__((swift_name("notification")));
@property (class, readonly) NKBleInputProperty *indication __attribute__((swift_name("indication")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(NKBleInputProperty *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BleOutputProperty")))
@interface NKBleOutputProperty : NKKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) NKBleOutputProperty *withresponse __attribute__((swift_name("withresponse")));
@property (class, readonly) NKBleOutputProperty *withoutresponse __attribute__((swift_name("withoutresponse")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(NKBleOutputProperty *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BleConnectionPriority")))
@interface NKBleConnectionPriority : NKKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) NKBleConnectionPriority *balanced __attribute__((swift_name("balanced")));
@property (class, readonly) NKBleConnectionPriority *high __attribute__((swift_name("high")));
@property (class, readonly) NKBleConnectionPriority *lowpower __attribute__((swift_name("lowpower")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(NKBleConnectionPriority *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("NotepadScanDelegate")))
@protocol NKNotepadScanDelegate
@required
- (void)didChangeState:(BOOL)state __attribute__((swift_name("didChange(state:)")));
- (void)didDiscoverNotepadScanResult:(NKNotepadScanResult *)notepadScanResult __attribute__((swift_name("didDiscover(notepadScanResult:)")));
@end;

__attribute__((swift_name("NotepadConnectionDelegate")))
@protocol NKNotepadConnectionDelegate
@required
- (void)willConnectNotepadClient:(NKNotepadClient *)notepadClient __attribute__((swift_name("willConnect(notepadClient:)")));
- (void)awaitConfirmNotepadClient:(NKNotepadClient *)notepadClient __attribute__((swift_name("awaitConfirm(notepadClient:)")));
- (void)didConnectNotepadClient:(NKNotepadClient *)notepadClient __attribute__((swift_name("didConnect(notepadClient:)")));
- (void)didDisconnectNotepadClient:(NKNotepadClient *)notepadClient cause:(NKDisconnectionCause *)cause __attribute__((swift_name("didDisconnect(notepadClient:cause:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotepadConnector")))
@interface NKNotepadConnector : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notepadConnector __attribute__((swift_name("init()")));
- (void)startScan __attribute__((swift_name("startScan()")));
- (void)stopScan __attribute__((swift_name("stopScan()")));
- (void)connectTo:(NKNotepadScanResult *)to authToken:(NKKotlinByteArray * _Nullable)authToken __attribute__((swift_name("connect(to:authToken:)")));
- (void)disconnect __attribute__((swift_name("disconnect()")));
@property id<NKNotepadScanDelegate> _Nullable scanDelegate __attribute__((swift_name("scanDelegate")));
@property (readonly) BOOL isEnabled __attribute__((swift_name("isEnabled")));
@property id<NKNotepadConnectionDelegate> _Nullable connectionDelegate __attribute__((swift_name("connectionDelegate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LongTagValue")))
@interface NKLongTagValue : KotlinBase
- (instancetype)initWithTag:(int16_t)tag value:(NKKotlinByteArray *)value __attribute__((swift_name("init(tag:value:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int16_t)component1 __attribute__((swift_name("component1()")));
- (NKKotlinByteArray *)component2 __attribute__((swift_name("component2()")));
- (NKLongTagValue *)doCopyTag:(int16_t)tag value:(NKKotlinByteArray *)value __attribute__((swift_name("doCopy(tag:value:)")));
@property (readonly) NKKotlinByteArray *bytes __attribute__((swift_name("bytes")));
@property (readonly) int16_t tag __attribute__((swift_name("tag")));
@property (readonly) NKKotlinByteArray *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LongTagValue.Companion")))
@interface NKLongTagValueCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (NSDictionary<NKInt *, NKLongTagValue *> *)scanBytes:(NKKotlinByteArray *)bytes __attribute__((swift_name("scan(bytes:)")));
@property (readonly) int32_t HEADER_LENGTH __attribute__((swift_name("HEADER_LENGTH")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sample")))
@interface NKSample : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)checkMe __attribute__((swift_name("checkMe()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface NKPlatform : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platform __attribute__((swift_name("init()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface NKKotlinByteArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(NKByte *(^)(NKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface NKKotlinByteArray (Extensions)
- (BOOL)startWithPrefix:(NKKotlinByteArray *)prefix __attribute__((swift_name("startWith(prefix:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)toByteBuffer __attribute__((swift_name("toByteBuffer()")));
- (NSData *)toNSData __attribute__((swift_name("toNSData()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeByteBuffer")))
@interface NKKotlinx_serialization_runtimeByteBuffer : KotlinBase
- (NKKotlinByteArray *)array __attribute__((swift_name("array()")));
- (NKKotlinx_serialization_runtimeByteBuffer *)clear __attribute__((swift_name("clear()")));
- (NKKotlinx_serialization_runtimeByteBuffer *)flip __attribute__((swift_name("flip()")));
- (int8_t)get __attribute__((swift_name("get()")));
- (void)getDst:(NKKotlinByteArray *)dst offset:(int32_t)offset cnt:(int32_t)cnt __attribute__((swift_name("get(dst:offset:cnt:)")));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (unichar)getChar __attribute__((swift_name("getChar()")));
- (unichar)getCharIndex:(int32_t)index __attribute__((swift_name("getChar(index:)")));
- (double)getDouble __attribute__((swift_name("getDouble()")));
- (double)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (float)getFloat __attribute__((swift_name("getFloat()")));
- (float)getFloatIndex:(int32_t)index __attribute__((swift_name("getFloat(index:)")));
- (int32_t)getInt __attribute__((swift_name("getInt()")));
- (int32_t)getIntIndex:(int32_t)index __attribute__((swift_name("getInt(index:)")));
- (int64_t)getLong __attribute__((swift_name("getLong()")));
- (int64_t)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (int16_t)getShort __attribute__((swift_name("getShort()")));
- (int16_t)getShortIndex:(int32_t)index __attribute__((swift_name("getShort(index:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)orderOrder:(NKKotlinx_serialization_runtimeByteOrder *)order __attribute__((swift_name("order(order:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)putValue:(int8_t)value __attribute__((swift_name("put(value:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)putValue:(int8_t)value index:(int32_t)index __attribute__((swift_name("put(value:index:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)putSrc:(NKKotlinByteArray *)src __attribute__((swift_name("put(src:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)putSrc:(NKKotlinByteArray *)src offset:(int32_t)offset cnt:(int32_t)cnt __attribute__((swift_name("put(src:offset:cnt:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)putCharValue:(unichar)value __attribute__((swift_name("putChar(value:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)putCharValue:(unichar)value index:(int32_t)index __attribute__((swift_name("putChar(value:index:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)putDoubleValue:(double)value __attribute__((swift_name("putDouble(value:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)putDoubleValue:(double)value index:(int32_t)index __attribute__((swift_name("putDouble(value:index:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)putFloatValue:(float)value __attribute__((swift_name("putFloat(value:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)putFloatValue:(float)value index:(int32_t)index __attribute__((swift_name("putFloat(value:index:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)putIntValue:(int32_t)value __attribute__((swift_name("putInt(value:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)putIntValue:(int32_t)value index:(int32_t)index __attribute__((swift_name("putInt(value:index:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)putLongValue:(int64_t)value __attribute__((swift_name("putLong(value:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)putLongValue:(int64_t)value index:(int32_t)index __attribute__((swift_name("putLong(value:index:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)putShortValue:(int16_t)value __attribute__((swift_name("putShort(value:)")));
- (NKKotlinx_serialization_runtimeByteBuffer *)putShortValue:(int16_t)value index:(int32_t)index __attribute__((swift_name("putShort(value:index:)")));
@end;

@interface NKKotlinx_serialization_runtimeByteBuffer (Extensions)
- (void)readByteArray:(NKKotlinByteArray *)byteArray __attribute__((swift_name("read(byteArray:)")));
@property (readonly) uint8_t uint8 __attribute__((swift_name("uint8")));
@property (readonly) int32_t uint16Le __attribute__((swift_name("uint16Le")));
@property (readonly) int64_t uint32Le __attribute__((swift_name("uint32Le")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ByteArray_ExtensionsKt")))
@interface NKByteArray_ExtensionsKt : KotlinBase
+ (NKKotlinx_serialization_runtimeByteBuffer *)toByteBuffer:(NSArray<NKByte *> *)receiver __attribute__((swift_name("toByteBuffer(_:)")));
+ (NKKotlinByteArray *)decodeHex:(NSString *)receiver __attribute__((swift_name("decodeHex(_:)")));
+ (NKKotlinByteArray *)toByteArray:(int16_t)receiver byteOrder:(NKKotlinx_serialization_runtimeByteOrder *)byteOrder __attribute__((swift_name("toByteArray(_:byteOrder:)")));
+ (NKKotlinByteArray *)toByteArray:(int32_t)receiver byteOrder_:(NKKotlinx_serialization_runtimeByteOrder *)byteOrder __attribute__((swift_name("toByteArray(_:byteOrder_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilsKt")))
@interface NKUtilsKt : KotlinBase
+ (int16_t)crc16Src:(NKKotlinByteArray *)src __attribute__((swift_name("crc16(src:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilsIosKt")))
@interface NKUtilsIosKt : KotlinBase
+ (NSString *)readUTF8TextPath:(NSString *)path __attribute__((swift_name("readUTF8Text(path:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotepadClientKt")))
@interface NKNotepadClientKt : KotlinBase
@property (class, readonly) NSString *GSS_SUFFIX __attribute__((swift_name("GSS_SUFFIX")));
@property (class, readonly) NSString *CODE__SERV_BATTERY __attribute__((swift_name("CODE__SERV_BATTERY")));
@property (class, readonly) NSString *CODE__CHAR_BATTERY_LEVEL __attribute__((swift_name("CODE__CHAR_BATTERY_LEVEL")));
@property (class, readonly) NSString *SERV__BATTERY __attribute__((swift_name("SERV__BATTERY")));
@property (class, readonly) NSString *CHAR__BATTERY_LEVEL __attribute__((swift_name("CHAR__BATTERY_LEVEL")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotepadCommandKt")))
@interface NKNotepadCommandKt : KotlinBase
@property (class, readonly) int64_t COMMAND_TIMEOUT_MS __attribute__((swift_name("COMMAND_TIMEOUT_MS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotepadTypeKt")))
@interface NKNotepadTypeKt : KotlinBase
@property (class, readonly) int32_t GATT_HEADER_LENGTH __attribute__((swift_name("GATT_HEADER_LENGTH")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSData_ExtensionsKt")))
@interface NKNSData_ExtensionsKt : KotlinBase
+ (NKKotlinByteArray *)toByteArray:(NSData *)receiver __attribute__((swift_name("toByteArray(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotepadTypeIosKt")))
@interface NKNotepadTypeIosKt : KotlinBase
+ (CBCharacteristic * _Nullable)getCharacteristic:(CBPeripheral *)receiver serviceCharacteristic:(NKKotlinPair *)serviceCharacteristic __attribute__((swift_name("getCharacteristic(_:serviceCharacteristic:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleKt")))
@interface NKSampleKt : KotlinBase
+ (NSString *)hello __attribute__((swift_name("hello()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface NKKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(NKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<NKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol NKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface NKKotlinByteIterator : KotlinBase <NKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NKByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeByteOrder")))
@interface NKKotlinx_serialization_runtimeByteOrder : NKKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) NKKotlinx_serialization_runtimeByteOrder *littleEndian __attribute__((swift_name("littleEndian")));
@property (class, readonly) NKKotlinx_serialization_runtimeByteOrder *bigEndian __attribute__((swift_name("bigEndian")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(NKKotlinx_serialization_runtimeByteOrder *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface NKKotlinPair : KotlinBase
- (instancetype)initWithFirst:(id _Nullable)first second:(id _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (NKKotlinPair *)doCopyFirst:(id _Nullable)first second:(id _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) id _Nullable first __attribute__((swift_name("first")));
@property (readonly) id _Nullable second __attribute__((swift_name("second")));
@end;

NS_ASSUME_NONNULL_END
