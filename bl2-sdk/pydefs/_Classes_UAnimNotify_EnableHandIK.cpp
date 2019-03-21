#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_EnableHandIK(py::object m)
{
    py::class_< UAnimNotify_EnableHandIK,  UAnimNotify   >(m, "UAnimNotify_EnableHandIK")
        .def_readwrite("Hand", &UAnimNotify_EnableHandIK::Hand)
        .def("StaticClass", &UAnimNotify_EnableHandIK::StaticClass, py::return_value_policy::reference)
          ;
}