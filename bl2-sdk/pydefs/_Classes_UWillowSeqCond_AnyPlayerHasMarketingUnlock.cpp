#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_AnyPlayerHasMarketingUnlock()
{
    py::class_< UWillowSeqCond_AnyPlayerHasMarketingUnlock,  USequenceCondition   >("UWillowSeqCond_AnyPlayerHasMarketingUnlock")
        .def_readwrite("MarketingUnlockDef", &UWillowSeqCond_AnyPlayerHasMarketingUnlock::MarketingUnlockDef)
        .def("StaticClass", &UWillowSeqCond_AnyPlayerHasMarketingUnlock::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}