#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMapSpecificBalanceModificationList(py::object m)
{
    py::class_< FMapSpecificBalanceModificationList >(m, "FMapSpecificBalanceModificationList")
        .def_readwrite("MapName", &FMapSpecificBalanceModificationList::MapName)
        .def_readwrite("AIPawnBalanceModifiers", &FMapSpecificBalanceModificationList::AIPawnBalanceModifiers)
  ;
}