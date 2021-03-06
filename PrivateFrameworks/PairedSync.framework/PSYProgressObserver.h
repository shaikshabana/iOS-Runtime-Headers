/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYProgressObserver : NSObject {
    NSDictionary *_activityErrors;
    NSString *_activityLabel;
    double _activityProgress;
    NSXPCConnection *_connection;
    <PSYProgressObserverDelegate> *_delegate;
    NSMutableDictionary *_failedActivities;
    PSProgressClient *_progressClient;
    int _progressObserverState;
    NSObject<OS_dispatch_queue> *_queue;
    double _totalProgress;
}

@property (nonatomic, readonly, copy) NSDictionary *activityErrors;
@property (nonatomic, retain) NSString *activityLabel;
@property (nonatomic) double activityProgress;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) <PSYProgressObserverDelegate> *delegate;
@property (nonatomic, retain) PSProgressClient *progressClient;
@property (nonatomic, readonly) int progressObserverState;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double totalProgress;

- (void).cxx_destruct;
- (void)_connectionInterrupted;
- (void)_currentActivityChanged:(id)arg1 fromActivity:(id)arg2 error:(id)arg3;
- (void)_resetProgress;
- (void)_scheduledJobsDidComplete;
- (void)_setCurrentActivityProgress:(float)arg1 totalProgress:(float)arg2;
- (void)_updateState;
- (id)activityErrors;
- (id)activityLabel;
- (double)activityProgress;
- (id)connection;
- (id)delegate;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)progressClient;
- (int)progressObserverState;
- (id)queue;
- (void)setActivityLabel:(id)arg1;
- (void)setActivityProgress:(double)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProgressClient:(id)arg1;
- (void)setProgressObserverState:(int)arg1;
- (void)setQueue:(id)arg1;
- (void)setTotalProgress:(double)arg1;
- (double)totalProgress;

@end
