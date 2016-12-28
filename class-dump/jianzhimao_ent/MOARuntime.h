//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MOARuntime : NSObject
{
}

+ (CDUnknownFunctionPointerType)msgForwardIMPWithMethod:(struct objc_method *)arg1;
+ (_Bool)copyClassMethodForClass:(Class)arg1 atSelector:(SEL)arg2 toSelector:(SEL)arg3;
+ (_Bool)copyInstanceMethodForClass:(Class)arg1 atSelector:(SEL)arg2 toSelector:(SEL)arg3;
+ (_Bool)addClassMethodForClass:(Class)arg1 selector:(SEL)arg2 implementationBlock:(id)arg3;
+ (_Bool)addInstanceMethodForClass:(Class)arg1 selector:(SEL)arg2 implementationBlock:(id)arg3;
+ (void)overwritingMessageForwardClassMethodForClass:(Class)arg1 selector:(SEL)arg2;
+ (void)overwritingMessageForwardInstanceMethodForClass:(Class)arg1 selector:(SEL)arg2;
+ (void)overwritingInstanceMethodForClass:(Class)arg1 selector:(SEL)arg2 implementationBlock:(id)arg3;
+ (void)overwritingClassMethodForClass:(Class)arg1 selector:(SEL)arg2 implementationBlock:(id)arg3;
+ (_Bool)hasClassMethodForClass:(Class)arg1 selector:(SEL)arg2;
+ (Class)rootClassForClassRespondsToClass:(Class)arg1 selector:(SEL)arg2;
+ (Class)rootClassForInstanceRespondsToClass:(Class)arg1 selector:(SEL)arg2;
+ (_Bool)hasInstanceMethodForClass:(Class)arg1 selector:(SEL)arg2;
+ (id)instanceMethodSignatureWithClass:(Class)arg1 selector:(SEL)arg2;
+ (id)classMethodSignatureWithClass:(Class)arg1 selector:(SEL)arg2;
+ (_Bool)selector:(SEL)arg1 isEqualToSelector:(SEL)arg2;
+ (SEL)selectorWithSelector:(SEL)arg1 prefix:(id)arg2;
+ (_Bool)hasPropertyName:(id)arg1 atClass:(Class)arg2;
+ (const char *)objcTypeEncodingWithBlock:(id)arg1;
+ (const char *)objcTypeEncodingWithClass:(Class)arg1 instanceMethodSelector:(SEL)arg2;
+ (const char *)objcTypeEncodingWithClass:(Class)arg1 classMethodSelector:(SEL)arg2;
+ (id)propertyNamesWithClass:(Class)arg1 depthForClass:(Class)arg2;
+ (id)propertyNamesWithClass:(Class)arg1 depth:(_Bool)arg2;
+ (id)propertyNamesWithClass:(Class)arg1;
+ (void)exchangeImplementationsWithClass:(Class)arg1 fromClassMethodSelector:(SEL)arg2 toClassMethodSelector:(SEL)arg3;
+ (void)exchangeImplementationsWithClass:(Class)arg1 fromInstanceMethodSelector:(SEL)arg2 toInstanceMethodSelector:(SEL)arg3;
+ (Class)metaClassWithClass:(Class)arg1;
+ (id)classNamesForRegexPattern:(id)arg1;
+ (id)classNames;
+ (Class)classWithString:(id)arg1;
+ (id)stringWithClass:(Class)arg1;

@end

