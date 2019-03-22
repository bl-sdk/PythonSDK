#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATriggerStreamingLevel(py::module &m)
{
    py::class_< ATriggerStreamingLevel,  ATrigger   >(m, "ATriggerStreamingLevel")
        .def_readwrite("Levels", &ATriggerStreamingLevel::Levels)
        .def("eventTouch", &ATriggerStreamingLevel::eventTouch)
          ;
}