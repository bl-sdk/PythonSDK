#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_Cloak()
{
    py::class_< USpecialMove_Cloak,  USpecialMove_Motion   >("USpecialMove_Cloak")
        .def("StaticClass", &USpecialMove_Cloak::StaticClass, py::return_value_policy::reference)
        .def("eventClientFinished", &USpecialMove_Cloak::eventClientFinished)
        .def("eventClientStarted", &USpecialMove_Cloak::eventClientStarted)
        .staticmethod("StaticClass")
  ;
}