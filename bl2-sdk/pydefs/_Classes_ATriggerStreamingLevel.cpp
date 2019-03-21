#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATriggerStreamingLevel(py::object m)
{
    py::class_< ATriggerStreamingLevel,  ATrigger   >(m, "ATriggerStreamingLevel")
        .def_readwrite("Levels", &ATriggerStreamingLevel::Levels)
        .def("StaticClass", &ATriggerStreamingLevel::StaticClass, py::return_value_policy::reference)
        .def("eventTouch", &ATriggerStreamingLevel::eventTouch)
          ;
}