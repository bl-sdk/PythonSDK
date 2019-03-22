#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_Cloak(py::module &m)
{
    py::class_< USpecialMove_Cloak,  USpecialMove_Motion   >(m, "USpecialMove_Cloak")
        .def("eventClientFinished", &USpecialMove_Cloak::eventClientFinished)
        .def("eventClientStarted", &USpecialMove_Cloak::eventClientStarted)
          ;
}