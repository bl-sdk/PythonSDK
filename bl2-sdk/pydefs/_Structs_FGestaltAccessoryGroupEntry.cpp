#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltAccessoryGroupEntry(py::object m)
{
    py::class_< FGestaltAccessoryGroupEntry >(m, "FGestaltAccessoryGroupEntry")
        .def_readwrite("GroupName", &FGestaltAccessoryGroupEntry::GroupName)
        .def_readwrite("GestaltAccessoryPartList", &FGestaltAccessoryGroupEntry::GestaltAccessoryPartList)
  ;
}