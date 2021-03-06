//
// Licensed under the terms in License.txt
//
// Copyright 2010 Allen Ding. All rights reserved.
//

#import "KiwiConfiguration.h"
#import "KWMatcher.h"

@interface KWBeMemberOfClassMatcher : KWMatcher {
@private
    Class targetClass;
}

#pragma mark -
#pragma mark Configuring Matchers

- (void)beMemberOfClass:(Class)aClass;

@end
