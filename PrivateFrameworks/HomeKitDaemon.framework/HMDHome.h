/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHome : NSObject <HMDAccessoryBrowserDelegate, HMDBulletinIdentifiers, HMDRelayManagerDelegate, HMDResidentDeviceManagerDelegate, HMDUserManagementOperationDelegate, HMFDumpState, HMFLogging, HMFMessageReceiver, HMFTimerDelegate, NSSecureCoding> {
    NSMutableArray * _accessories;
    HMDAccessoryBrowser * _accessoryBrowser;
    NSMutableArray * _actionSets;
    NSMutableSet * _addPendingAccessories;
    NSMutableDictionary * _addPendingAccessorySetupCodeHandlers;
    NSMutableDictionary * _addPendingAccessorySetupCodes;
    BOOL  _adminUser;
    BOOL  _allowsRemoteAccess;
    BOOL  _anyBTLEAccessoryReachable;
    HMDApplicationData * _appData;
    NSMutableArray * _assistantOperations;
    int  _atHomeLevel;
    HMDCharacteristicNotificationRegistry * _characteristicNotificationRegistry;
    int  _configurationVersion;
    BOOL  _currentRemoteReachabilityRegistration;
    HMDUser * _currentUser;
    NSMutableDictionary * _disableNotificationPayload;
    HMFTimer * _disableNotificationTimer;
    NSMutableArray * _discoveredAccessories;
    NSMutableDictionary * _enableNotificationPayload;
    int  _expectedConfigurationVersion;
    NSMutableSet * _heartbeatPingMessagesQueuedWithServer;
    int  _homeLocation;
    HMDHomeLocationHandler * _homeLocationHandler;
    HMDHomeManager * _homeManager;
    int  _lastKnownReachableAccessoryCount;
    int  _lastKnownReachableIPAccessoryCount;
    HMFTimer * _modifyNotificationsCoalesceTimer;
    HMFMessageDispatcher * _msgDispatcher;
    NSString * _name;
    NSMutableSet * _notificationDeregistrations;
    NSMutableSet * _notificationRegistrations;
    NSDate * _notificationsUpdatedTime;
    NSMutableArray * _outgoingInvitations;
    NSMutableArray * _ownedTriggers;
    HMDUser * _owner;
    NSString * _ownerName;
    BOOL  _ownerUser;
    NSMutableSet * _pendingResponsesForRemoteAccessSetup;
    NSMutableArray * _pendingUsers;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMFTimer * _reachabilityDeregistrationTimer;
    HMFTimer * _reachabilityNotificationTimer;
    NSMutableArray * _reachabilityRegisteredDevices;
    int  _regionState;
    BOOL  _registeredNotificationWithRemoteGateway;
    HMDRelayManager * _relayManager;
    BOOL  _remoteAccessIsEnabled;
    HMDRemoteAdminEnforcementMessageFilter * _remoteAdminEnforcementMessageFilter;
    HMDRemoteMessageFilter * _remoteMessageFilter;
    HMDHomeRemoteNotificationHandler * _remoteNotificationHandler;
    NSMutableArray * _remoteReachabilityNotificationPendingAccessories;
    NSHashTable * _removeAccessoryInProgressForHMDAccessories;
    NSMutableArray * _removedUsers;
    HMDResidentDevice * _resident;
    HMDResidentDeviceManager * _residentDeviceManager;
    NSMapTable * _retrievalCompletionTuplesForAccessories;
    HMDRoom * _roomForEntireHome;
    NSMutableArray * _rooms;
    NSMutableArray * _serviceGroups;
    NSMutableArray * _services;
    unsigned long long  _stateHandle;
    NSMutableArray * _triggerOwnedActionSets;
    NSMutableArray * _triggers;
    NSMutableArray * _unconfiguredResidentDevices;
    NSHashTable * _unpairedSecondaryHAPAccessories;
    NSMutableArray * _users;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMutableArray * _zones;
}

