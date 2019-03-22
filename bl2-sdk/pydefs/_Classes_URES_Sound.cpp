#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_Sound(py::module &m)
{
    py::class_< URES_Sound,  UActionResource   >(m, "URES_Sound")
          ;
}