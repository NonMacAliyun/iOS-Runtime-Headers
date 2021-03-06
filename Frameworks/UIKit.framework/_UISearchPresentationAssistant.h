/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISearchPresentationAssistant : NSObject <UIDimmingViewDelegate> {
    UIPresentationController<_UISearchControllerPresenting> *_adaptivePresentationController;
    UIDimmingView *_dimmingView;
    BOOL _isFormSheetPresentation;
    BOOL _presentationWasAnimated;
    UIView *_searchBarContainerView;
    UIPresentationController *_searchPresentationController;
    <UIViewControllerTransitionCoordinator> *_transitioningToSizeCoordinator;
}

@property (nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (nonatomic) BOOL presentationWasAnimated;
@property (nonatomic, retain) <UIViewControllerTransitionCoordinator> *transitioningToSizeCoordinator;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_containerFrame;
- (BOOL)_currentTransitionIsRotating;
- (id)_searchBarContainerSuperview;
- (id)_searchControllerPresenting;
- (float)_statusBarHeightChangeDueToRotation;
- (BOOL)_statusBarPreferredHidden;
- (BOOL)_statusBarPreferredHiddenForInterfaceOrientation:(int)arg1;
- (id)adaptivePresentationController;
- (void)dealloc;
- (id)dimmingView;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)ensureAppropriatelySizedSearchBar:(id)arg1;
- (id)initWithSearchPresentationController:(id)arg1;
- (id)locateNavigationController;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })optimalFrameForSearchBar:(id)arg1;
- (BOOL)presentationIsPopoverToOverFullScreenAdaptation;
- (BOOL)presentationWasAnimated;
- (void)removeContainerViewFromSuperview;
- (float)resultsControllerContentOffset;
- (id)searchBarContainerView;
- (BOOL)searchBarToBecomeTopAttached;
- (BOOL)searchBarWillResizeForScopeBar;
- (void)setAdaptivePresentationController:(id)arg1;
- (void)setPresentationWasAnimated:(BOOL)arg1;
- (void)setTransitioningToSizeCoordinator:(id)arg1;
- (BOOL)shouldAccountForStatusBar;
- (float)statusBarAdjustment;
- (id)transitioningToSizeCoordinator;
- (struct CGSize { float x1; float x2; })updateSearchBarContainerFrame;

@end
