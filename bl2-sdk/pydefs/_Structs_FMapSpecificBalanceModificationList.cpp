#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMapSpecificBalanceModificationList()
{
    py::class_< FMapSpecificBalanceModificationList >("FMapSpecificBalanceModificationList")
        .def_readwrite("MapName", &FMapSpecificBalanceModificationList::MapName)
        .def_readwrite("AIPawnBalanceModifiers", &FMapSpecificBalanceModificationList::AIPawnBalanceModifiers)
  ;
}