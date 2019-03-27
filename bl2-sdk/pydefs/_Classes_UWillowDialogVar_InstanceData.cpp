#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogVar_InstanceData(py::module &m)
{
    py::class_< UWillowDialogVar_InstanceData,  UGearboxDialogVariable   >(m, "UWillowDialogVar_InstanceData")
		.def_static("StaticClass", &UWillowDialogVar_InstanceData::StaticClass, py::return_value_policy::reference)
        .def_readwrite("InstanceDataName", &UWillowDialogVar_InstanceData::InstanceDataName)
          ;
}