//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, RegistrationBean;

@interface JobBeanSelected : NSObject
{
    NSString *_applyId;
    RegistrationBean *_conditionAllBean;
    RegistrationBean *_conditionMatchBean;
    RegistrationBean *_selectedBean;
}

@property(retain, nonatomic) RegistrationBean *selectedBean; // @synthesize selectedBean=_selectedBean;
@property(retain, nonatomic) RegistrationBean *conditionMatchBean; // @synthesize conditionMatchBean=_conditionMatchBean;
@property(retain, nonatomic) RegistrationBean *conditionAllBean; // @synthesize conditionAllBean=_conditionAllBean;
@property(retain, nonatomic) NSString *applyId; // @synthesize applyId=_applyId;
- (void).cxx_destruct;

@end

