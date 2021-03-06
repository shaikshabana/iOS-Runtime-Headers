/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    <AFAnalyticsService> *_service;
}

+ (id)sharedAnalytics;

- (void).cxx_destruct;
- (id)_service:(BOOL)arg1;
- (void)_stageEvent:(id)arg1;
- (void)_stageEvents:(id)arg1;
- (id)init;
- (void)logEvent:(id)arg1;
- (void)logEventWithType:(int)arg1 context:(id)arg2;
- (void)logEventWithType:(int)arg1 context:(id)arg2 contextNoCopy:(BOOL)arg3;
- (void)logEventWithType:(int)arg1 contextProvider:(id /* block */)arg2;
- (void)logEventWithType:(int)arg1 contextProvider:(id /* block */)arg2 contextProvidingQueue:(id)arg3;
- (void)logEventWithType:(int)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 contextNoCopy:(BOOL)arg4;
- (void)logEventWithType:(int)arg1 machAbsoluteTime:(unsigned long long)arg2 contextProvider:(id /* block */)arg3 contextProvidingQueue:(id)arg4;
- (void)logEvents:(id)arg1;
- (void)setService:(id)arg1;

@end
