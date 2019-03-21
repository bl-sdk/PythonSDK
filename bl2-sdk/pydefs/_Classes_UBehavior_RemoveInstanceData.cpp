#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RemoveInstanceData()
{
    py::class_< UBehavior_RemoveInstanceData,  UBehaviorBase   >("UBehavior_RemoveInstanceData")
        .def_readwrite("InstanceData", &UBehavior_RemoveInstanceData::InstanceData)
        .def("StaticClass", &UBehavior_RemoveInstanceData::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_RemoveInstanceData::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}