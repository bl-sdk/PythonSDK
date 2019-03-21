#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponTypeComparer()
{
    py::class_< UWeaponTypeComparer,  UQSortComparer   >("UWeaponTypeComparer")
        .def("StaticClass", &UWeaponTypeComparer::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}