#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_BurrowIdle(py::module &m)
{
    py::class_< UAction_BurrowIdle,  UAction_Idle   >(m, "UAction_BurrowIdle")
          ;
}