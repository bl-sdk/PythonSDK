#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInputContextDefinition(py::module &m)
{
    py::class_< UInputContextDefinition,  UGBXDefinition   >(m, "UInputContextDefinition")
		.def_static("StaticClass", &UInputContextDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("InputActions", &UInputContextDefinition::InputActions)
        .def_readwrite("InputSets", &UInputContextDefinition::InputSets)
        .def("ContainsInputAction", &UInputContextDefinition::ContainsInputAction)
          ;
}