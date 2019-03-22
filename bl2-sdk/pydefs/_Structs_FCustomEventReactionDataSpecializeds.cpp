#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCustomEventReactionDataSpecialized(py::module &m)
{
    py::class_< FCustomEventReactionDataSpecialized,  FSpecializedBehaviorEvent   >(m, "FCustomEventReactionDataSpecialized")
  ;
}