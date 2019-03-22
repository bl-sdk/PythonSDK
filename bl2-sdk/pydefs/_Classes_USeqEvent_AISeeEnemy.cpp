#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_AISeeEnemy(py::module &m)
{
    py::class_< USeqEvent_AISeeEnemy,  USequenceEvent   >(m, "USeqEvent_AISeeEnemy")
        .def_readwrite("MaxSightDistance", &USeqEvent_AISeeEnemy::MaxSightDistance)
          ;
}