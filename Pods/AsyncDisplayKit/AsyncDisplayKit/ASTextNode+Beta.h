//
//  ASTextNode+Beta.h
//  AsyncDisplayKit
//
//  Created by Luke on 1/25/16.
//  Copyright © 2016 Facebook. All rights reserved.
//

<<<<<<< HEAD
=======
NS_ASSUME_NONNULL_BEGIN
>>>>>>> c56ed55589219127f1e061283ee5b1ef4cf3dad7

@interface ASTextNode ()

/**
 @abstract An array of descending scale factors that will be applied to this text node to try to make it fit within its constrained size
 @default nil (no scaling)
 */
<<<<<<< HEAD
@property (nonatomic, copy) NSArray *pointSizeScaleFactors;
=======
@property (nullable, nonatomic, copy) NSArray *pointSizeScaleFactors;
>>>>>>> c56ed55589219127f1e061283ee5b1ef4cf3dad7

#pragma mark - ASTextKit Customization
/**
 A block to provide a hook to provide a custom NSLayoutManager to the ASTextKitRenderer
 */
<<<<<<< HEAD
@property (nonatomic, copy) NSLayoutManager * (^layoutManagerCreationBlock)(void);

/**
 A block to provide a hook to provide a NSTextStorage to the Text Kit's layout manager.
 */
@property (nonatomic, copy) NSTextStorage * (^textStorageCreationBlock)(NSAttributedString *attributedString);


@end
=======
@property (nullable, nonatomic, copy) NSLayoutManager * (^layoutManagerCreationBlock)(void);

/**
 A block to provide a hook to provide a NSTextStorage to the TextKit's layout manager.
 */
@property (nullable, nonatomic, copy) NSTextStorage * (^textStorageCreationBlock)(NSAttributedString *_Nullable attributedString);

@end

NS_ASSUME_NONNULL_END
>>>>>>> c56ed55589219127f1e061283ee5b1ef4cf3dad7
