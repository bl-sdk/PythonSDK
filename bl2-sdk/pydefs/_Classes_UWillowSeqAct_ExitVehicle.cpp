#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ExitVehicle(py::object m)
{
    py::class_< UWillowSeqAct_ExitVehicle,  USequenceAction   >(m, "UWillowSeqAct_ExitVehicle")
        .def_readwrite("SeatsToForceExitOn", &UWillowSeqAct_ExitVehicle::SeatsToForceExitOn)
        .def("StaticClass", &UWillowSeqAct_ExitVehicle::StaticClass, py::return_value_policy::reference)
          ;
}