#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_Posture()
{
    py::class_< URES_Posture,  UActionResource   >("URES_Posture")
        .def("StaticClass", &URES_Posture::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}