#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_TravelStationTeleport(py::module &m)
{
    py::class_< UWillowSeqAct_TravelStationTeleport,  USequenceAction   >(m, "UWillowSeqAct_TravelStationTeleport")
          ;
}