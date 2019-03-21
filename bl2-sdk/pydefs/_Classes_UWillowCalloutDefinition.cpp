#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowCalloutDefinition(py::object m)
{
    py::class_< UWillowCalloutDefinition,  UGearboxCalloutDefinition   >(m, "UWillowCalloutDefinition")
        .def_readwrite("DialogEvent", &UWillowCalloutDefinition::DialogEvent)
        .def("StaticClass", &UWillowCalloutDefinition::StaticClass, py::return_value_policy::reference)
          ;
}