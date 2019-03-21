#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageEvents()
{
    py::class_< FDamageEvents,  FEventsBase   >("FDamageEvents")
  ;
}