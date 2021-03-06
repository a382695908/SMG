//
//  MemStore.h
//  SMG_NothingIsAll
//
//  Created by 贾  on 2017/4/7.
//  Copyright © 2017年 XiaoGang. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  MARK:--------------------记忆存储--------------------
 *  1,MemStore.memArr是内存kv存储;
 *  2,MemStore的TMCache中有localKV存储;
 */
@class MemModel;
@interface MemStore : NSObject


-(NSDictionary*) getLastMemory;                         //获取最后一条;
-(NSDictionary*) getPreviousMemory:(NSDictionary*)mem;  //获取mem的上一条;
-(NSDictionary*) getNextMemory:(NSDictionary*)mem;      //获取mem的下一条;
-(NSDictionary*) getSingleMemoryWithWhereDic:(NSDictionary*)whereDic;   //获取where的最近一条;
-(NSMutableArray*) getMemoryWithWhereDic:(NSDictionary*)whereDic;              //获取where的所有条;
-(NSDictionary*) getSingleMemoryContainsWhereDic:(NSDictionary*)whereDic;              //获取where的最近一条;(模糊匹配)
-(NSMutableArray*) getMemoryContainsWhereDic:(NSDictionary*)whereDic limit:(NSInteger)limit;  //获取where的所有条;(模糊匹配)
-(NSMutableArray*) getMemoryContainsWithDoId:(NSString*)doId limit:(NSInteger)limit;  //获取doId的所有条;(模糊匹配)

-(void) addMemory:(NSDictionary*)mem;                   //新增一条
-(void) addMemory:(NSDictionary*)mem insertFrontByMem:(NSDictionary*)byMem;            //新增mem到byMem前面;
-(void) addMemory:(NSDictionary*)mem insertBackByMem:(NSDictionary*)byMem;             //新增mem到byMem后面;

-(void) clear;//清除记忆

-(void) saveToLocal;



+(NSInteger) createGroupId;

@end
