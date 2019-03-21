#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_AnyPlayerHasMarketingUnlock()
{
    class_< UWillowSeqCond_AnyPlayerHasMarketingUnlock, bases< USequenceCondition >  , boost::noncopyable>("UWillowSeqCond_AnyPlayerHasMarketingUnlock", no_init)
        .def_readwrite("MarketingUnlockDef", &UWillowSeqCond_AnyPlayerHasMarketingUnlock::MarketingUnlockDef)
        .def("StaticClass", &UWillowSeqCond_AnyPlayerHasMarketingUnlock::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}