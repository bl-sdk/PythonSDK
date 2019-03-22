#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorContextData(py::module &m)
{
    py::class_< FBehaviorContextData >(m, "FBehaviorContextData")
        .def_readwrite("InstancedDataContextName", &FBehaviorContextData::InstancedDataContextName)
        .def_readwrite("ContextObject", &FBehaviorContextData::ContextObject)
        .def_readwrite("BehaviorContext", &FBehaviorContextData::BehaviorContext)
        .def_readwrite("bSupportsDefaultOutputLink", &FBehaviorContextData::bSupportsDefaultOutputLink)
  ;
}