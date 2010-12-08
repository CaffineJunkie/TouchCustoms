//
//  SCROptionTableController.h
//  TouchCustoms
//
//  Created by Aleks Nesterow on 10/26/10.
//	aleks@screencustoms.com
//	
//  Copyright © 2010 Screencustoms, LLC.
//	All rights reserved.
//	
//	Purpose
//	
//	Allows to select a single element or a series of elements out of the list.
//	Selection type is regulated by SCROptionBasket parameters.
//

#import "SCROptionBasket.h"

@interface SCROptionTableController : UITableViewController
{
@private
	SCROptionBasket *_optionBasket;
}

@property (nonatomic, retain) SCROptionBasket *optionBasket;

@end
