#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowLocalOnlyProjectile(py::module &m)
{
    py::class_< AWillowLocalOnlyProjectile,  AWillowProjectile   >(m, "AWillowLocalOnlyProjectile")
          ;
}