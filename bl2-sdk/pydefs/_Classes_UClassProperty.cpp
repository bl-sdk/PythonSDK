#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UClassProperty(py::module &m)
{
    py::class_< UClassProperty,  UProperty   >(m, "UClassProperty")
          ;
}