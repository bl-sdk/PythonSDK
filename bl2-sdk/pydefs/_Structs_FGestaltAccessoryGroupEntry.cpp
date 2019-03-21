#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltAccessoryGroupEntry()
{
    py::class_< FGestaltAccessoryGroupEntry >("FGestaltAccessoryGroupEntry")
        .def_readwrite("GroupName", &FGestaltAccessoryGroupEntry::GroupName)
        .def_readwrite("GestaltAccessoryPartList", &FGestaltAccessoryGroupEntry::GestaltAccessoryPartList)
  ;
}