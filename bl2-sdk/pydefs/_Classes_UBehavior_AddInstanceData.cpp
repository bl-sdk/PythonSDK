#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AddInstanceData(py::object m)
{
    py::class_< UBehavior_AddInstanceData,  UBehaviorBase   >(m, "UBehavior_AddInstanceData")
        .def_readwrite("InstanceData", &UBehavior_AddInstanceData::InstanceData)
        .def("StaticClass", &UBehavior_AddInstanceData::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AddInstanceData::ApplyBehaviorToContext)
          ;
}