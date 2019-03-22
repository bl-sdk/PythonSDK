#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorVariableLinkData2(py::module &m)
{
    py::class_< FBehaviorVariableLinkData2 >(m, "FBehaviorVariableLinkData2")
        .def_readwrite("PropertyName", &FBehaviorVariableLinkData2::PropertyName)
        .def_readwrite("VariableLinkType", &FBehaviorVariableLinkData2::VariableLinkType)
        .def_readwrite("ConnectionIndex", &FBehaviorVariableLinkData2::ConnectionIndex)
        .def_readwrite("LinkedVariables", &FBehaviorVariableLinkData2::LinkedVariables)
        .def_readwrite("CachedProperty", &FBehaviorVariableLinkData2::CachedProperty)
  ;
}