#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_Movement(py::module &m)
{
    py::class_< URES_Movement,  UActionResource   >(m, "URES_Movement")
          ;
}