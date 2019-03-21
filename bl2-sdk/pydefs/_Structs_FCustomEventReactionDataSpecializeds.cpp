#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCustomEventReactionDataSpecialized()
{
    py::class_< FCustomEventReactionDataSpecialized,  FSpecializedBehaviorEvent   >("FCustomEventReactionDataSpecialized")
  ;
}