@property (nonatomic, retain) NSMutableArray *accessories;
@property (nonatomic, retain) HMDAccessoryBrowser *accessoryBrowser;
@property (nonatomic, retain) NSMutableArray *actionSets;
@property (nonatomic, retain) NSMutableSet *addPendingAccessories;
@property (nonatomic, retain) NSMutableDictionary *addPendingAccessorySetupCodeHandlers;
@property (nonatomic, retain) NSMutableDictionary *addPendingAccessorySetupCodes;
@property (getter=isAdminUser, nonatomic) BOOL adminUser;
@property (nonatomic) BOOL allowsRemoteAccess;
@property (getter=isAnyBTLEAccessoryReachable, nonatomic, readonly) BOOL anyBTLEAccessoryReachable;
@property (nonatomic, retain) HMDApplicationData *appData;
@property (nonatomic, retain) NSMutableArray *assistantOperations;
@property int atHomeLevel;
@property (nonatomic, retain) HMDCharacteristicNotificationRegistry *characteristicNotificationRegistry;
@property (nonatomic) int configurationVersion;
@property (nonatomic, readonly, copy) NSString *contextID;
@property (nonatomic, readonly, copy) NSUUID *contextSPIUniqueIdentifier;
@property (nonatomic) BOOL currentRemoteReachabilityRegistration;
@property (nonatomic, readonly) HMDUser *currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *disableNotificationPayload;
@property (nonatomic, retain) HMFTimer *disableNotificationTimer;
@property (nonatomic, retain) NSMutableArray *discoveredAccessories;
@property (nonatomic, readonly) NSMutableDictionary *enableNotificationPayload;
@property (nonatomic) int expectedConfigurationVersion;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableSet *heartbeatPingMessagesQueuedWithServer;
@property int homeLocation;
@property (nonatomic, retain) HMDHomeLocationHandler *homeLocationHandler;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic) int lastKnownReachableAccessoryCount;
@property (nonatomic) int lastKnownReachableIPAccessoryCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFTimer *modifyNotificationsCoalesceTimer;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableSet *notificationDeregistrations;
@property (nonatomic, retain) NSMutableSet *notificationRegistrations;
@property (nonatomic, copy) NSDate *notificationsUpdatedTime;
@property (nonatomic, retain) NSMutableArray *outgoingInvitations;
@property (nonatomic, retain) NSMutableArray *ownedTriggers;
@property (nonatomic, readonly) HMDUser *owner;
@property (nonatomic, retain) NSString *ownerName;
@property (getter=isOwnerUser, nonatomic) BOOL ownerUser;
@property (nonatomic, retain) NSMutableSet *pendingResponsesForRemoteAccessSetup;
@property (nonatomic, retain) NSMutableArray *pendingUsers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) HMFTimer *reachabilityDeregistrationTimer;
@property (nonatomic, retain) HMFTimer *reachabilityNotificationTimer;
@property (nonatomic, retain) NSMutableArray *reachabilityRegisteredDevices;
@property (nonatomic) int regionState;
@property (nonatomic) BOOL registeredNotificationWithRemoteGateway;
@property (nonatomic, retain) HMDRelayManager *relayManager;
@property (nonatomic) BOOL remoteAccessIsEnabled;
@property (nonatomic, readonly) HMDRemoteAdminEnforcementMessageFilter *remoteAdminEnforcementMessageFilter;
@property (nonatomic, readonly) HMDRemoteMessageFilter *remoteMessageFilter;
@property (nonatomic, readonly) HMDHomeRemoteNotificationHandler *remoteNotificationHandler;
@property (nonatomic, retain) NSMutableArray *remoteReachabilityNotificationPendingAccessories;
@property (nonatomic, retain) NSHashTable *removeAccessoryInProgressForHMDAccessories;
@property (nonatomic, retain) NSMutableArray *removedUsers;
@property (nonatomic, retain) HMDResidentDevice *resident;
@property (nonatomic, readonly, copy) NSArray *residentCapableDevices;
@property (nonatomic, readonly) HMDResidentDeviceManager *residentDeviceManager;
@property (getter=isResidentSupported, nonatomic, readonly) BOOL residentSupported;
@property (nonatomic, retain) NSMapTable *retrievalCompletionTuplesForAccessories;
@property (nonatomic, retain) HMDRoom *roomForEntireHome;
@property (nonatomic, retain) NSMutableArray *rooms;
@property (nonatomic, retain) NSMutableArray *serviceGroups;
@property (nonatomic, retain) NSMutableArray *services;
@property (nonatomic) unsigned long long stateHandle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *triggerOwnedActionSets;
@property (nonatomic, retain) NSMutableArray *triggers;
@property (nonatomic, retain) NSMutableArray *unconfiguredResidentDevices;
@property (nonatomic, readonly) NSHashTable *unpairedSecondaryHAPAccessories;
@property (nonatomic, retain) NSMutableArray *users;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, retain) NSMutableArray *zones;

