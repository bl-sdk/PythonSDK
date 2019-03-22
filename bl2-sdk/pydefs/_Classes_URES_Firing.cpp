#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_Firing(py::module &m)
{
    py::class_< URES_Firing,  UActionResource   >(m, "URES_Firing")
          ;
}