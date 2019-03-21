#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_TravelStationTeleport()
{
    py::class_< UWillowSeqAct_TravelStationTeleport,  USequenceAction   >("UWillowSeqAct_TravelStationTeleport")
        .def("StaticClass", &UWillowSeqAct_TravelStationTeleport::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}