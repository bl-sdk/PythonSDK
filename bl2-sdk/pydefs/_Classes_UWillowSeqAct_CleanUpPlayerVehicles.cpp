#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_CleanUpPlayerVehicles(py::object m)
{
    py::class_< UWillowSeqAct_CleanUpPlayerVehicles,  USequenceAction   >(m, "UWillowSeqAct_CleanUpPlayerVehicles")
        .def("StaticClass", &UWillowSeqAct_CleanUpPlayerVehicles::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_CleanUpPlayerVehicles::eventActivated)
          ;
}