#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogVar_InstanceData()
{
    py::class_< UWillowDialogVar_InstanceData,  UGearboxDialogVariable   >("UWillowDialogVar_InstanceData")
        .def_readwrite("InstanceDataName", &UWillowDialogVar_InstanceData::InstanceDataName)
        .def("StaticClass", &UWillowDialogVar_InstanceData::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}