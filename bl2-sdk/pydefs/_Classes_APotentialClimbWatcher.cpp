#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APotentialClimbWatcher(py::object m)
{
    py::class_< APotentialClimbWatcher,  AInfo   >(m, "APotentialClimbWatcher")
        .def("StaticClass", &APotentialClimbWatcher::StaticClass, py::return_value_policy::reference)
        .def("eventTick", &APotentialClimbWatcher::eventTick)
          ;
}