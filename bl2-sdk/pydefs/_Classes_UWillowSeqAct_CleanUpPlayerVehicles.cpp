#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_CleanUpPlayerVehicles()
{
    py::class_< UWillowSeqAct_CleanUpPlayerVehicles,  USequenceAction   >("UWillowSeqAct_CleanUpPlayerVehicles")
        .def("StaticClass", &UWillowSeqAct_CleanUpPlayerVehicles::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_CleanUpPlayerVehicles::eventActivated)
        .staticmethod("StaticClass")
  ;
}