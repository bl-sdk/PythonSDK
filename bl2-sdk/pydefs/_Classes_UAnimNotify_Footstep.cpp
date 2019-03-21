#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_Footstep()
{
    py::class_< UAnimNotify_Footstep,  UAnimNotify   >("UAnimNotify_Footstep")
        .def_readwrite("FootDown", &UAnimNotify_Footstep::FootDown)
        .def("StaticClass", &UAnimNotify_Footstep::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}