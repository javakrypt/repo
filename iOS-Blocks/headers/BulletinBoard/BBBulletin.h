/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BulletinBoard-Structs.h"

@class BBAction, BBSound, BBAssertion, BBAttachments, NSString, NSDate, NSTimeZone, NSMutableDictionary, NSArray, NSDictionary, NSSet, BBContent, BBObserver;

@interface BBBulletin : NSObject <NSCopying, NSCoding> {
@private
	NSString *_sectionID;	// 4 = 0x4
	NSString *_publisherRecordID;	// 8 = 0x8
	NSString *_publisherBulletinID;	// 12 = 0xc
	int _addressBookRecordID;	// 16 = 0x10
	int _sectionSubtype;	// 20 = 0x14
	BBContent *_content;	// 24 = 0x18
	BBContent *_modalAlertContent;	// 28 = 0x1c
	NSDate *_date;	// 32 = 0x20
	NSDate *_endDate;	// 36 = 0x24
	NSDate *_recencyDate;	// 40 = 0x28
	int _dateFormatStyle;	// 44 = 0x2c
	BOOL _dateIsAllDay;	// 48 = 0x30
	NSTimeZone *_timeZone;	// 52 = 0x34
	int _accessoryStyle;	// 56 = 0x38
	BOOL _clearable;	// 60 = 0x3c
	BBSound *_sound;	// 64 = 0x40
	BBAttachments *_attachments;	// 68 = 0x44
	NSString *_unlockActionLabelOverride;	// 72 = 0x48
	NSMutableDictionary *_actions;	// 76 = 0x4c
	NSArray *_buttons;	// 80 = 0x50
	BOOL _expiresOnPublisherDeath;	// 84 = 0x54
	NSDictionary *_context;	// 88 = 0x58
	NSDate *_expirationDate;	// 92 = 0x5c
	NSString *_bulletinID;	// 96 = 0x60
	NSDate *_lastInterruptDate;	// 100 = 0x64
	BBAssertion *_lifeAssertion;	// 104 = 0x68
	BBObserver *_observer;	// 108 = 0x6c
	unsigned realertCount_deprecated;	// 112 = 0x70
	NSSet *alertSuppressionAppIDs_deprecated;	// 116 = 0x74
}
@property(copy, nonatomic) NSSet *alertSuppressionAppIDs_deprecated;	// G=0x3f91; S=0x3fa1; @synthesize
@property(assign, nonatomic) unsigned realertCount_deprecated;	// G=0x3f71; S=0x3f81; @synthesize
@property(retain, nonatomic) BBObserver *observer;	// G=0x3f3d; S=0x3f4d; @synthesize=_observer
@property(retain, nonatomic) BBAssertion *lifeAssertion;	// G=0x3f09; S=0x3f19; @synthesize=_lifeAssertion
@property(copy, nonatomic) BBAction *expireAction;	// G=0x24c9; S=0x24f1; 
@property(retain, nonatomic) NSDate *expirationDate;	// G=0x3e6d; S=0x3e7d; @synthesize=_expirationDate
@property(retain, nonatomic) NSMutableDictionary *actions;	// G=0x3dd5; S=0x3de5; @synthesize=_actions
@property(copy, nonatomic) NSString *unlockActionLabelOverride;	// G=0x3da1; S=0x3db1; @synthesize=_unlockActionLabelOverride
@property(retain, nonatomic) BBAttachments *attachments;	// G=0x22e1; S=0x3d7d; @synthesize=_attachments
@property(retain, nonatomic) BBContent *content;	// G=0x2215; S=0x3ba1; @synthesize=_content
@property(retain, nonatomic) NSDate *lastInterruptDate;	// G=0x3ed5; S=0x3ee5; @synthesize=_lastInterruptDate
@property(retain, nonatomic) NSDictionary *context;	// G=0x3e39; S=0x3e49; @synthesize=_context
@property(assign, nonatomic) BOOL expiresOnPublisherDeath;	// G=0x3e19; S=0x3e29; @synthesize=_expiresOnPublisherDeath
@property(copy, nonatomic) NSArray *buttons;	// G=0x3e09; S=0x2589; @synthesize=_buttons
@property(copy, nonatomic) BBAction *replyAction;	// G=0x2449; S=0x2471; 
@property(copy, nonatomic) BBAction *acknowledgeAction;	// G=0x23c9; S=0x23f1; 
@property(copy, nonatomic) BBAction *defaultAction;	// G=0x2349; S=0x2371; 
@property(readonly, assign, nonatomic) int primaryAttachmentType;	// G=0x2265; 
@property(retain, nonatomic) BBSound *sound;	// G=0x3d49; S=0x3d59; @synthesize=_sound
@property(assign, nonatomic) BOOL clearable;	// G=0x3d29; S=0x3d39; @synthesize=_clearable
@property(assign, nonatomic) int accessoryStyle;	// G=0x3d09; S=0x3d19; @synthesize=_accessoryStyle
@property(retain, nonatomic) NSTimeZone *timeZone;	// G=0x3cd5; S=0x3ce5; @synthesize=_timeZone
@property(assign, nonatomic) BOOL dateIsAllDay;	// G=0x3cb5; S=0x3cc5; @synthesize=_dateIsAllDay
@property(assign, nonatomic) int dateFormatStyle;	// G=0x3c95; S=0x3ca5; @synthesize=_dateFormatStyle
@property(retain, nonatomic) NSDate *recencyDate;	// G=0x3c61; S=0x3c71; @synthesize=_recencyDate
@property(retain, nonatomic) NSDate *endDate;	// G=0x3c2d; S=0x3c3d; @synthesize=_endDate
@property(retain, nonatomic) NSDate *date;	// G=0x3bf9; S=0x3c09; @synthesize=_date
@property(retain, nonatomic) BBContent *modalAlertContent;	// G=0x3bc5; S=0x3bd5; @synthesize=_modalAlertContent
@property(copy, nonatomic) NSString *message;	// G=0x2149; S=0x21d9; 
@property(copy, nonatomic) NSString *subtitle;	// G=0x2121; S=0x21ad; 
@property(copy, nonatomic) NSString *title;	// G=0x20f9; S=0x2181; 
@property(assign, nonatomic) int sectionSubtype;	// G=0x3b81; S=0x3b91; @synthesize=_sectionSubtype
@property(assign, nonatomic) int addressBookRecordID;	// G=0x3b61; S=0x3b71; @synthesize=_addressBookRecordID
@property(copy, nonatomic) NSString *publisherBulletinID;	// G=0x3b2d; S=0x3b3d; @synthesize=_publisherBulletinID
@property(copy, nonatomic) NSString *recordID;	// G=0x3af9; S=0x3b09; @synthesize=_publisherRecordID
@property(copy, nonatomic) NSString *sectionID;	// G=0x3ac5; S=0x3ad5; @synthesize=_sectionID
@property(copy, nonatomic) NSString *section;	// G=0x2171; S=0x2205; 
@property(copy, nonatomic) NSString *bulletinID;	// G=0x3ea1; S=0x3eb1; @synthesize=_bulletinID
+ (id)bulletinWithBulletin:(id)bulletin;	// 0x2011
// declared property setter: - (void)setAlertSuppressionAppIDs_deprecated:(id)deprecated;	// 0x3fa1
// declared property getter: - (id)alertSuppressionAppIDs_deprecated;	// 0x3f91
// declared property setter: - (void)setRealertCount_deprecated:(unsigned)deprecated;	// 0x3f81
// declared property getter: - (unsigned)realertCount_deprecated;	// 0x3f71
// declared property setter: - (void)setObserver:(id)observer;	// 0x3f4d
// declared property getter: - (id)observer;	// 0x3f3d
// declared property setter: - (void)setLifeAssertion:(id)assertion;	// 0x3f19
// declared property getter: - (id)lifeAssertion;	// 0x3f09
// declared property setter: - (void)setLastInterruptDate:(id)date;	// 0x3ee5
// declared property getter: - (id)lastInterruptDate;	// 0x3ed5
// declared property setter: - (void)setBulletinID:(id)anId;	// 0x3eb1
// declared property getter: - (id)bulletinID;	// 0x3ea1
// declared property setter: - (void)setExpirationDate:(id)date;	// 0x3e7d
// declared property getter: - (id)expirationDate;	// 0x3e6d
// declared property setter: - (void)setContext:(id)context;	// 0x3e49
// declared property getter: - (id)context;	// 0x3e39
// declared property setter: - (void)setExpiresOnPublisherDeath:(BOOL)death;	// 0x3e29
// declared property getter: - (BOOL)expiresOnPublisherDeath;	// 0x3e19
// declared property getter: - (id)buttons;	// 0x3e09
// declared property setter: - (void)setActions:(id)actions;	// 0x3de5
// declared property getter: - (id)actions;	// 0x3dd5
// declared property setter: - (void)setUnlockActionLabelOverride:(id)override;	// 0x3db1
// declared property getter: - (id)unlockActionLabelOverride;	// 0x3da1
// declared property setter: - (void)setAttachments:(id)attachments;	// 0x3d7d
// declared property setter: - (void)setSound:(id)sound;	// 0x3d59
// declared property getter: - (id)sound;	// 0x3d49
// declared property setter: - (void)setClearable:(BOOL)clearable;	// 0x3d39
// declared property getter: - (BOOL)clearable;	// 0x3d29
// declared property setter: - (void)setAccessoryStyle:(int)style;	// 0x3d19
// declared property getter: - (int)accessoryStyle;	// 0x3d09
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x3ce5
// declared property getter: - (id)timeZone;	// 0x3cd5
// declared property setter: - (void)setDateIsAllDay:(BOOL)day;	// 0x3cc5
// declared property getter: - (BOOL)dateIsAllDay;	// 0x3cb5
// declared property setter: - (void)setDateFormatStyle:(int)style;	// 0x3ca5
// declared property getter: - (int)dateFormatStyle;	// 0x3c95
// declared property setter: - (void)setRecencyDate:(id)date;	// 0x3c71
// declared property getter: - (id)recencyDate;	// 0x3c61
// declared property setter: - (void)setEndDate:(id)date;	// 0x3c3d
// declared property getter: - (id)endDate;	// 0x3c2d
// declared property setter: - (void)setDate:(id)date;	// 0x3c09
// declared property getter: - (id)date;	// 0x3bf9
// declared property setter: - (void)setModalAlertContent:(id)content;	// 0x3bd5
// declared property getter: - (id)modalAlertContent;	// 0x3bc5
// declared property setter: - (void)setContent:(id)content;	// 0x3ba1
// declared property setter: - (void)setSectionSubtype:(int)subtype;	// 0x3b91
// declared property getter: - (int)sectionSubtype;	// 0x3b81
// declared property setter: - (void)setAddressBookRecordID:(int)anId;	// 0x3b71
// declared property getter: - (int)addressBookRecordID;	// 0x3b61
// declared property setter: - (void)setPublisherBulletinID:(id)anId;	// 0x3b3d
// declared property getter: - (id)publisherBulletinID;	// 0x3b2d
// declared property setter: - (void)setRecordID:(id)anId;	// 0x3b09
// declared property getter: - (id)recordID;	// 0x3af9
// declared property setter: - (void)setSectionID:(id)anId;	// 0x3ad5
// declared property getter: - (id)sectionID;	// 0x3ac5
- (id)description;	// 0x39d5
- (void)encodeWithCoder:(id)coder;	// 0x35b9
- (id)initWithCoder:(id)coder;	// 0x302d
- (id)copyWithZone:(NSZone *)zone;	// 0x2fd5
- (void)_fillOutCopy:(id)copy withZone:(NSZone *)zone;	// 0x2b39
- (void)deliverResponse:(id)response;	// 0x2a49
- (id)responseSendBlock;	// 0x29bd
- (id)responseForExpireAction;	// 0x28fd
- (id)responseForButtonActionAtIndex:(unsigned)index;	// 0x28cd
- (id)responseForAcknowledgeAction;	// 0x28b1
- (id)responseForReplyAction;	// 0x2895
- (id)responseForDefaultAction;	// 0x2879
- (id)_responseForActionKey:(id)actionKey;	// 0x2761
// declared property setter: - (void)setButtons:(id)buttons;	// 0x2589
- (id)_actionKeyForButtonIndex:(unsigned)buttonIndex;	// 0x2549
// declared property setter: - (void)setExpireAction:(id)action;	// 0x24f1
// declared property getter: - (id)expireAction;	// 0x24c9
// declared property setter: - (void)setReplyAction:(id)action;	// 0x2471
// declared property getter: - (id)replyAction;	// 0x2449
// declared property setter: - (void)setAcknowledgeAction:(id)action;	// 0x23f1
// declared property getter: - (id)acknowledgeAction;	// 0x23c9
// declared property setter: - (void)setDefaultAction:(id)action;	// 0x2371
// declared property getter: - (id)defaultAction;	// 0x2349
- (id)attachmentsCreatingIfNecessary:(BOOL)necessary;	// 0x22f5
// declared property getter: - (id)attachments;	// 0x22e1
- (unsigned)numberOfAdditionalAttachmentsOfType:(int)type;	// 0x22b5
- (unsigned)numberOfAdditionalAttachments;	// 0x228d
// declared property getter: - (int)primaryAttachmentType;	// 0x2265
// declared property getter: - (id)content;	// 0x2215
// declared property setter: - (void)setSection:(id)section;	// 0x2205
// declared property setter: - (void)setMessage:(id)message;	// 0x21d9
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x21ad
// declared property setter: - (void)setTitle:(id)title;	// 0x2181
// declared property getter: - (id)section;	// 0x2171
// declared property getter: - (id)message;	// 0x2149
// declared property getter: - (id)subtitle;	// 0x2121
// declared property getter: - (id)title;	// 0x20f9
- (id)init;	// 0x2075
- (void)dealloc;	// 0x1df5
@end

