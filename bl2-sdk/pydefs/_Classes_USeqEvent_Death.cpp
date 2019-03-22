#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_Death(py::module &m)
{
    py::class_< USeqEvent_Death,  USequenceEvent   >(m, "USeqEvent_Death")
          ;
}