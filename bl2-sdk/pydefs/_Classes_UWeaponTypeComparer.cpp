#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponTypeComparer(py::object m)
{
    py::class_< UWeaponTypeComparer,  UQSortComparer   >(m, "UWeaponTypeComparer")
        .def("StaticClass", &UWeaponTypeComparer::StaticClass, py::return_value_policy::reference)
          ;
}