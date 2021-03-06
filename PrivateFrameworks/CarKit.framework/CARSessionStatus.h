/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARSessionStatus : NSObject {
    CARSession * _session;
    <CARSessionObserving> * _sessionObserver;
    NSObject<OS_dispatch_queue> * _sessionUpdatesQueue;
}

@property (nonatomic, readonly) CARSession *currentSession;
@property (nonatomic, retain) CARSession *session;
@property (nonatomic) <CARSessionObserving> *sessionObserver;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sessionUpdatesQueue;

- (void).cxx_destruct;
- (void)_notifyDidConnectSession:(id)arg1;
- (void)_notifyDidDisconnectSession:(id)arg1;
- (void)_updateSession;
- (id)currentSession;
- (void)dealloc;
- (id)init;
- (id)session;
- (id)sessionObserver;
- (id)sessionUpdatesQueue;
- (void)setSession:(id)arg1;
- (void)setSessionObserver:(id)arg1;
- (void)setSessionUpdatesQueue:(id)arg1;

@end
