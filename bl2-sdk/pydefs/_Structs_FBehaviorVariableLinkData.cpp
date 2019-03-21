#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorVariableLinkData(py::object m)
{
    py::class_< FBehaviorVariableLinkData >(m, "FBehaviorVariableLinkData")
        .def_readwrite("PropertyName", &FBehaviorVariableLinkData::PropertyName)
        .def_readwrite("ConnectionIndex", &FBehaviorVariableLinkData::ConnectionIndex)
        .def_readwrite("LinkedVariables", &FBehaviorVariableLinkData::LinkedVariables)
        .def_readwrite("CachedProperty", &FBehaviorVariableLinkData::CachedProperty)
  ;
}