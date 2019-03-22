#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_AnyPlayerHasMarketingUnlock(py::module &m)
{
    py::class_< UWillowSeqCond_AnyPlayerHasMarketingUnlock,  USequenceCondition   >(m, "UWillowSeqCond_AnyPlayerHasMarketingUnlock")
        .def_readwrite("MarketingUnlockDef", &UWillowSeqCond_AnyPlayerHasMarketingUnlock::MarketingUnlockDef)
        .def("StaticClass", &UWillowSeqCond_AnyPlayerHasMarketingUnlock::StaticClass, py::return_value_policy::reference)
          ;
}