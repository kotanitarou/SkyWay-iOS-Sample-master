//
// MediaConnectionViewController.h
// SkyWay-iOS-Sample
//

//testwriting

#import <UIKit/UIKit.h>

@interface MediaConnectionViewController : UIViewController

@property (nonatomic) NSUInteger peerType;
@property (nonatomic) NSString* serverIP;

- (void)callingTo:(NSString *)strDestId;

@end

