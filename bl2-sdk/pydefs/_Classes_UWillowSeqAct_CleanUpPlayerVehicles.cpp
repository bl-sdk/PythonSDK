#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_CleanUpPlayerVehicles(py::module &m)
{
    py::class_< UWillowSeqAct_CleanUpPlayerVehicles,  USequenceAction   >(m, "UWillowSeqAct_CleanUpPlayerVehicles")
        .def("eventActivated", &UWillowSeqAct_CleanUpPlayerVehicles::eventActivated)
          ;
}