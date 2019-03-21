#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDefinitionGlobalsDefinition()
{
    py::class_< UDefinitionGlobalsDefinition,  UGBXDefinition   >("UDefinitionGlobalsDefinition")
        .def_readwrite("DefaultColor", &UDefinitionGlobalsDefinition::DefaultColor)
        .def_readwrite("DefaultIcon", &UDefinitionGlobalsDefinition::DefaultIcon)
        .def_readwrite("DefinitionIconData", &UDefinitionGlobalsDefinition::DefinitionIconData)
        .def("StaticClass", &UDefinitionGlobalsDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetIcon", &UDefinitionGlobalsDefinition::GetIcon, py::return_value_policy::reference)
        .def("GetColor", &UDefinitionGlobalsDefinition::GetColor)
        .staticmethod("StaticClass")
  ;
}