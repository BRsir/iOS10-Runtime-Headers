/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUSimpleDeserializer : VMUAbstractSerializer {
    void * _cache;
    id /* block */  _destructor;
}

- (unsigned int*)_deserializeValues:(unsigned int)arg1;
- (const char *)copyDeserializedNullTerminatedBytes;
- (id)copyDeserializedString;
- (id)copyDeserializedStringWithID:(unsigned int)arg1;
- (void)dealloc;
- (unsigned int)deserialize32;
- (unsigned long long)deserialize64;
- (id)initWithBuffer:(const void*)arg1 length:(unsigned int)arg2 destructor:(id /* block */)arg3;
- (void)skipFields:(unsigned int)arg1;

@end