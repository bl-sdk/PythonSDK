#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_Kismet()
{
    py::class_< UAnimNotify_Kismet,  UAnimNotify   >("UAnimNotify_Kismet")
        .def_readwrite("NotifyName", &UAnimNotify_Kismet::NotifyName)
        .def("StaticClass", &UAnimNotify_Kismet::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}