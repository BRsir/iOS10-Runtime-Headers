/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDDropShadow : TSDShadow

+ (id)instanceWithArchive:(const struct ShadowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; float x6; float x7; int x8; float x9; bool x10; int x11; struct DropShadowArchive {} *x12; struct ContactShadowArchive {} *x13; struct CurvedShadowArchive {} *x14; }*)arg1 unarchiver:(id)arg2;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForRep:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInNaturalSpaceForRep:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(id)arg5 enabled:(bool)arg6;
- (id)initWithArchive:(const struct ShadowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; float x6; float x7; int x8; float x9; bool x10; int x11; struct DropShadowArchive {} *x12; struct ContactShadowArchive {} *x13; struct CurvedShadowArchive {} *x14; }*)arg1 unarchiver:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newShadowClampedForSwatches;
- (struct CGImage { }*)newShadowImageForRep:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 drawSelector:(SEL)arg3 unflipped:(bool)arg4;
- (void)saveToArchive:(struct ShadowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; float x6; float x7; int x8; float x9; bool x10; int x11; struct DropShadowArchive {} *x12; struct ContactShadowArchive {} *x13; struct CurvedShadowArchive {} *x14; }*)arg1 archiver:(id)arg2;
- (unsigned long long)shadowType;

@end