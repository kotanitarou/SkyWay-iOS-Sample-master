//
// MenuViewController.h
// SkyWay-iOS-Sample
//

#import <UIKit/UIKit.h>

@interface MenuViewController : UIViewController <UITextFieldDelegate>
- (IBAction)ChangeGreeting:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (copy, nonatomic) NSString *userName;

@property (weak, nonatomic) IBOutlet UITextField *testTextField;


@end
