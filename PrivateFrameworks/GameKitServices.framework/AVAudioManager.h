/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class AVAudioDevice, NSDictionary, NSMutableArray, NSNumber, NSObject<OS_dispatch_queue>, NSString;

@interface AVAudioManager : NSObject {
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } audioLock;
    int audioRefCount;
    NSDictionary *backMicSource;
    boolcurrentAudioRecordingMode;
    boolcurrentReceiverStatus;
    boolenableSpeakerPhone;
    boolisGKVoiceChat;
    boolisInMediaserverd;
    boolisMicrophoneMuted;
    boolisTetheredDisplayMode;
    boolisUsingSuppression;
    boolmicInUse;
    boolspkrInUse;
    boolusingFloat;
    int clientPID;
    struct opaqueCMSession { } *cmSession;
    NSObject<OS_dispatch_queue> *cmSessionQueue;
    int cmSessionRefCount;
    int connectionRefCount;
    NSString *currentAudioCategory;
    NSString *currentAudioMode;
    NSNumber *currentClientPriority;
    int currentMinSamplesPerFrame;
    int currentSampleRate;
    unsigned int currentVPOperatingMode;
    int direction;
    struct AudioEventQueue_t { } *eventQ;
    float fLastStartAudioSessionCall;
    NSDictionary *frontMicSource;
    struct tagHANDLE { int x1; } *hAUIO;
    int hardwareSampleRate;
    int inferredDeviceRole;
    int inferredOperatingMode;
    NSObject<OS_dispatch_queue> *inputDeviceQueue;
    int internalBlockSize;
    NSMutableArray *micConfList;
    NSDictionary *requestedSessionParams;
    int requestedVPOperatingMode;
    NSMutableArray *spkrConfList;
    AVAudioDevice *targetInputDevice;
    } vpioFormat;
}

@property int clientPID;
@property(getter=isSpeakerPhoneEnabled) bool enableSpeakerPhone;
@property(readonly) int inferredOperatingMode;
@property bool isGKVoiceChat;
@property bool isInMediaserverd;
@property bool isUsingSuppression;
@property(retain) AVAudioDevice * targetInputDevice;
@property(readonly) bool usingFloat;

+ (id)defaultAVAudioManager;

- (void)AUIOSetup:(struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; }*)arg1 minSamplesPerFrame:(int)arg2 allowAudioRecording:(bool)arg3 ignoreRefCount:(bool)arg4 operatingMode:(int)arg5 deviceRole:(int)arg6 completionHandler:(id)arg7;
- (void)AUIOTeardown:(bool)arg1;
- (void)addConference:(id)arg1;
- (void)audioSessionClientDied:(int)arg1;
- (void)cleanupAUIOSetupWithResult:(int)arg1 completionHandler:(id)arg2;
- (int)clientPID;
- (struct opaqueCMSession { }*)cmSessionRef;
- (id)currentInputDevice;
- (void)enableMetering:(bool)arg1 isInputMeter:(bool)arg2;
- (bool)forceBufferFrames:(int*)arg1;
- (bool)forceSampleRate:(double*)arg1;
- (void)getVpioFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (void)handleAudioInterruption:(struct opaqueCMSession { }*)arg1 interruptionInfo:(struct __CFDictionary { }*)arg2 cmd:(unsigned int)arg3;
- (int)inferredOperatingMode;
- (id)init;
- (void)internalSetRemoteBasebandCodecType:(id)arg1 sampleRate:(id)arg2;
- (void)invalidateCurrentAudioParams;
- (bool)isGKVoiceChat;
- (bool)isInMediaserverd;
- (bool)isSpeakerPhoneEnabled;
- (bool)isUsingSuppression;
- (void)onCaptureSound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned int)arg9;
- (void)onPlaySound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 averagePower:(float)arg5;
- (void)processEventQueue;
- (bool)projectionModeEnabledState;
- (void)removeConference:(id)arg1;
- (void)resetAudioSessionProperties;
- (void)selectMicForDirection;
- (void)setAudioSessionParameters:(id)arg1;
- (void)setAudioSessionProperties;
- (void)setBlockSize:(bool)arg1;
- (void)setBlockSizeDispatch:(bool)arg1;
- (void)setClientPID:(int)arg1;
- (bool)setCurrentInputDevice:(id)arg1;
- (void)setDirection:(int)arg1;
- (void)setEnableSpeakerPhone:(bool)arg1;
- (void)setIsGKVoiceChat:(bool)arg1;
- (void)setIsInMediaserverd:(bool)arg1;
- (void)setIsUsingSuppression:(bool)arg1;
- (void)setMicrophoneMuted:(bool)arg1;
- (void)setRemoteBasebandCodecType:(id)arg1 sampleRate:(id)arg2;
- (void)setSampleRate;
- (void)setSamplesPerFrame:(int)arg1;
- (void)setTargetInputDevice:(id)arg1;
- (void)setupAudioNotifications;
- (unsigned long long)setupAudioSession;
- (void)setupInputBeamforming;
- (void)setupVPBlockFormat;
- (void)startAudioIOWithFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; }*)arg1 minSamplesPerFrame:(int)arg2 internalFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg3 allowAudioRecording:(bool)arg4 operatingMode:(int)arg5 deviceRole:(int)arg6 remoteBasebandCodecType:(id)arg7 remoteBasebandCodecSampleRate:(id)arg8 completionHandler:(id)arg9;
- (unsigned long long)startAudioSessionWithCompletionHandler:(id)arg1 dispatchQueue:(id)arg2;
- (void)stopAudioIO;
- (void)stopAudioSession:(unsigned long long)arg1;
- (id)targetInputDevice;
- (void)tearDownAudioIO:(bool)arg1;
- (void)tearDownAudioSession:(unsigned long long)arg1 forceTearDown:(bool)arg2;
- (bool)usingFloat;
- (unsigned int)vpOperationModeForConferenceOperatingMode:(int)arg1 deviceRole:(int)arg2;

@end
