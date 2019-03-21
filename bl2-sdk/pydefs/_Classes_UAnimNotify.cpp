#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify()
{
    py::class_< UAnimNotify,  UObject   >("UAnimNotify")
        .def("StaticClass", &UAnimNotify::StaticClass, py::return_value_policy::reference)
        .def("FindNextNotifyOfClass", &UAnimNotify::FindNextNotifyOfClass)
        .staticmethod("StaticClass")
  ;
}