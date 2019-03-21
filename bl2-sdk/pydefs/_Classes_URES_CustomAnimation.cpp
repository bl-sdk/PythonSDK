#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_CustomAnimation()
{
    py::class_< URES_CustomAnimation,  UActionResource   >("URES_CustomAnimation")
        .def("StaticClass", &URES_CustomAnimation::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}