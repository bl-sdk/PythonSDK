#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APotentialClimbWatcher(py::module &m)
{
    py::class_< APotentialClimbWatcher,  AInfo   >(m, "APotentialClimbWatcher")
		.def_static("StaticClass", &APotentialClimbWatcher::StaticClass, py::return_value_policy::reference)
        .def("eventTick", &APotentialClimbWatcher::eventTick)
          ;
}