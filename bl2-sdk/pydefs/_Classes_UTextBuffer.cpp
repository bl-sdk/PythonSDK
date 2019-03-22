#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTextBuffer(py::module &m)
{
    py::class_< UTextBuffer,  UObject   >(m, "UTextBuffer")
          ;
}