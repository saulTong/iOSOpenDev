/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"

@interface SBUnknownSuperclass : NSObject
@end

@interface SBUnknownSuperclass (SBApplicationAdditions)
- (void)addObjectsFromDictionary:(id)dictionary forKeys:(id)keys;	// 0x41d35
@end

@interface SBUnknownSuperclass (SBArrayStackAdditions)
- (void)push:(id)push;	// 0x66825
- (id)pop;	// 0x6687d
- (id)popObject:(id)object;	// 0x668e9
- (id)top;	// 0x66949
@end

@interface SBUnknownSuperclass (Centerable)
- (void)centerToContentView;	// 0x8a4f5
@end

@interface SBUnknownSuperclass (PrefsNotifications)
- (void)addPrefNotification:(id)notification withUserInfo:(id)userInfo;	// 0x8cdd5
- (id)_callForwardingString:(id)string;	// 0x8ce35
- (id)_callWaitingString:(id)string;	// 0x8cfb9
- (id)_callBarringString:(id)string;	// 0x8d069
- (id)_fixedDialingString:(id)string;	// 0x8d131
- (id)_connectedLinePresentationString:(id)string;	// 0x8d221
- (id)_callingLinePresentationString:(id)string;	// 0x8d2bd
- (id)_connectedLineIDRestrictionString:(id)string;	// 0x8d359
- (id)_callingLineIDRestrictionString:(id)string;	// 0x8d3f5
- (id)_simLockString:(id)string;	// 0x8d491
- (id)_serviceCenterAddressString:(id)string;	// 0x8d52d
- (id)_ssPasswordString:(id)string;	// 0x8d5c9
- (id)_callingNamePresentationString:(id)string;	// 0x8d665
- (id)_alertStringForPref:(id)pref;	// 0x8d701
- (id)prefsNotificationsAlertString;	// 0x8dbc1
@end

@interface SBUnknownSuperclass (CTHelpers)
- (id)callClass;	// 0x8b8b5
- (id)callForwardingReason;	// 0x8bbc1
- (id)callBarringFacility;	// 0x8be19
- (id)callingLineIDRestrictionValue;	// 0x8c17d
- (id)callingLinePresentationValue;	// 0x8c39d
- (id)connectedLineIDRestrictionValue;	// 0x8c541
- (id)connectedLinePresentationValue;	// 0x8c689
- (id)enabledString;	// 0x8c82d
- (id)serviceCenterAddress;	// 0x8c8ed
- (id)ssServiceType;	// 0x8c965
- (id)mmiProcedure;	// 0x8ca71
- (CFStringRef)settingType;	// 0x8cc6d
- (id)callingNamePresentationValue;	// 0x8cc8d
@end

@interface SBUnknownSuperclass (AlertItemsAdditions)
- (id)objectOfClass:(Class)aClass;	// 0x979b9
- (void)addObjectsOfClass:(Class)aClass toArray:(id)array;	// 0x97a71
@end

@interface SBUnknownSuperclass (Formatting)
- (id)ICCID;	// 0xa22d5
- (id)IMEI;	// 0xa2379
@end

@interface SBUnknownSuperclass (SBIconListNumberOffset)
- (void)setCurrentPageWithIconListNumber:(int)iconListNumber;	// 0xb7d1c
- (void)setNumberOfPagesWithIconListCount:(int)iconListCount;	// 0xb7d30
@end

@interface SBUnknownSuperclass (SpringBoardMetadata)
- (id)cachedSoftwareType;	// 0xc767d
- (id)cachedBundleIdentifier;	// 0xc76b5
- (id)cachedApplicationIdentifier;	// 0xc76ed
- (BOOL)cachedArtworkIsPrerendered;	// 0xc7725
- (id)cachedTitle;	// 0xc775d
@end

@interface SBUnknownSuperclass (SBOptimizedCombination)
- (id)dictionaryByAddingEntriesFromDictionary:(id)dictionary;	// 0xcefa5
@end

@interface SBUnknownSuperclass (SBDeviceLockEntryFieldExtras)
- (BOOL)isSingleCharacterAndMemberOfSet:(CFCharacterSetRef)set;	// 0xf617d
- (BOOL)isNewline;	// 0xf6159
@end

@interface SBUnknownSuperclass (LastIndex)
- (unsigned)lastIndex;	// 0x1013bd
@end

@interface SBUnknownSuperclass (SBTypeSafety)
- (id)objectForKey:(id)key ofClass:(Class)aClass;	// 0x1127a5
@end

@interface SBUnknownSuperclass (SBAssistantUtilities)
- (BOOL)isAssistantTelephonyURL;	// 0x1a845d
@end
