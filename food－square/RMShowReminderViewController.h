//
//  RMShowReminderViewController.h
//  food－square
//
//  Created by Apple on 13-9-29.
//  Copyright (c) 2013年 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <EventKit/EventKit.h>

typedef void (^RMShowReminderViewControllerDeleteBlock)();


@interface RMShowReminderViewController : UITableViewController

@property (strong, nonatomic) EKReminder *reminder;
@property (copy, nonatomic) RMShowReminderViewControllerDeleteBlock deleteReminderCompletion;
@property(nonatomic,strong) IBOutlet UIImageView *detailImageView;
@property(nonatomic,strong)IBOutlet UILabel *score;
@property(nonatomic,strong)NSString *finalScore;
@property(nonatomic,strong)UIImage *detailImage;
@end
