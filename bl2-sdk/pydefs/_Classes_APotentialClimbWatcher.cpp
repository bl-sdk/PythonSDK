#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APotentialClimbWatcher(py::module &m)
{
    py::class_< APotentialClimbWatcher,  AInfo   >(m, "APotentialClimbWatcher")
        .def("eventTick", &APotentialClimbWatcher::eventTick)
          ;
}