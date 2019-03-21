#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTimerEventReactionDataSpecialized(py::object m)
{
    py::class_< FTimerEventReactionDataSpecialized,  FSpecializedBehaviorEvent   >(m, "FTimerEventReactionDataSpecialized")
  ;
}