#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDwTriovizImplEffect(py::module &m)
{
    py::class_< UDwTriovizImplEffect,  UPostProcessEffect   >(m, "UDwTriovizImplEffect")
          ;
}