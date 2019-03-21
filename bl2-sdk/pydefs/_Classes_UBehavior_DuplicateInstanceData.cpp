#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DuplicateInstanceData()
{
    py::class_< UBehavior_DuplicateInstanceData,  UBehaviorBase   >("UBehavior_DuplicateInstanceData")
        .def_readwrite("DuplicateName", &UBehavior_DuplicateInstanceData::DuplicateName)
        .def_readwrite("InstanceData", &UBehavior_DuplicateInstanceData::InstanceData)
        .def("StaticClass", &UBehavior_DuplicateInstanceData::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_DuplicateInstanceData::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}