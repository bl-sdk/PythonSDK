#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DuplicateInstanceData(py::module &m)
{
    py::class_< UBehavior_DuplicateInstanceData,  UBehaviorBase   >(m, "UBehavior_DuplicateInstanceData")
		.def_static("StaticClass", &UBehavior_DuplicateInstanceData::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DuplicateName", &UBehavior_DuplicateInstanceData::DuplicateName)
        .def_readwrite("InstanceData", &UBehavior_DuplicateInstanceData::InstanceData)
        .def("ApplyBehaviorToContext", &UBehavior_DuplicateInstanceData::ApplyBehaviorToContext)
          ;
}