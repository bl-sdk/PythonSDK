#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTimerEventReactionDataSpecialized()
{
    py::class_< FTimerEventReactionDataSpecialized,  FSpecializedBehaviorEvent   >("FTimerEventReactionDataSpecialized")
  ;
}