//
//  SettingsViewController.h
//  GeoEvents
//
//  Created by Martin Roedvand on 11/12/2009.
//  Copyright 2009 Redwater software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AboutViewController.h"
/* Prefix-Letter: s */

@interface SettingsViewController : UITableViewController {
	AboutViewController * aboutView;
}

@property (nonatomic, retain) AboutViewController * aboutView; 

enum sSections {
	sAccountSettings = 0,
	sSearchSettings,
	sAboutSection,
	sNUM_SECTIONS
};

enum sAccountsSection {
	sLastfmRow = 0,
	sFacebookRow,
	sTwitterRow,
	sNUM_ACCOUNT_ROWS
};

enum sSearchSection {
	sKilometersRangeRow = 0,
	sNumberOfResultsRow,
	sNUM_SEARCH_ROWS
};

enum sAboutSection {
	sAboutRow = 0,
	sNUM_ABOUT_ROWS
};



@end
