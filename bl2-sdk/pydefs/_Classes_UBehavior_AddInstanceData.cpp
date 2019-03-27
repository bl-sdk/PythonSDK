#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AddInstanceData(py::module &m)
{
    py::class_< UBehavior_AddInstanceData,  UBehaviorBase   >(m, "UBehavior_AddInstanceData")
		.def_static("StaticClass", &UBehavior_AddInstanceData::StaticClass, py::return_value_policy::reference)
        .def_readwrite("InstanceData", &UBehavior_AddInstanceData::InstanceData)
        .def("ApplyBehaviorToContext", &UBehavior_AddInstanceData::ApplyBehaviorToContext)
          ;
}