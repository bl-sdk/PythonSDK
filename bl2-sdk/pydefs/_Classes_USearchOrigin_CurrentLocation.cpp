#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchOrigin_CurrentLocation(py::module &m)
{
    py::class_< USearchOrigin_CurrentLocation,  USearchOrigin   >(m, "USearchOrigin_CurrentLocation")
          ;
}