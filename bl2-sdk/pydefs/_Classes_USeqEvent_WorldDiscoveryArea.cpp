#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_WorldDiscoveryArea(py::module &m)
{
    py::class_< USeqEvent_WorldDiscoveryArea,  USequenceEvent   >(m, "USeqEvent_WorldDiscoveryArea")
          ;
}