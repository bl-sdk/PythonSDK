#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponTypeComparer(py::module &m)
{
    py::class_< UWeaponTypeComparer,  UQSortComparer   >(m, "UWeaponTypeComparer")
          ;
}