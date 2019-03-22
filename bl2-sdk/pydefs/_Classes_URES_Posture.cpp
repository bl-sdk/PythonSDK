#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_Posture(py::module &m)
{
    py::class_< URES_Posture,  UActionResource   >(m, "URES_Posture")
          ;
}