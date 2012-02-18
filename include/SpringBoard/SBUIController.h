/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIWindowDelegate.h"
#import "SpringBoard-Structs.h"
#import "SBUnknownSuperclass.h"

@class SBWallpaperView, SBAppToAppTransitionController, SBDismissOnlyAlertItem, SBApplication, UIWindow, UIView, SBWallpaper, SBZoomView, UIStatusBar, UIStatusBarCorners, NSMutableDictionary, NSArray, MPAudioDeviceController, SBAnimationStepper, SBSwitchAppGestureView, SBShowcaseController, SBUIRootView, NSMutableArray;

@interface SBUIController : SBUnknownSuperclass <UIWindowDelegate> {
	UIWindow *_window;	// 4 = 0x4
	UIView *_iconsView;	// 8 = 0x8
	SBUIRootView *_rootView;	// 12 = 0xc
	UIView *_contentView;	// 16 = 0x10
	SBWallpaper *_wallpaper;	// 20 = 0x14
	SBWallpaperView *_wallpaperView;	// 24 = 0x18
	SBZoomView *_zoomLayer;	// 28 = 0x1c
	UIStatusBar *_fakeSpringBoardStatusBar;	// 32 = 0x20
	UIStatusBarCorners *_fakeRedTopCorners;	// 36 = 0x24
	UIView *_fakeZoomBanner;	// 40 = 0x28
	SBShowcaseController *_showcaseController;	// 44 = 0x2c
	SBApplication *_showcaseHostedApp;	// 48 = 0x30
	SBApplication *_toggleSwitcherAfterLaunchApp;	// 52 = 0x34
	SBAppToAppTransitionController *_appToAppTransitionController;	// 56 = 0x38
	unsigned _rootViewHidden : 1;	// 60 = 0x3c
	unsigned _stealingEvents : 1;	// 60 = 0x3c
	unsigned _ignoringEvents : 1;	// 60 = 0x3c
	unsigned _restoringIconList : 1;	// 60 = 0x3c
	unsigned _lastVolumeDownToControl : 1;	// 60 = 0x3c
	unsigned _isBatteryCharging : 1;	// 60 = 0x3c
	unsigned _isOnAC : 1;	// 60 = 0x3c
	unsigned _connectedToUnusableFirewire : 1;	// 60 = 0x3c
	unsigned _isConnectedToChargeIncapablePowerSource : 1;	// 61 = 0x3d
	unsigned _allowAlertWindowRotation : 1;	// 61 = 0x3d
	unsigned _showingZoomLayerForCrossfade : 1;	// 61 = 0x3d
	unsigned _showcaseAnimating : 1;	// 61 = 0x3d
	id _volumeHandler;	// 64 = 0x40
	float _batteryCapacity;	// 68 = 0x44
	float _curvedBatteryCapacity;	// 72 = 0x48
	int _batteryLoggingStartCapacity;	// 76 = 0x4c
	SBDismissOnlyAlertItem *_fwChargingAlert;	// 80 = 0x50
	NSMutableDictionary *_installedSystemGestureViews;	// 84 = 0x54
	SBAnimationStepper *_suspendAnimationStepper;	// 88 = 0x58
	SBAnimationStepper *_statusBarAnimationStepper;	// 92 = 0x5c
	id _suspendGestureCompleteForwardToEndHandler;	// 96 = 0x60
	id _suspendGestureCompleteBackwardToStartHandler;	// 100 = 0x64
	BOOL _switcherVisibleWhenSuspendGestureStarted;	// 104 = 0x68
	BOOL _switcherAnimationRevealing;	// 105 = 0x69
	BOOL _switcherAnimationInProgress;	// 106 = 0x6a
	BOOL _switcherGestureRevealedOrDismissedSwitcher;	// 107 = 0x6b
	SBSwitchAppGestureView *_switchAppGestureView;	// 108 = 0x6c
	UIView *_systemGestureBackdrop;	// 112 = 0x70
	UIView *_pendingGestureLaunchView;	// 116 = 0x74
	SBApplication *_pendingAppActivatedByGesture;	// 120 = 0x78
	NSMutableArray *_switchAppFullyOrderedList;	// 124 = 0x7c
	NSArray *_switchAppFilteredList;	// 128 = 0x80
	unsigned _switchAppGestureStatusBarMaintenanceBits;	// 132 = 0x84
	BOOL _switchAppGestureStatusBarMaintained;	// 136 = 0x88
	BOOL _switcherVisibleWhenSwitchAppGestureStarted;	// 137 = 0x89
	BOOL _toggleSwitcherAfterLaunchAppUsesSystemGestureOrientation;	// 138 = 0x8a
	BOOL _keyboardNeedsShowcaseTranslation;	// 139 = 0x8b
	BOOL _unprocessedKeyboardOrientationChangeForShowcase;	// 140 = 0x8c
	BOOL _showNotificationsGestureIsShowingTab;	// 141 = 0x8d
	MPAudioDeviceController *_tempAudioDeviceController;	// 144 = 0x90
}
@property(retain, nonatomic) SBShowcaseController *showcaseController;	// G=0x13689; S=0x13e21; @synthesize=_showcaseController
@property(assign) BOOL isConnectedToUnusableFirewireCharger;	// G=0x13619; S=0x19fc5; converted property
@property(readonly, retain) UIWindow *window;	// G=0x13509; converted property
@property(readonly, retain) SBUIRootView *rootView;	// G=0x134e9; converted property
@property(readonly, retain) UIView *contentView;	// G=0x134f9; converted property
@property(readonly, retain) SBWallpaperView *wallpaperView;	// G=0x13519; converted property
@property(readonly, assign) float batteryCapacity;	// G=0x135bd; converted property
@property(readonly, assign) float curvedBatteryCapacity;	// G=0x135cd; converted property
+ (int)displayedLevelForLockScreenBatteryLevel:(int)lockScreenBatteryLevel;	// 0x14ccd
+ (id)sharedInstance;	// 0x14c85
+ (id)sharedInstanceIfExists;	// 0x134d9
- (void)_indicateConnectedToPower;	// 0x13699
- (void)dealloc;	// 0x23ae9
- (id)init;	// 0x2348d
- (void)animateAppleDown:(BOOL)down;	// 0x230bd
- (void)finishLaunching;	// 0x22f35
- (void)systemControllerRouteChanged:(id)changed;	// 0x22edd
- (void)_retryLockFromSource:(id)source;	// 0x13749
- (void)lockFromSource:(int)source;	// 0x228d9
- (void)cleanUpAfterZoomAnimation;	// 0x22789
- (void)cleanUpAfterSlideAnimation;	// 0x2275d
- (void)cleanUpOnFrontLocked;	// 0x1377d
- (void)clearZoomLayer;	// 0x137c5
- (void)createFakeSpringBoardStatusBar;	// 0x22675
- (void)createFakeRedTopCorners;	// 0x13845
- (void)clearFakeSpringBoardStatusBarAndCorners;	// 0x138f5
- (void)setFakeSpringBoardStatusBarVisible:(BOOL)visible;	// 0x13969
- (void)setFakeRedTopCornersVisible:(BOOL)visible;	// 0x139ad
- (void)_clearZoomBanner;	// 0x139f1
// converted property getter: - (id)rootView;	// 0x134e9
// converted property getter: - (id)contentView;	// 0x134f9
// converted property getter: - (id)window;	// 0x13509
- (void)setShouldRasterizeAndFreezeContentView:(BOOL)rasterizeAndFreezeContentView;	// 0x225b9
- (void)_updateWallpaperImageAndShow:(BOOL)show;	// 0x224a5
// converted property getter: - (id)wallpaperView;	// 0x13519
- (BOOL)isDisplayingWallpaper;	// 0x13529
- (void)launchIcon:(id)icon;	// 0x13a31
- (void)activateApplicationAnimated:(id)animated;	// 0x22435
- (void)activateApplicationFromSwitcher:(id)switcher;	// 0x223dd
- (void)activateURLFromBulletinList:(id)bulletinList;	// 0x223a1
- (void)_lockOrientationForTransition;	// 0x13c25
- (void)_lockOrientationForSystemGesture;	// 0x22359
- (void)releaseSwitcherOrientationLockUnlessPrintViewIsShowing;	// 0x13c65
- (void)_releaseSystemGestureOrientationLock;	// 0x13ccd
- (void)_releaseTransitionOrientationLock;	// 0x13d0d
- (void)_clearTempAudioDeviceController;	// 0x13d4d
- (void)_airPlayPasswordAlertWillAppear:(id)_airPlayPasswordAlert;	// 0x13d91
- (void)_airPlayPasswordAlertWillDisappear:(id)_airPlayPasswordAlert;	// 0x13e11
// declared property setter: - (void)setShowcaseController:(id)controller;	// 0x13e21
- (void)_deviceLockStateChanged:(id)changed;	// 0x13eb1
- (void)applicationOrientationChanged:(double)changed fencePort:(unsigned)port;	// 0x22059
- (void)applicationHasDied:(id)died;	// 0x14059
- (void)_setRoundedCornersOnZoomLayerIfNecessary:(id)necessary forApp:(id)app withCornersFrame:(CGRect)cornersFrame;	// 0x140d1
- (CGRect)snapshotRectForOrientation:(int)orientation statusBarStyle:(int)style hidden:(BOOL)hidden;	// 0x21f89
- (CGAffineTransform)_transformAndFrame:(CGRect *)frame forStatusBarWithOrientation:(int)orientation height:(float)height;	// 0x21d65
- (void)_showZoomLayerWithImage:(id)image;	// 0x1419d
- (void)showZoomLayerWithDefaultImageOfApp:(id)app includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner;	// 0x14239
- (id)_zoomViewForAppDosado:(id)appDosado includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner;	// 0x14315
- (id)_zoomViewForApplication:(id)application includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner snapshotFrame:(CGRect *)frame canUseIOSurface:(BOOL)surface;	// 0x2165d
- (id)_zoomViewWithIOSurfaceSnapshotOfApp:(id)app includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner;	// 0x21411
- (void)showZoomLayerWithIOSurfaceSnapshotOfApp:(id)app includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner;	// 0x14385
- (void)showZoomLayerForCrossfadeFromApp:(id)app;	// 0x14425
- (void)scatterIconListAndBar:(BOOL)bar;	// 0x1455d
- (void)scatterIconListAndBar:(BOOL)bar fade:(BOOL)fade animateWallpaper:(BOOL)wallpaper;	// 0x1457d
- (void)fadeIconsForScatter:(BOOL)scatter duration:(double)duration startTime:(double)time;	// 0x1465d
- (void)setRootViewHiddenForScatter:(BOOL)scatter duration:(double)duration startTime:(double)time;	// 0x146c9
- (void)setRootViewHiddenForScatter:(BOOL)scatter duration:(double)duration startTime:(double)time completion:(id)completion;	// 0x211e9
- (void)_hideKeyboard;	// 0x21171
- (BOOL)isRootViewHidden;	// 0x13541
- (void)_closeOpenFolderIfNecessary;	// 0x147b9
- (void)restoreIconListAnimated:(BOOL)animated;	// 0x14875
- (void)restoreIconListAnimatedIfNeeded:(BOOL)needed animateWallpaper:(BOOL)wallpaper;	// 0x14889
- (void)restoreIconListAnimated:(BOOL)animated animateWallpaper:(BOOL)wallpaper;	// 0x148f1
- (void)restoreIconListAnimated:(BOOL)animated animateWallpaper:(BOOL)wallpaper keepSwitcher:(BOOL)switcher;	// 0x20c71
- (void)restoreIconListForSuspendGesture;	// 0x20acd
- (void)animateApplicationActivation:(id)activation animateDefaultImage:(BOOL)image scatterIcons:(BOOL)icons;	// 0x1fd1d
- (void)animateApplicationActivationDidStop:(id)animateApplicationActivation finished:(id)finished context:(void *)context;	// 0x1f9c1
- (void)tearDownIconListAndBar;	// 0x1f871
- (void)animateApplicationSuspend:(id)suspend;	// 0x1e66d
- (void)applicationSuspendSwitcherFadeDidStop:(id)applicationSuspendSwitcherFade;	// 0x1e64d
- (void)applicationSuspendAnimationWillStart:(id)applicationSuspendAnimation context:(void *)context;	// 0x1e645
- (void)applicationSuspendAnimationDidStop:(id)applicationSuspendAnimation finished:(id)finished context:(void *)context;	// 0x1e4ed
- (void)zoomOutCurrentUIWithDuration:(id)duration startTime:(id)time scale:(id)scale postSnapshotBlock:(id)block;	// 0x1e2cd
- (id)_snapshotUIAndUnhostForSwitcher:(id)switcher;	// 0x1e259
- (void)_beginTransitionFromApp:(id)app toApp:(id)app2;	// 0x1de85
- (void)appTransitionViewAnimationDidStop:(id)appTransitionViewAnimation;	// 0x1dd5d
- (void)_clearAppToAppTransition;	// 0x14a99
- (void)animateApplicationSuspendFlip:(id)flip;	// 0x14b01
- (void)applicationSuspendFlipDidStop:(id)applicationSuspendFlip;	// 0x1dd3d
- (void)stopRestoringIconList;	// 0x14ba9
- (void)zoomWallpaper:(BOOL)wallpaper startTime:(double)time duration:(double)duration;	// 0x1db75
- (void)finishedUnscattering;	// 0x1dad1
- (int)_dismissSheetsAndDetermineAlertStateForMenuClickOrSystemGesture;	// 0x1da09
- (BOOL)_handleButtonEventToSuspendDisplays:(BOOL)suspendDisplays displayWasSuspendedOut:(BOOL *)anOut;	// 0x1d701
- (BOOL)clickedMenuButton;	// 0x1d421
- (void)_displayDidLaunch:(id)_display;	// 0x1d24d
- (void)_setToggleSwitcherAfterLaunchApp:(id)app;	// 0x1d1f1
- (void)_toggleSwitcher;	// 0x1d0bd
- (BOOL)handleMenuDoubleTap;	// 0x1d0a5
- (float)_appSwitcherRevealAnimationDelay;	// 0x13555
- (void)_accessibilityWillBeginAppSwitcherRevealAnimation;	// 0x13559
- (BOOL)_canActivateShowcaseIgnoringTouches:(BOOL)touches;	// 0x1cfa9
- (BOOL)_activateSwitcherFrom:(id)from to:(id)to duration:(double)duration;	// 0x1ce71
- (BOOL)_activateSwitcher:(double)switcher;	// 0x1cde9
- (BOOL)activateSwitcher;	// 0x1cdc9
- (BOOL)activateAssistantWithOptions:(id)options;	// 0x1cba5
- (void)showAssistantGuideSnippetWithHeight:(float)height;	// 0x1cac1
- (void)textEffectsWindowRotated:(id)rotated;	// 0x1ca65
- (void)_translateKeyboardWindowByOffset:(float)offset forShowcase:(id)showcase;	// 0x1c8ed
- (void)_keyboardWillShow:(id)_keyboard;	// 0x1c7b5
- (void)_prepareShowcaseAndHierarchy:(id)hierarchy withContext:(id)context ghostly:(BOOL)ghostly hostApp:(id)app;	// 0x1c51d
- (BOOL)_revealShowcase:(id)showcase duration:(double)duration from:(id)from to:(id)to;	// 0x1c12d
- (void)_dismissShowcase:(double)showcase unhost:(BOOL)unhost;	// 0x1bd39
- (void)deactivateAssistant;	// 0x1bc2d
- (void)openNewsstand;	// 0x1bb15
- (BOOL)showcaseExpectsFaceContact;	// 0x1bae1
- (id)_showcaseContextForOffset:(float)offset;	// 0x1b83d
- (void)_adjustAlertViewHierarchyForShowcaseContext:(id)showcaseContext;	// 0x1b719
- (void)_adjustViewHierarchyForShowcase:(id)showcase withContext:(id)context;	// 0x1b58d
- (void)dismissSwitcherAnimated:(BOOL)animated;	// 0x1b529
- (void)dismissAssistantAnimated:(BOOL)animated;	// 0x1b471
- (void)dismissSwitcherWithoutUnhostingApp;	// 0x1b431
- (void)addPrintTransitionView:(id)view;	// 0x1b3a1
- (void)removePrintTransitionView:(id)view;	// 0x1b331
- (void)_dismissShowcase:(double)showcase;	// 0x1b30d
- (void)_unhostSwitcherAppImmediatelyAndHideForSuspend:(BOOL)suspend;	// 0x1b291
- (BOOL)isSwitcherShowing;	// 0x1b245
- (BOOL)allowAlertWindowRotation;	// 0x1355d
- (void)_showcaseBlockingViewHit:(id)hit;	// 0x1b1f1
- (void)_ignoreEvents;	// 0x1b1a9
- (void)_resumeEventsIfNecessary;	// 0x1b161
- (BOOL)_ignoringEvents;	// 0x13571
- (CGAffineTransform)_portraitViewTransformForSwitcherSize:(CGSize)switcherSize orientation:(int)orientation;	// 0x1b0d9
- (float)_contentRotationForOrientation:(int)orientation;	// 0x13585
- (void)wakeUp:(id)up;	// 0x1b019
- (void)handleVolumeEvent:(GSEventRef)event;	// 0x1acf9
- (void)cancelVolumeEvent;	// 0x1ac39
- (void)updateBatteryState:(id)state;	// 0x1a2ed
// converted property getter: - (float)batteryCapacity;	// 0x135bd
- (int)batteryCapacityAsPercentage;	// 0x1a2a1
// converted property getter: - (float)curvedBatteryCapacity;	// 0x135cd
- (int)curvedBatteryCapacityAsPercentage;	// 0x1a255
- (int)displayBatteryCapacityAsPercentage;	// 0x1a209
- (BOOL)isBatteryCharging;	// 0x135dd
- (BOOL)isOnAC;	// 0x135f1
- (BOOL)isConnectedToChargeIncapablePowerSource;	// 0x13605
- (void)ACPowerChanged;	// 0x1a1a1
// converted property setter: - (void)setIsConnectedToUnusableFirewireCharger:(BOOL)unusableFirewireCharger;	// 0x19fc5
// converted property getter: - (BOOL)isConnectedToUnusableFirewireCharger;	// 0x13619
- (void)noteStatusBarHeightChanged:(id)changed;	// 0x19f29
- (void)assistantWantsToBeFullyRevealed:(id)beFullyRevealed withBlock:(id)block;	// 0x19d2d
- (void)_defferedFullyRevealed:(id)revealed;	// 0x19cd9
- (void)assistantWantsToBeDismissed:(id)beDismissed animated:(BOOL)animated;	// 0x19b89
- (double)assistantFullRevealDuration:(id)duration;	// 0x1362d
- (BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)animation;	// 0x13639
- (BOOL)window:(id)window shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x19991
- (id)rotatingContentViewForWindow:(id)window;	// 0x1363d
- (id)rotatingFooterViewForWindow:(id)window;	// 0x1364d
- (void)window:(id)window willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x19905
- (void)window:(id)window willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x194e9
- (void)window:(id)window didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x193e1
- (BOOL)isHeadsetDocked;	// 0x13651
- (BOOL)isHeadsetBatteryCharging;	// 0x13655
- (unsigned char)headsetBatteryCapacity;	// 0x13659
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x1937d
- (id)_systemGestureViewKeyForApp:(id)app;	// 0x19369
- (id)_installedSystemGestureViewForKey:(id)key;	// 0x19345
- (void)_clearInstalledSystemGestureViewForKey:(id)key;	// 0x192d1
- (void)_clearAllInstalledSystemGestureViews;	// 0x191dd
- (void)_installSystemGestureView:(id)view forKey:(id)key forGesture:(int)gesture;	// 0x19085
- (id)systemGestureSnapshotOfSwitcher;	// 0x18fcd
- (id)systemGestureSnapshotWithIOSurfaceSnapshotOfApp:(id)app forRequester:(id)requester includeStatusBar:(BOOL)bar;	// 0x18f89
- (id)systemGestureSnapshotForApp:(id)app forRequester:(id)requester includeStatusBar:(BOOL)bar;	// 0x18f05
- (void)showSystemGestureBackdrop;	// 0x18dc5
- (void)hideSystemGestureBackdrop;	// 0x18d85
- (void)handleFluidScaleSystemGesture:(id)gesture;	// 0x18c8d
- (void)handleFluidHorizontalSystemGesture:(id)gesture;	// 0x18a0d
- (void)handleFluidVerticalSystemGesture:(id)gesture;	// 0x1894d
- (void)handleShowNotificationsSystemGesture:(id)gesture;	// 0x18841
- (void)handleHideNotificationsSystemGesture:(id)gesture;	// 0x18721
- (void)handleDismissBannerSystemGesture:(id)gesture;	// 0x186bd
- (void)noteInterfaceOrientationChanged;	// 0x18665
- (void)notifyAppResignActive:(id)active;	// 0x18629
- (void)notifyAppResumeActive:(id)active;	// 0x185ed
- (BOOL)shouldSendTouchesToSystemGestures;	// 0x1859d
- (void)animationStepperFinishBackwardToStartCompleted:(id)startCompleted;	// 0x18531
- (void)cleanupRunningGestureIfNeeded;	// 0x18509
- (BOOL)_switcherGestureIsBlockedByAppLaunchOrIgnoringEvents;	// 0x18491
- (void)_switcherGestureBegan;	// 0x18365
- (void)_switcherGestureChanged:(float)changed;	// 0x18241
- (void)_switcherGestureEndedWithCompletionType:(int)completionType cumulativePercentage:(float)percentage;	// 0x1811d
- (void)_switcherGestureCancelled;	// 0x18105
- (void)_suspendGestureBegan;	// 0x17531
- (void)_suspendGestureChanged:(float)changed;	// 0x174d5
- (void)_suspendGestureEndedWithCompletionType:(int)completionType;	// 0x1742d
- (void)_suspendGestureCancelled;	// 0x17419
- (void)_addFakeCornersForSuspendGestureIfNeededForApp:(id)app cornerAlignment:(int)alignment;	// 0x17005
- (void)_animateStatusBarForSuspendGesture;	// 0x16ba1
- (id)_calculateSwitchAppList;	// 0x16b39
- (void)_clearSwitchAppList;	// 0x16ae5
- (void)removeAppFromSwitchAppList:(id)switchAppList;	// 0x16ac1
- (id)_makeSwitchAppFilteredList:(id)list initialApp:(id)app;	// 0x1690d
- (void)_switchAppGestureBegan;	// 0x16469
- (void)_switchAppGestureChanged:(float)changed;	// 0x16419
- (void)_switchAppGestureEndedWithCompletionType:(int)completionType cumulativePercentage:(float)percentage;	// 0x1634d
- (void)_switchAppGestureCancelled;	// 0x162d1
- (void)programmaticSwitchAppGestureApplyWithPercentage:(float)percentage;	// 0x16249
- (void)programmaticSwitchAppGestureMoveToLeft;	// 0x16215
- (void)programmaticSwitchAppGestureMoveToRight;	// 0x161e1
- (void)cleanupSwitchAppGestureViews;	// 0x16169
- (BOOL)hasPendingAppActivatedByGesture;	// 0x13669
- (void)clearPendingAppActivatedByGesture;	// 0x1613d
- (void)scheduleApplicationForLaunchByGesture:(id)launchByGesture;	// 0x160a1
- (void)launchPendingAppActivatedByGestureIfExists;	// 0x16075
- (void)launchApplicationByGesture:(id)gesture;	// 0x15fd5
- (void)_installSwitchAppGesturePlaceholderViewForEndingApp:(id)endingApp;	// 0x15e95
- (void)_switchAppGestureViewAnimationComplete;	// 0x15a9d
- (void)_showNotificationsGestureBeganWithLocation:(CGPoint)location;	// 0x15975
- (void)_showNotificationsGestureChangedWithLocation:(CGPoint)location velocity:(CGPoint)velocity;	// 0x15915
- (void)_showNotificationsGestureEndedWithLocation:(CGPoint)location velocity:(CGPoint)velocity;	// 0x15801
- (void)_showNotificationsGestureFailed;	// 0x157b1
- (void)_showNotificationsGestureCancelled;	// 0x1575d
- (void)updateShouldShowNotificationCenterTabControlOnFirstSwipe;	// 0x156bd
- (BOOL)shouldShowNotificationCenterTabControlOnFirstSwipe;	// 0x15699
- (BOOL)isShowingNotificationCenterTabControl;	// 0x15665
- (float)showNotificationsTabControlSwipableWidth;	// 0x13681
- (void)_hideNotificationCenterTabControl;	// 0x155f5
- (void)_hideNotificationsGestureBegan:(float)began;	// 0x15525
- (void)_hideNotificationsGestureChanged:(float)changed;	// 0x154e1
- (void)_hideNotificationsGestureEndedWithCompletionType:(int)completionType velocity:(CGPoint)velocity;	// 0x15435
- (void)_hideNotificationsGestureCancelled;	// 0x153f1
- (void)_dismissBannerGestureEndedWithCompletionType:(int)completionType;	// 0x153b5
- (void)prepareSwitchAppGestureStatusBar;	// 0x1502d
- (void)updateSwitchAppGestureStatusBar;	// 0x14efd
- (void)cleanupSwitchAppGestureStatusBar;	// 0x14ed5
// declared property getter: - (id)showcaseController;	// 0x13689
@end
