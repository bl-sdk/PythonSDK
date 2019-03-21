#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FItemBehaviorSet(py::object m)
{
    py::class_< FItemBehaviorSet >(m, "FItemBehaviorSet")
        .def_readwrite("OnUsed", &FItemBehaviorSet::OnUsed)
  ;
}