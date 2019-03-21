#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATriggerStreamingLevel()
{
    py::class_< ATriggerStreamingLevel,  ATrigger   >("ATriggerStreamingLevel")
        .def_readwrite("Levels", &ATriggerStreamingLevel::Levels)
        .def("StaticClass", &ATriggerStreamingLevel::StaticClass, py::return_value_policy::reference)
        .def("eventTouch", &ATriggerStreamingLevel::eventTouch)
        .staticmethod("StaticClass")
  ;
}