#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_IsLoggedIn(py::object m)
{
    py::class_< USeqCond_IsLoggedIn,  USequenceCondition   >(m, "USeqCond_IsLoggedIn")
        .def_readwrite("NumNeededLoggedIn", &USeqCond_IsLoggedIn::NumNeededLoggedIn)
        .def("StaticClass", &USeqCond_IsLoggedIn::StaticClass, py::return_value_policy::reference)
        .def("eventCheckLogins", &USeqCond_IsLoggedIn::eventCheckLogins)
          ;
}