#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPrimitiveComponentFactory(py::module &m)
{
    py::class_< UPrimitiveComponentFactory,  UObject   >(m, "UPrimitiveComponentFactory")
          ;
}