@interface BBBulletin (SectionParameters)
@property(readonly, assign, nonatomic) int iPodOutAlertType;	// G=0x14e19; 
@property(readonly, assign, nonatomic) unsigned subtypePriority;	// G=0x14d9d; 
@property(readonly, assign, nonatomic) BOOL visuallyIndicatesWhenDateIsInFuture;	// G=0x14d21; 
@property(readonly, assign, nonatomic) BOOL bannerShowsSubtitle;	// G=0x14ca5; 
@property(readonly, assign, nonatomic) BOOL preservesUnlockActionCase;	// G=0x14c29; 
@property(readonly, assign, nonatomic) BOOL inertWhenLocked;	// G=0x14bad; 
@property(readonly, assign, nonatomic) unsigned realertCount;	// G=0x14b19; 
@property(readonly, assign, nonatomic) BOOL suppressesMessageForPrivacy;	// G=0x14a9d; 
@property(readonly, assign, nonatomic) BOOL coalescesWhenLocked;	// G=0x14a21; 
@property(readonly, assign, nonatomic) NSSet *alertSuppressionAppIDs;	// G=0x1498d; 
@property(readonly, assign, nonatomic) NSString *unlockActionLabel;	// G=0x148f9; 
@property(readonly, assign, nonatomic) NSString *fullUnlockActionLabel;	// G=0x1487d; 
@property(readonly, assign, nonatomic) NSString *missedBannerDescriptionFormat;	// G=0x14801; 
@property(readonly, assign, nonatomic) NSString *topic;	// G=0x14751; 
@property(readonly, assign, nonatomic) BOOL showsDateInFloatingLockScreenAlert;	// G=0x146fd; 
@property(readonly, assign, nonatomic) BOOL orderSectionUsingRecencyDate;	// G=0x146a9; 
@property(readonly, assign, nonatomic) BOOL usesVariableLayout;	// G=0x14655; 
@property(readonly, assign, nonatomic) unsigned messageNumberOfLines;	// G=0x14601; 
@property(readonly, assign, nonatomic) BOOL showsSubtitle;	// G=0x145ad; 
// declared property getter: - (int)iPodOutAlertType;	// 0x14e19
// declared property getter: - (unsigned)subtypePriority;	// 0x14d9d
// declared property getter: - (BOOL)visuallyIndicatesWhenDateIsInFuture;	// 0x14d21
// declared property getter: - (BOOL)bannerShowsSubtitle;	// 0x14ca5
// declared property getter: - (BOOL)preservesUnlockActionCase;	// 0x14c29
// declared property getter: - (BOOL)inertWhenLocked;	// 0x14bad
// declared property getter: - (unsigned)realertCount;	// 0x14b19
// declared property getter: - (BOOL)suppressesMessageForPrivacy;	// 0x14a9d
// declared property getter: - (BOOL)coalescesWhenLocked;	// 0x14a21
// declared property getter: - (id)alertSuppressionAppIDs;	// 0x1498d
// declared property getter: - (id)unlockActionLabel;	// 0x148f9
// declared property getter: - (id)fullUnlockActionLabel;	// 0x1487d
// declared property getter: - (id)missedBannerDescriptionFormat;	// 0x14801
// declared property getter: - (id)topic;	// 0x14751
// declared property getter: - (BOOL)showsDateInFloatingLockScreenAlert;	// 0x146fd
// declared property getter: - (BOOL)orderSectionUsingRecencyDate;	// 0x146a9
// declared property getter: - (BOOL)usesVariableLayout;	// 0x14655
// declared property getter: - (unsigned)messageNumberOfLines;	// 0x14601
// declared property getter: - (BOOL)showsSubtitle;	// 0x145ad
@end

@interface BBBulletin (Attachments)
- (CGSize)composedAttachmentImageSizeForKey:(id)key;	// 0x16911
- (id)composedAttachmentImageForKey:(id)key;	// 0x168c9
- (CGSize)composedAttachmentImageSize;	// 0x16899
- (id)composedAttachmentImage;	// 0x16879
@end
