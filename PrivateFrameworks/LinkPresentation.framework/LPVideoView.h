/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPVideoView : LPComponentView <LPMediaPlayer, UIGestureRecognizerDelegate> {
    BOOL  _disablePlayback;
    BOOL  _hasBuilt;
    UIImageView * _muteButtonView;
    UIView * _playButtonContainerView;
    UIView * _playButtonView;
    LPStatisticsTimingToken * _playbackDelayTimingToken;
    BOOL  _playing;
    LPImage * _posterFrame;
    LPImageViewStyle * _posterFrameStyle;
    UIView * _pulsingLoadView;
    LPVideoViewStyle * _style;
    BOOL  _usesSharedAudioSession;
    LPVideo * _video;
    UIView * _videoPlaceholderView;
    UIView * _videoView;
    UIView * _visualEffectView;
    BOOL  _wasPlayingWhenSuspended;
    BOOL  _wasPlayingWhenUnparented;
}

@property (getter=isActive, nonatomic) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isMuted;
@property (nonatomic, readonly) BOOL isPlaying;
@property (getter=isMuted, nonatomic) BOOL muted;
@property (getter=isPlaying, nonatomic) BOOL playing;
@property (nonatomic, readonly) BOOL shouldAutoPlay;
@property (nonatomic, readonly) BOOL shouldShowMuteButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL usesSharedAudioSession;
@property (nonatomic, readonly) LPVideo *video;

- (void).cxx_destruct;
- (void)_buildVideoPlaceholderView;
- (id)_createPosterFrameView;
- (id)_createPulsingLoadIndicator;
- (void)_muteButtonHighlightLongPressRecognized:(id)arg1;
- (void)_muteButtonTapRecognized:(id)arg1;
- (void)_swapVideoPlaceholderForVideo;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)componentViewDidMoveToWindow;
- (id)createVideoPlayerView;
- (void)dealloc;
- (void)didChangeMutedState:(BOOL)arg1;
- (void)didChangePlayingState:(BOOL)arg1;
- (void)didEncounterPlaybackError;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 disablePlayback:(BOOL)arg5;
- (BOOL)isActive;
- (BOOL)isMuted;
- (BOOL)isPlaying;
- (void)layoutComponentView;
- (void)removePlaceholderViews;
- (void)setActive:(BOOL)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setPlaying:(BOOL)arg1;
- (BOOL)shouldAutoPlay;
- (BOOL)shouldShowMuteButton;
- (void)showMuteButton;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tapRecognized:(id)arg1;
- (void)updateMuteButtonImage;
- (BOOL)usesSharedAudioSession;
- (id)video;

@end
