#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAIDenDefinition(py::module &m)
{
    py::class_< UWillowAIDenDefinition,  UAIDefinition   >(m, "UWillowAIDenDefinition")
		.def_static("StaticClass", &UWillowAIDenDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MinEngagementTime", &UWillowAIDenDefinition::MinEngagementTime)
        .def_readwrite("MinProvokedTime", &UWillowAIDenDefinition::MinProvokedTime)
          ;
}