+ (void)_initialize;
+ (void)appendCharacteristicsToAccessoryList:(id)arg1 responseTuples:(id)arg2 forMultipleCharacteristicsRemoteRead:(id)arg3;
+ (void)appendCharacteristicsToAccessoryList:(id)arg1 responseTuples:(id)arg2 forMultipleCharacteristicsRemoteWrite:(id)arg3;
+ (id)getBuiltinActionSets;
+ (BOOL)isObjectContainedInHome:(id)arg1;
+ (id)logCategory;
+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__accessoryIdentifiers;
- (void)__handleAcceptedOutgoingInvitationResponse:(id)arg1 destinationAddress:(id)arg2 publicKey:(id)arg3 username:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)__handleCancelledOutgoingInvitation:(id)arg1;
- (void)__handleCompletedOutgoingInvitation:(id)arg1;
- (BOOL)_accessoryServerIsBlocked:(id)arg1;
- (id)_addAccessory:(id)arg1 configurationApp:(id)arg2;
- (void)_addAllUsersToAccessories:(id)arg1;
- (void)_addNewAccessories:(id)arg1 bridgeAccessory:(id)arg2 message:(id)arg3;
- (void)_addNewTrigger:(id)arg1 message:(id)arg2 notification:(id)arg3 payloadAnnex:(id)arg4;
- (void)_addOutgoingInvitations:(id)arg1 message:(id)arg2;
- (void)_addPairedAccessories:(id)arg1;
- (void)_addPairedAccessory:(id)arg1;
- (void)_addResidentWithUsername:(id)arg1 publicKey:(id)arg2 destination:(id)arg3;
- (void)_addResponseTuplesFromDictionary:(id)arg1 accessoryRequestMapTable:(id)arg2 responseTuples:(id)arg3 completedGroup:(id)arg4 logEvents:(id)arg5;
- (void)_addUser:(id)arg1 userPrivilege:(unsigned int)arg2 confirm:(BOOL)arg3 message:(id)arg4;
- (void)_addUserToIdentityRegistry:(id)arg1;
- (void)_addUsersWithIDs:(id)arg1 message:(id)arg2;
- (id)_applyDeviceLockCheck:(id)arg1;
- (void)_auditNotifications;
- (id)_changedHMDCharacteristicsForHAPCharacteristics:(id)arg1 stateNumber:(id)arg2;
- (id)_characteristicNotificationPayloadsForRemoteGateway:(BOOL)arg1;
- (id)_characteristicNotificationPayloadsOnDirectTransports:(BOOL)arg1;
- (void)_cleanAddAccessoryOperations;
- (void)_configureBulletinNotification;
- (void)_configureConfiguredResident:(id)arg1 desiredConfigState:(unsigned int)arg2 message:(id)arg3;
- (void)_configurePairedAccessoriesForServer:(id)arg1 reAddServices:(BOOL)arg2;
- (void)_configureUnconfiguredResident:(id)arg1 desiredConfigState:(unsigned int)arg2;
- (id)_createBuiltinActionSets;
- (id)_createPairedAccessoriesForUnpairedAccessory:(id)arg1 accessoryServer:(id)arg2;
- (id)_createPairedSecondaryAccessoriesForNewlyPairedAccessory:(id)arg1;
- (id)_currentUser;
- (id)_dequeueAllRetrievalCompletionTuplesForLinkType:(int)arg1 accessory:(id)arg2;
- (void)_deregisterDeviceForReachabilityNotification:(id)arg1;
- (void)_deregisterPairedAccessory:(id)arg1;
- (void)_deregisterStateHandler;
- (void)_disableNotificationsForClient:(id)arg1;
- (void)_disablePairedAccessoriesForServer:(id)arg1 error:(id)arg2;
- (id)_discoveredAccessoriesForServer:(id)arg1;
- (id)_discoveredAccessoriesForServer:(id)arg1 linkType:(int)arg2;
- (BOOL)_doesResidentExistInMyCircleWithAddress:(id)arg1 homeManager:(id)arg2;
- (void)_encodeActionSets:(id)arg1 coder:(id)arg2;
- (void)_encodeObjectsWithAcessoriesWithCoder:(id)arg1;
- (void)_enqueueRetrievalCompletionTuple:(id)arg1 forAccessory:(id)arg2;
- (void)_evaluateShouldRelaunchAndSetRelaunch;
- (id)_getContainerForAppData:(id)arg1 keyName:(id*)arg2;
- (id)_getLogEventsForOperation:(BOOL)arg1 accessories:(id)arg2 readRequestMap:(id)arg3 identifier:(id)arg4;
- (void)_handleAccessoryReachabilityChange:(id)arg1;
- (void)_handleAccessoryReachabilityRegistration:(id)arg1 register:(BOOL)arg2;
- (void)_handleAddAccessories:(id)arg1;
- (void)_handleAddAccessory:(id)arg1;
- (void)_handleAddActionSet:(id)arg1;
- (void)_handleAddEventTrigger:(id)arg1;
- (void)_handleAddRelayAccessTokens:(id)arg1;
- (void)_handleAddRoom:(id)arg1;
- (void)_handleAddServiceGroup:(id)arg1;
- (void)_handleAddTimerTrigger:(id)arg1;
- (void)_handleAddTriggers:(id)arg1;
- (void)_handleAddUser:(id)arg1;
- (void)_handleAddUserToRelayAccessories:(id)arg1;
- (void)_handleAddZone:(id)arg1;
- (void)_handleCancelPairingAccessory:(id)arg1;
- (void)_handleCharacterisiticsChangedNotification:(id)arg1;
- (void)_handleCharacteristicEnableNotification:(id)arg1;
- (void)_handleCoalescedModifyNotifications;
- (void)_handleContinuePairingAccessory:(id)arg1;
- (void)_handleDidReceiveIDSMessageWithNoListenerFromAddress:(id)arg1;
- (void)_handleDisableNotificationsTimerFired;
- (void)_handleEnableNotifications:(id)arg1;
- (void)_handleEnableRemoteAccess:(id)arg1;
- (void)_handleExecuteActionSet:(id)arg1;
- (void)_handleExecuteConfirmationOfTrigger:(id)arg1;
- (void)_handleModifyCharacteristicNotifications:(id)arg1;
- (void)_handleMultipleCharacteristicRead:(id)arg1;
- (void)_handleMultipleCharacteristicWrite:(id)arg1;
- (void)_handleNewlyDiscoveredAccessories:(id)arg1 bridgeAccessory:(id)arg2;
- (void)_handleNewlyPairedAccessories:(id)arg1 bridgeAccessory:(id)arg2;
- (void)_handleOutgoingInvitations:(id)arg1;
- (void)_handleQueryRemoteAccess:(id)arg1;
- (void)_handleQueryUserIsAdmin:(id)arg1;
- (void)_handleRemoteGatewayNotificationRegistration:(id)arg1 enable:(BOOL)arg2;
- (void)_handleRemoteReachabilityDeregistrationTimerFired;
- (void)_handleRemoteReachabilityNotificationTimerFired;
- (void)_handleRemoveAccessory:(id)arg1;
- (void)_handleRemoveActionSet:(id)arg1;
- (void)_handleRemoveRoom:(id)arg1;
- (void)_handleRemoveServiceGroup:(id)arg1;
- (void)_handleRemoveTrigger:(id)arg1;
- (void)_handleRemoveUser:(id)arg1;
- (void)_handleRemoveZone:(id)arg1;
- (void)_handleRemovedDiscoveredAccessories:(id)arg1 bridgeAccessory:(id)arg2;
- (void)_handleRemovedPairedAccessories:(id)arg1 bridgeAccessory:(id)arg2;
- (void)_handleRename:(id)arg1;
- (void)_handleRequestHomeDataSync:(id)arg1;
- (void)_handleResponseForElectMessageToResident:(id)arg1 error:(id)arg2;
- (void)_handleRetrievalForBlockedAccessory:(id)arg1 hapAccessory:(id)arg2 blockedBridgedAccessories:(id)arg3 unblockMessage:(id)arg4;
- (void)_handleSetAppData:(id)arg1;
- (void)_handleUnblock:(id)arg1;
- (void)_handleUpdateOutgoingInvitationState:(id)arg1;
- (void)_handleUpdateRequestForHomeInvitationFromInvitee:(id)arg1;
- (void)_handleUpdateUserAccess:(id)arg1;
- (void)_handleUserInvitations:(id)arg1;
- (BOOL)_hasPairedReachableBTLEAccessories;
- (BOOL)_isEventTriggerOnLocalDeviceForAccessory:(id)arg1;
- (BOOL)_isEventTriggerOnRemoteGatewayForAccessory:(id)arg1;
- (BOOL)_isRegisteredForNotificationsForClients:(id)arg1;
- (BOOL)_isRegisteredForNotificationsWithRemoteGateway:(id)arg1;
- (BOOL)_isRetrievalInProgressForLinkType:(int)arg1 accessory:(id)arg2;
- (BOOL)_isUserValid:(id)arg1 error:(id*)arg2;
- (BOOL)_isValidEventIdentifier:(id)arg1;
- (BOOL)_mergeResidentsMissingInCloud:(id)arg1 homeManager:(id)arg2;
- (void)_migrateTrigger:(id)arg1 actionSetsInHome:(id)arg2 triggersToReactivate:(id)arg3;
- (void)_modifyAllRegistrationsForNotificationsInNotificationRegistry:(BOOL)arg1;
- (void)_modifyNotificationOnResident:(BOOL)arg1 ignoreDeviceUnlockRequirement:(BOOL)arg2 forCharacteristics:(id)arg3;
- (void)_modifyNotificationsOnResidentWithPayload:(id)arg1 enableNotification:(BOOL)arg2;
- (void)_modifyNotificationsWithPayload:(id)arg1 enableNotification:(BOOL)arg2 withResidentDevice:(id)arg3;
- (id)_notificationPayloadForChangedCharacterisitics:(id)arg1 destinationIsXPCTransport:(BOOL)arg2;
- (void)_notifyChangedCharacteristics:(id)arg1 identifier:(id)arg2 multiPartResponse:(BOOL)arg3 moreMessagesInMultipart:(BOOL)arg4 requestMessage:(id)arg5 withCompletionHandler:(id /* block */)arg6;
- (void)_notifyChangedCharacteristics:(id)arg1 message:(id)arg2 modifiedCharacteristics:(id)arg3;
- (void)_notifyChangedCharacteristics:(id)arg1 toUserDeviceAddress:(id)arg2;
- (void)_notifyClientOfAccessoryInfoUpdatedForAccessories:(id)arg1 shouldRefreshBadge:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)_notifyClientsOfUpdatedResidentUser:(id)arg1;
- (void)_notifyRemoteUsersOfChangedCharacteristics:(id)arg1 message:(id)arg2;
- (void)_notifyRetrievalError:(id)arg1 accessoryServer:(id)arg2 linkType:(int)arg3 accessoryOperationBlock:(id /* block */)arg4;
- (id)_owner;
- (id)_pairedAccessories;
- (id)_pairedAccessoriesForServer:(id)arg1;
- (id)_pairedAccessoriesForServer:(id)arg1 linkType:(int)arg2;
- (id)_pairedAccessoryWithIdentifier:(id)arg1;
- (void)_performOperation:(id)arg1 completion:(id /* block */)arg2;
- (id)_populateCharacteristicsThatNeedNotificationsFromDictionary:(id)arg1 error:(id*)arg2;
- (void)_postInternalNotificationForChangedCharacterisitics:(id)arg1 modifiedCharacteristics:(id)arg2 modifiedAccessories:(id)arg3;
- (void)_postInternalNotificationForChangedCharacterisitics:(id)arg1 modifiedCharacteristics:(id)arg2 modifiedAccessories:(id)arg3 changedByThisDevice:(BOOL)arg4 residentShouldNotifyPeers:(BOOL)arg5 message:(id)arg6;
- (void)_postOutgoingInvitationStateChangedNotification:(id)arg1 newInvitationState:(int)arg2;
- (id)_prepareMultipleCharacteristicRead:(id)arg1;
- (id)_prepareUserManagementOperationForUser:(id)arg1 accessories:(id)arg2 type:(unsigned int)arg3 error:(id*)arg4;
- (id)_prepareUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 type:(unsigned int)arg3 error:(id*)arg4;
- (void)_presentPairingPasswordDialogForAccessory:(id)arg1 setupCodeAvailable:(id /* block */)arg2;
- (id)_primaryAccessoryForServer:(id)arg1;
- (void)_processPairingRequestForMessage:(id)arg1 cancelPairing:(BOOL)arg2;
- (void)_purgeResidentUsers;
- (void)_reachabilityChangedForAccessory:(id)arg1 reachable:(BOOL)arg2;
- (void)_readCharacteristicValues:(id)arg1 requestMessage:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_readCharacteristicValuesForAccessories:(id)arg1 readRequestMap:(id)arg2 responseTuples:(id)arg3 requestMessage:(id)arg4 viaDevice:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_redispatchReadForAccessories:(id)arg1 dispatchGroup:(id)arg2 requestMap:(id)arg3 requestMessage:(id)arg4 responseTuples:(id)arg5;
- (void)_redispatchWriteForAccessories:(id)arg1 dispatchGroup:(id)arg2 requestMap:(id)arg3 requestMessage:(id)arg4 responseTuples:(id)arg5;
- (void)_reevaluateAccessoryInfoWithBadgeRefresh:(BOOL)arg1;
- (void)_registerDeviceForReachabilityNotification:(id)arg1 accessoryList:(id)arg2;
- (void)_registerForMessages;
- (void)_registerForReachabilityChangeNotifications:(id)arg1 mode:(BOOL)arg2;
- (void)_registerPairedAccessory:(id)arg1 btleTransport:(BOOL)arg2;
- (void)_registerStateHandler;
- (void)_remoteAccessEnabled:(BOOL)arg1;
- (void)_remoteAccessHealthMonitorTimerDidFire;
- (void)_removeAccessories:(id)arg1 bridgeAccessory:(id)arg2 message:(id)arg3;
- (id)_removeAccessoriesCommon:(id)arg1 message:(id)arg2;
- (void)_removeAccessoriesForPrimaryAccessory:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_removeAccessoriesFromContainers:(id)arg1;
- (void)_removeAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeAccessoryWithUUID:(id)arg1 message:(id)arg2;
- (void)_removeAllAccessoriesWithCompletionHandler:(id /* block */)arg1 queue:(id)arg2;
- (void)_removeAllUsersFromAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeCharacteristic:(id)arg1;
- (void)_removeOutgoingInvitationForUser:(id)arg1;
- (void)_removePairedAccessory:(id)arg1;
- (void)_removeReachableAccessory:(id)arg1 hapAccessory:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_removeService:(id)arg1;
- (void)_removeTrigger:(id)arg1 message:(id)arg2;
- (void)_removeUser:(id)arg1 message:(id)arg2;
- (void)_removeWithMergeSecondaryAccessory:(id)arg1 removedFromBridgeAccessory:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)_residentDeviceAvailable;
- (id)_residentDeviceForResidentUser:(id)arg1;
- (id)_residentUserForResidentDevice:(id)arg1;
- (id)_residentUsers;
- (void)_retrieveHAPAccessoryForHMDAccessory:(id)arg1 linkType:(int)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)_sendAccessTokensToUser:(id)arg1 user:(id)arg2 error:(id)arg3;
- (void)_sendClientCharacteristicsChangedNotification:(id)arg1 identifier:(id)arg2 isSecure:(BOOL)arg3 multiPartResponse:(BOOL)arg4 moreMessagesInMultipart:(BOOL)arg5 withCompletionHandler:(id /* block */)arg6;
- (void)_sendInvitation:(id)arg1 confirm:(BOOL)arg2 message:(id)arg3;
- (void)_sendInvitationCancelationRequestToInvitee:(id)arg1;
- (void)_sendRemoveCompletionStatusForHMDAccessories:(id)arg1 withCompletion:(id /* block */)arg2 error:(id)arg3;
- (void)_sendResidentInviteWithDestination:(id)arg1;
- (id /* block */)_setupCodeProviderForMessage:(id)arg1;
- (BOOL)_shouldAddAccessory:(id)arg1;
- (BOOL)_shouldWaitForAccessoriesToBeReachable;
- (id)_splitSecureCharacteristicChanges:(id)arg1 changedAccessories:(id)arg2;
- (void)_startHomeNotificationDeregistrationTimer;
- (void)_startSearchingForBridgedAccessories;
- (void)_stopSearchingForBridgedAccessories;
- (void)_subscribeForHomeNotificationsFromRemoteGateway:(BOOL)arg1;
- (void)_subscribeForHomeNotificationsOnDirectTransports:(BOOL)arg1;
- (void)_subscribeForNotificationFromRemoteGateway:(BOOL)arg1;
- (void)_unconfigurePairedAccessoriesForServer:(id)arg1 updateReachability:(BOOL)arg2;
- (void)_updateBulletinBoardOfChangedCharacteristics:(id)arg1 changedByThisDevice:(BOOL)arg2;
- (void)_updateCloudRelaySupport;
- (void)_updateConfigurationStateForResidentDevice:(id)arg1 desiredConfigState:(unsigned int)arg2 message:(id)arg3;
- (void)_updateExpectConfigurationVersion;
- (void)_updateOutgoingInviationsWithCompleteUserManagementOperation:(id)arg1;
- (void)_updateOutgoingInvitationForUser:(id)arg1 invitationState:(int)arg2 error:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)_updateOwnedTriggers;
- (void)_updatePairedAccessoriesForServer:(id)arg1 reAddServices:(BOOL)arg2;
- (void)_updateReachabilityChangeToRegisteredDevices:(id)arg1;
- (void)_updateRemoteReachability:(BOOL)arg1 accessories:(id)arg2;
- (void)_updateWoWState:(id)arg1;
- (BOOL)_validateAddingNewTriggerWithName:(id)arg1 message:(id)arg2;
- (BOOL)_verifyUserManagementPermissionForAccessory:(id)arg1 error:(id*)arg2;
- (void)_writeCharacteristicValues:(id)arg1 requestMessage:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_writeCharacteristicValuesForAccessories:(id)arg1 writeRequestMap:(id)arg2 responseTuples:(id)arg3 requestMessage:(id)arg4 viaDevice:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)accessories;
- (id)accessoryBrowser;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didDiscoverAccessories:(id)arg3 transaction:(id)arg4 error:(id)arg5;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didStopPairingWithError:(id)arg3;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateCategory:(id)arg3;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateHasPairings:(BOOL)arg3;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateName:(id)arg3;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateValuesForCharacteristics:(id)arg3 stateNumber:(id)arg4;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 isBlockedWithCompletionHandler:(id /* block */)arg3;
- (void)accessoryBrowser:(id)arg1 didFindAccessoryServer:(id)arg2 stateChanged:(BOOL)arg3 stateNumber:(id)arg4 completion:(id /* block */)arg5;
- (void)accessoryBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2 error:(id)arg3;
- (void)accessoryBrowser:(id)arg1 didTombstoneAccessoryServer:(id)arg2;
- (void)accessoryBrowser:(id)arg1 didUpdateReachability:(BOOL)arg2 forBTLEAccessoriesWithServerIdentifier:(id)arg3;
- (void)accessoryBrowser:(id)arg1 discoveryFailedWithError:(id)arg2 accessoryServer:(id)arg3 linkType:(int)arg4;
- (id)accessoryWithUUID:(id)arg1;
- (id)actionSetWithName:(id)arg1;
- (id)actionSetWithUUID:(id)arg1;
- (id)actionSets;
- (void)addCompanionAsResidentUser:(id)arg1;
- (id)addName:(id)arg1;
- (void)addPairedAccessories:(id)arg1;
- (id)addPendingAccessories;
- (id)addPendingAccessorySetupCodeHandlers;
- (id)addPendingAccessorySetupCodes;
- (void)addResidentCapableDevice:(id)arg1;
- (void)addTriggerOwnedActionSet:(id)arg1;
- (void)addUnconfiguredResidentDeviceWithName:(id)arg1 userID:(id)arg2 deviceIdentifier:(id)arg3;
- (void)addUserToRelayAccessoriesWithConsentTokens:(id)arg1;
- (BOOL)allowsRemoteAccess;
- (id)appData;
- (BOOL)applyDeviceLockStatus:(id)arg1;
- (id)assistantObject;
- (id)assistantOperations;
- (id)assistantUniqueIdentifier;
- (int)atHomeLevel;
- (void)auditNotifications;
- (void)auditUsersForNotifications:(id)arg1;
- (void)btleAccessoryReachabilityProbeTimer:(BOOL)arg1;
- (id)builtInActionSetInfo;
- (id)characteristicNotificationRegistry;
- (void)checkTimerTriggers;
- (void)computeBridgedAccessoriesForAllBridges;
- (int)configurationVersion;
- (BOOL)configure:(id)arg1 accessoriesPresent:(id)arg2;
- (void)configureBulletinNotification;
- (void)configureWithRelayManager:(id)arg1;
- (id)contextID;
- (id)contextSPIUniqueIdentifier;
- (id)createActionSetWithName:(id)arg1 uuid:(id)arg2 type:(id)arg3;
- (BOOL)currentRemoteReachabilityRegistration;
- (id)currentUser;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)disableNotificationPayload;
- (id)disableNotificationTimer;
- (id)discoveredAccessories;
- (id)dumpActionSetDescription;
- (id)dumpCharacteristicNotificationRegistry;
- (id)dumpState;
- (id)dumpUnpairedSecondaryAccessories;
- (id)enableNotificationPayload;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluateShouldRelaunchAndSetRelaunch;
- (void)executeActionSet:(id)arg1;
- (int)expectedConfigurationVersion;
- (id)filterBuiltinActionSets:(id)arg1;
- (struct NSDictionary { Class x1; }*)firmwareUpdateBulletinContext;
- (void)fixupBridgeForBridgedAccessories:(id)arg1 potentialBridgeAccessories:(id)arg2;
- (void)fixupReplacementAccessories:(id)arg1 commonAccessories:(id)arg2 idsDataSync:(BOOL)arg3 dataVersion:(int)arg4 locallyAdded:(id)arg5;
- (id)getHomeConfigurationForAWD;
- (id)getReachabilityTupleForAccessoryUUID:(id)arg1;
- (void)handleAccessoryReachabilityChangeNotification:(id)arg1;
- (void)handleActiveAccountChanged:(id)arg1;
- (void)handleAppTermination:(id)arg1;
- (void)handleBackgroundTaskAgentJob:(id)arg1;
- (void)handleDidReceiveIDSMessageWithNoListener:(id)arg1;
- (id)heartbeatPingMessagesQueuedWithServer;
- (int)homeLocation;
- (id)homeLocationHandler;
- (id)homeManager;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 defaultRoomUUID:(id)arg3 owner:(id)arg4 homeManager:(id)arg5;
- (void)invalidate;
- (BOOL)isAdminUser;
- (BOOL)isAnyBTLEAccessoryReachable;
- (BOOL)isCurrentDeviceAvaliableResident;
- (BOOL)isOwnerUser;
- (BOOL)isResidentSupported;
- (int)lastKnownReachableAccessoryCount;
- (int)lastKnownReachableIPAccessoryCount;
- (id)logIdentifier;
- (BOOL)mergeOutgoingInvitations:(id)arg1 dataVersion:(int)arg2 locallyAddedUsers:(id)arg3 locallyRemovedUsers:(id)arg4;
- (BOOL)mergeResidentFromHome:(id)arg1 dataVersion:(unsigned int)arg2;
- (BOOL)mergeUsersWithExistingUsers:(id)arg1 remoteAdminUser:(id)arg2 homeManager:(id)arg3 dataVersion:(int)arg4;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (BOOL)migrateAfterResidentChange;
- (id)migrateOwnedTriggers;
- (void)modifyNotificationOnResident:(BOOL)arg1 ignoreDeviceUnlockRequirement:(BOOL)arg2 forCharacteristics:(id)arg3;
- (id)modifyNotificationsCoalesceTimer;
- (id)msgDispatcher;
- (id)name;
- (id)namesOfServicesWithNewFirmwareAvailableInHome;
- (id)notificationDeregistrations;
- (id)notificationRegistrations;
- (id)notificationsUpdatedTime;
- (void)notifyClientOfAccessoryInfoUpdatedForAccessories:(id)arg1;
- (void)notifyClientOfVendorInfoUpdatedForManufacturers:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)notifyDidArriveHome;
- (void)notifyDidEnterHomeRegion;
- (void)notifyDidLeaveHome;
- (void)notifyDidLeaveHomeRegion;
- (void)notifyNewRemotePeersFound:(BOOL)arg1 remoteUsersRemoved:(id)arg2 forceRemoteNotificationRegistration:(BOOL)arg3;
- (void)notifyOfChangedCharacteristic:(id)arg1 changedByThisDevice:(BOOL)arg2 residentShouldNotifyPeers:(BOOL)arg3 message:(id)arg4;
- (id)outgoingInvitations;
- (id)ownedTriggers;
- (id)owner;
- (id)ownerName;
- (id)pairedAccessories;
- (void)pairedAccessoryCountForRoom:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)pairedAccessoryServerIdentifiers;
- (id)pendingResponsesForRemoteAccessSetup;
- (id)pendingUsers;
- (id)propertyQueue;
- (void)reEvaluateTriggers;
- (void)reachabilityChangedForAccessory:(id)arg1 reachable:(BOOL)arg2;
- (id)reachabilityDeregistrationTimer;
- (id)reachabilityNotificationTimer;
- (id)reachabilityRegisteredDevices;
- (int)reachableAccessories;
- (unsigned int)reachableIPAccessories;
- (void)readCharacteristicValues:(id)arg1 identifier:(id)arg2 isSPIEntitled:(BOOL)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)readCharacteristicValues:(id)arg1 requestMessage:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)redispatchToResidentMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3;
- (void)redispatchToResidentMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 viaDevice:(id)arg4;
- (void)reevaluateAccessoryInfo;
- (int)regionState;
- (void)regionStateUpdated:(int)arg1;
- (void)registerForRemoteAccessoryReachabilityNotifications:(BOOL)arg1;
- (BOOL)registeredNotificationWithRemoteGateway;
- (id)relayManager;
- (void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2;
- (void)remoteAccessEnabled:(BOOL)arg1;
- (void)remoteAccessHealthMonitorTimerDidFire;
- (BOOL)remoteAccessIsEnabled;
- (id)remoteAdminEnforcementMessageFilter;
- (id)remoteMessageFilter;
- (id)remoteNotificationHandler;
- (id)remoteReachabilityNotificationPendingAccessories;
- (void)removeAccessoriesFromContainers:(id)arg1;
- (void)removeAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)removeAccessoryInProgressForHMDAccessories;
- (void)removeAllAccessoriesWithCompletionHandler:(id /* block */)arg1 queue:(id)arg2;
- (void)removeCharacteristic:(id)arg1;
- (void)removeDiscoveredAccessories:(id)arg1 bridgeAccessory:(id)arg2;
- (id)removeName:(id)arg1;
- (void)removeResidentCapableDevice:(id)arg1;
- (void)removeService:(id)arg1;
- (void)removeTrigger:(id)arg1;
- (void)removeTriggerNoNotification:(id)arg1;
- (void)removeTriggerOwnedActionSet:(id)arg1;
- (void)removeUnconfiguredResidentDeviceWithUserID:(id)arg1;
- (void)removeUser:(id)arg1;
- (void)removeWithMergeSecondaryAccessory:(id)arg1 removedFromBridgeAccessory:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)removedUsers;
- (id)replaceName:(id)arg1 withNewName:(id)arg2;
- (void)resetConfiguration;
- (id)resident;
- (id)residentCapableDevices;
- (id)residentDeviceManager;
- (void)residentDeviceManager:(id)arg1 didUpdatePrimaryResident:(id)arg2;
- (void)residentDeviceManager:(id)arg1 didUpdateResidentAvailable:(BOOL)arg2;
- (id)retrievalCompletionTuplesForAccessories;
- (void)retrieveHAPAccessoryForHMDAccessory:(id)arg1 linkType:(int)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (id)roomForEntireHome;
- (id)roomWithName:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (id)rooms;
- (void)saveToCurrentAccountWithReason:(id)arg1;
- (void)saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(BOOL)arg3;
- (void)saveWithReason:(id)arg1 postSyncNotification:(BOOL)arg2;
- (void)sendAccessTokensToUser:(id)arg1 user:(id)arg2;
- (id)serviceGroupWithName:(id)arg1;
- (id)serviceGroupWithUUID:(id)arg1;
- (id)serviceGroups;
- (id)services;
- (void)setAccessories:(id)arg1;
- (void)setAccessoryBrowser:(id)arg1;
- (void)setActionSets:(id)arg1;
- (void)setAddPendingAccessories:(id)arg1;
- (void)setAddPendingAccessorySetupCodeHandlers:(id)arg1;
- (void)setAddPendingAccessorySetupCodes:(id)arg1;
- (void)setAdminUser:(BOOL)arg1;
- (void)setAllowsRemoteAccess:(BOOL)arg1;
- (void)setAnyBTLEAccessoryReachable:(BOOL)arg1;
- (void)setAppData:(id)arg1;
- (void)setAssistantOperations:(id)arg1;
- (void)setAtHomeLevel:(int)arg1;
- (void)setCharacteristicNotificationRegistry:(id)arg1;
- (void)setConfigurationVersion:(int)arg1;
- (void)setCurrentRemoteReachabilityRegistration:(BOOL)arg1;
- (void)setDisableNotificationTimer:(id)arg1;
- (void)setDiscoveredAccessories:(id)arg1;
- (void)setExpectedConfigurationVersion:(int)arg1;
- (void)setHeartbeatPingMessagesQueuedWithServer:(id)arg1;
- (void)setHomeLocation:(int)arg1;
- (void)setHomeLocationHandler:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setLastKnownReachableAccessoryCount:(int)arg1;
- (void)setLastKnownReachableIPAccessoryCount:(int)arg1;
- (void)setModifyNotificationsCoalesceTimer:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNotificationDeregistrations:(id)arg1;
- (void)setNotificationRegistrations:(id)arg1;
- (void)setNotificationsUpdatedTime:(id)arg1;
- (void)setOutgoingInvitations:(id)arg1;
- (void)setOwnedTriggers:(id)arg1;
- (void)setOwnerName:(id)arg1;
- (void)setOwnerUser:(BOOL)arg1;
- (void)setPairedAccessories:(id)arg1;
- (void)setPendingResponsesForRemoteAccessSetup:(id)arg1;
- (void)setPendingUsers:(id)arg1;
- (void)setReachabilityDeregistrationTimer:(id)arg1;
- (void)setReachabilityNotificationTimer:(id)arg1;
- (void)setReachabilityRegisteredDevices:(id)arg1;
- (void)setRegionState:(int)arg1;
- (void)setRegisteredNotificationWithRemoteGateway:(BOOL)arg1;
- (void)setRelayManager:(id)arg1;
- (void)setRemoteAccessIsEnabled:(BOOL)arg1;
- (void)setRemoteReachabilityNotificationPendingAccessories:(id)arg1;
- (void)setRemoveAccessoryInProgressForHMDAccessories:(id)arg1;
- (void)setRemovedUsers:(id)arg1;
- (void)setResident:(id)arg1;
- (void)setRetrievalCompletionTuplesForAccessories:(id)arg1;
- (void)setRoomForEntireHome:(id)arg1;
- (void)setRooms:(id)arg1;
- (void)setServiceGroups:(id)arg1;
- (void)setServices:(id)arg1;
- (void)setStateHandle:(unsigned long long)arg1;
- (void)setTriggerOwnedActionSets:(id)arg1;
- (void)setTriggers:(id)arg1;
- (void)setUnconfiguredResidentDevices:(id)arg1;
- (void)setUsers:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setZones:(id)arg1;
- (id)shortDescription;
- (BOOL)shouldRelayNotificationToRegisteredDevicesForSource:(id)arg1;
- (void)startSearchingForBridgedAccessories;
- (unsigned long long)stateHandle;
- (void)stopSearchingForBridgedAccessories;
- (void)subscribeForNotificationsFromRemoteGateway;
- (void)takeOwnershipOfAccessories:(id)arg1;
- (void)takeOwnershipOfAppData:(id)arg1;
- (BOOL)takeOwnershipOfBuiltinActionSets:(id)arg1;
- (void)takeOwnershipOfNotificationRegistry:(id)arg1;
- (void)takeOwnershipOfTriggers:(id)arg1 triggersToReactivate:(id)arg2 dataVersion:(int)arg3 pendingTransactions:(id)arg4;
- (void)timerDidFire:(id)arg1;
- (id)triggerOwnedActionSetWithUUID:(id)arg1;
- (id)triggerOwnedActionSets;
- (id)triggerWithName:(id)arg1;
- (id)triggerWithUUID:(id)arg1;
- (id)triggers;
- (id)unconfiguredResidentDevices;
- (id)unpairedSecondaryHAPAccessories;
- (void)updateActionSetExecutionDates:(id)arg1;
- (void)updateHomeLocation;
- (void)updateNetworkConnectivity:(BOOL)arg1 companionReachable:(BOOL)arg2;
- (id)url;
- (void)userManagementOperationDidFinish:(id)arg1;
- (id)userWithUUID:(id)arg1;
- (id)users;
- (id)uuid;
- (void)validateDuetEventIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)validateName:(id)arg1;
- (id)workQueue;
- (void)writeCharacteristicValues:(id)arg1 identifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)writeCharacteristicValues:(id)arg1 transactionId:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)writeRequestTuplesFromMessage:(id)arg1;
- (id)zoneWithName:(id)arg1;
- (id)zoneWithUUID:(id)arg1;
- (id)zones;

@end
