#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInputRemappingDefinition()
{
    py::class_< UInputRemappingDefinition,  UGBXDefinition   >("UInputRemappingDefinition")
        .def_readwrite("PresetTag", &UInputRemappingDefinition::PresetTag)
        .def_readwrite("PresetCaption", &UInputRemappingDefinition::PresetCaption)
        .def_readwrite("RemappedAxes", &UInputRemappingDefinition::RemappedAxes)
        .def_readwrite("RemappedButtons", &UInputRemappingDefinition::RemappedButtons)
        .def("StaticClass", &UInputRemappingDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}