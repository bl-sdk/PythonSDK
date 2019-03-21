#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AddObjectInstanceData(py::object m)
{
    py::class_< UBehavior_AddObjectInstanceData,  UBehaviorBase   >(m, "UBehavior_AddObjectInstanceData")
        .def_readwrite("InstanceDataObject", &UBehavior_AddObjectInstanceData::InstanceDataObject)
        .def_readwrite("InstanceDataName", &UBehavior_AddObjectInstanceData::InstanceDataName)
        .def("StaticClass", &UBehavior_AddObjectInstanceData::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AddObjectInstanceData::ApplyBehaviorToContext)
          ;
}