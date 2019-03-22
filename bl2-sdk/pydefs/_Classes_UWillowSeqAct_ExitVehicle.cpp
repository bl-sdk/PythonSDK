#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ExitVehicle(py::module &m)
{
    py::class_< UWillowSeqAct_ExitVehicle,  USequenceAction   >(m, "UWillowSeqAct_ExitVehicle")
        .def_readwrite("SeatsToForceExitOn", &UWillowSeqAct_ExitVehicle::SeatsToForceExitOn)
          ;
}