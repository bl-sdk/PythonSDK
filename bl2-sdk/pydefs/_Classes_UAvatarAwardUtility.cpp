#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAvatarAwardUtility()
{
    py::class_< UAvatarAwardUtility,  UObject   >("UAvatarAwardUtility")
        .def("StaticClass", &UAvatarAwardUtility::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}