/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

@protocol BBWeeAppController <NSObject>
- (id)view;

@optional
- (float)viewHeight;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (void)willRotateToInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)loadPlaceholderView;
- (void)loadFullView;
- (void)unloadView;
- (void)loadView;
- (id)launchURL;
- (id)launchURLForTapLocation:(struct CGPoint)arg1;
@end
