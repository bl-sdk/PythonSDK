#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_EnableHandIK()
{
    py::class_< UAnimNotify_EnableHandIK,  UAnimNotify   >("UAnimNotify_EnableHandIK")
        .def_readwrite("Hand", &UAnimNotify_EnableHandIK::Hand)
        .def("StaticClass", &UAnimNotify_EnableHandIK::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}