#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowClanDefinition(py::module &m)
{
    py::class_< UWillowClanDefinition,  UGBXDefinition   >(m, "UWillowClanDefinition")
		.def_static("StaticClass", &UWillowClanDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MaterialMap", &UWillowClanDefinition::MaterialMap)
        .def_readwrite("SwitchData", &UWillowClanDefinition::SwitchData)
        .def("ChangeObjectMaterials", &UWillowClanDefinition::ChangeObjectMaterials)
          ;
}