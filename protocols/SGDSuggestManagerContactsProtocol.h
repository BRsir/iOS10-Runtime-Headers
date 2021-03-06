/* Generated by RuntimeBrowser.
 */

@protocol SGDSuggestManagerContactsProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>

@required

- (void)allContactsLimitedTo:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)cnContactMatchesForRecordId:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)cnContactMatchesForRecordIds:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)contactFromRecordId:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGContact *, NSError *, void*
- (void)contactMatchesByEmailAddress:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)contactMatchesByPhoneNumber:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)contactMatchesOrLookupIdByEmailAddress:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGContactMatchArrayOption *, NSError *, void*
- (void)contactMatchesOrLookupIdByPhoneNumber:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGContactMatchArrayOption *, NSError *, void*
- (void)contactMatchesWithContact:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: CNContact *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)contactMatchesWithContactIdentifier:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)contactMatchesWithFullTextSearch:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)contactMatchesWithMessagingPrefix:(void *)arg1 limitTo:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)emailAddressIsSignificant:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)namesForDetail:(void *)arg1 limitTo:(void *)arg2 prependMaybe:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: NSString *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)originFromRecordId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGOrigin *, NSError *, void*
- (void)relevantABRecordIDsWithLimit:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
