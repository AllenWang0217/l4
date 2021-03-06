#ifndef HDA721C5C_73E8_411C_B459_F7F47C2573C3
#define HDA721C5C_73E8_411C_B459_F7F47C2573C3

#include <foo/l2-context/FooAsynAction1.h>
#include <foo/l2-context/FooAsynAction2.h>
#include <foo/l2-context/FooSyncAction3.h>
#include <foo/l3-trans/FooGenericTransaction.h>
#include <foo/l3-trans/trans1/FooTrans1Context.h>
#include <trans-dsl/sched/concept/TransactionListener.h>
#include <trans-dsl/TransactionDsl.h>

L4_NS_BEGIN

__def_transaction
( __sequential
    ( __asyn(FooAsynAction1)
    , __asyn(FooAsynAction2)
    , __sync(FooSyncAction3))
, __finally(__on_fail(__throw(TSL_NOTHING_CHANGED)))
) FooTrans1;

///////////////////////////////////////////////////////////////////
__def_pack_trans(FooTrans1, FooTrans1Context) FooTrans1Trans;

L4_NS_END

#endif /* HDA721C5C_73E8_411C_B459_F7F47C2573C3 */
