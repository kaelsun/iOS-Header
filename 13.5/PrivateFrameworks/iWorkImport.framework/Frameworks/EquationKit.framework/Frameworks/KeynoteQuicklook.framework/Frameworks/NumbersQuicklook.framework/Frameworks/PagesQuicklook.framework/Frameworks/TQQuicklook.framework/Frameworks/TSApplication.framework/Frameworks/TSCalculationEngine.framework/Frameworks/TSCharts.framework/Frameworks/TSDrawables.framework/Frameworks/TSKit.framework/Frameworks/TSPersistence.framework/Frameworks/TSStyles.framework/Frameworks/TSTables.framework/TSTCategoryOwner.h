//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSTables/TSTCellWillChangeProtocol-Protocol.h>
#import <TSTables/TSTMergeChangeProtocol-Protocol.h>

@class NSArray, NSMutableArray, TSCECalculationEngine, TSTTableInfo, TSTTableModel;

@interface TSTCategoryOwner : NSObject <TSTCellWillChangeProtocol, TSTMergeChangeProtocol>
{
    TSTTableInfo *_tableInfo;
    TSCECalculationEngine *_calcEngine;
    UUIDData_5fbc143e _baseTableUID;
    UUIDData_5fbc143e _ownerUID;
    NSMutableArray *_groupBys;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *groupBys; // @synthesize groupBys=_groupBys;
@property(nonatomic) UUIDData_5fbc143e ownerUID; // @synthesize ownerUID=_ownerUID;
@property(nonatomic) UUIDData_5fbc143e baseTableUID; // @synthesize baseTableUID=_baseTableUID;
- (void)didAddRows:(const vector_4dc5f307 *)arg1;
- (void)willRemoveRows:(const vector_4dc5f307 *)arg1 tableUID:(const UUIDData_5fbc143e *)arg2;
- (void)didUnmergeRange:(struct TSUModelCellRect)arg1;
- (void)didMergeRange:(struct TSUModelCellRect)arg1;
- (void)willApplyConcurrentCellMap:(id)arg1 tableUID:(const UUIDData_5fbc143e *)arg2;
- (void)willApplyBaseCellMap:(id)arg1 tableUID:(const UUIDData_5fbc143e *)arg2;
- (void)willApplyCell:(id)arg1 baseCellCoord:(struct TSUModelCellCoord)arg2 tableUID:(const UUIDData_5fbc143e *)arg3;
- (UUIDData_5fbc143e)p_willApplyCell:(id)arg1 baseCellCoord:(struct TSUModelCellCoord)arg2 refreshCategoryInfo:(_Bool)arg3;
- (void)remapTableUIDsInFormulasWithMap:(const UUIDMap_71b9b5e2 *)arg1 calcEngine:(id)arg2;
- (void)saveToArchive:(struct CategoryOwnerArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct CategoryOwnerArchive *)arg1 unarchiver:(id)arg2 forBaseTableUID:(const UUIDData_5fbc143e *)arg3;
- (void)updateWithDocumentRoot:(id)arg1;
- (id)categoryInfos;
- (void)unregisterGroupBy:(id)arg1;
- (id)registerGroupByForColumns:(id)arg1;
- (id)groupByByUid:(const UUIDData_5fbc143e *)arg1;
- (void)registerGroupBy:(id)arg1;
- (id)calcEngine;
- (void)unregisterFromCalcEngine;
- (int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (void)teardown;
@property(readonly, nonatomic) TSTTableModel *tableModel;
@property(nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (void)unregisterFromDistributors;
- (void)registerWithDistributors;
- (id)description;
- (_Bool)hasEnabledGroupBys;
- (void)dealloc;
- (id)initWithBaseTableUID:(const UUIDData_5fbc143e *)arg1;
- (id)initWithBaseTableUID:(const UUIDData_5fbc143e *)arg1 ownerUID:(const UUIDData_5fbc143e *)arg2;

@end

