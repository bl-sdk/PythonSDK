#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPhysicalMaterialPropertyBase(py::module &m)
{
    py::class_< UPhysicalMaterialPropertyBase,  UObject   >(m, "UPhysicalMaterialPropertyBase")
          ;
}