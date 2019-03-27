#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageEvents(py::module &m)
{
    py::class_< FDamageEvents,  FEventsBase   >(m, "FDamageEvents")
  ;
}