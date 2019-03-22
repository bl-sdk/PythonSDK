#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_Moving(py::module &m)
{
    py::class_< URES_Moving,  UActionResource   >(m, "URES_Moving")
          ;
}