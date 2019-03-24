#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowLocalOnlyProjectile(py::module &m)
{
    py::class_< AWillowLocalOnlyProjectile,  AWillowProjectile   >(m, "AWillowLocalOnlyProjectile")
		.def_static("StaticClass", &AWillowLocalOnlyProjectile::StaticClass, py::return_value_policy::reference)
          ;
}