#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpFilter_Custom(py::module &m)
{
    py::class_< UInterpFilter_Custom,  UInterpFilter   >(m, "UInterpFilter_Custom")
          ;
}