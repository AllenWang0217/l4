#include <foo/l2-context/FooAsynAction2.h>
#include <event/concept/Event.h>
#include <trans-dsl/TslStatus.h>
#include <foo/l4-sched/FooEvent.h>

#include <iostream>

L4_NS_BEGIN

///////////////////////////////////////////////////////////////////
cub::Status FooAsynAction2::exec(const tsl::TransactionInfo&)
{
    WAIT_ON(EV_EVENT2, handleEvent2);

    return TSL_CONTINUE;
}

///////////////////////////////////////////////////////////////////
cub::Status FooAsynAction2::handleEvent2(const tsl::TransactionInfo&, const ev::Event& event)
{
    return TSL_SUCCESS;
}

L4_NS_END
