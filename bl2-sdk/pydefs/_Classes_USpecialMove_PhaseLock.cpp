#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_PhaseLock(py::module &m)
{
    py::class_< USpecialMove_PhaseLock,  UWillowAnimDefinition   >(m, "USpecialMove_PhaseLock")
		.def_static("StaticClass", &USpecialMove_PhaseLock::StaticClass, py::return_value_policy::reference)
        .def("eventClientFinished", &USpecialMove_PhaseLock::eventClientFinished)
        .def("eventServerFinished", &USpecialMove_PhaseLock::eventServerFinished)
        .def("eventServerStarted", &USpecialMove_PhaseLock::eventServerStarted)
        .def("eventAuthorityCanPlay", &USpecialMove_PhaseLock::eventAuthorityCanPlay)
          ;
}