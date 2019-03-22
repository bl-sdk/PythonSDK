#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_ProjectileLanded(py::module &m)
{
    py::class_< USeqEvent_ProjectileLanded,  USequenceEvent   >(m, "USeqEvent_ProjectileLanded")
        .def_readwrite("MaxDistance", &USeqEvent_ProjectileLanded::MaxDistance)
          ;
}