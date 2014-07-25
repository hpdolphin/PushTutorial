//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

/* Touch handler for the button */
-(IBAction)broadcastPushNotification:(id)sender;
@property (strong, nonatomic) IBOutlet UISegmentedControl *genderControl;
@property (strong, nonatomic) IBOutlet UISlider *ageControl;
@property (weak, nonatomic) IBOutlet UIButton *sendButton;

@property (strong, nonatomic) IBOutlet UILabel *ageLabel;
- (IBAction)updateInstallation:(id)sender;
- (IBAction)updateAgeLabel:(id)sender;
- (IBAction)clickButton:(id)sender;
@end
