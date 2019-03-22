#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDelegateProperty(py::module &m)
{
    py::class_< UDelegateProperty,  UProperty   >(m, "UDelegateProperty")
          ;
}