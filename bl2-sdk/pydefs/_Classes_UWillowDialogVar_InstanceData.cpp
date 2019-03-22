#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogVar_InstanceData(py::module &m)
{
    py::class_< UWillowDialogVar_InstanceData,  UGearboxDialogVariable   >(m, "UWillowDialogVar_InstanceData")
        .def_readwrite("InstanceDataName", &UWillowDialogVar_InstanceData::InstanceDataName)
          ;
}