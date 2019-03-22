#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShieldResourcePool(py::module &m)
{
    py::class_< UShieldResourcePool,  UResourcePool   >(m, "UShieldResourcePool")
          ;
}