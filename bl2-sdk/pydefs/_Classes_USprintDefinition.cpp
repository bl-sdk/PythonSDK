#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USprintDefinition(py::module &m)
{
    py::class_< USprintDefinition,  UGBXDefinition   >(m, "USprintDefinition")
		.def_static("StaticClass", &USprintDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FOVModifier", &USprintDefinition::FOVModifier)
        .def_readwrite("EyeHeightModifier", &USprintDefinition::EyeHeightModifier)
        .def_readwrite("BobScalar", &USprintDefinition::BobScalar)
        .def_readwrite("AttributeEffects", &USprintDefinition::AttributeEffects)
          ;
}