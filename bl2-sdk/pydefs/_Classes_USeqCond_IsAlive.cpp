#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_IsAlive(py::module &m)
{
    py::class_< USeqCond_IsAlive,  USequenceCondition   >(m, "USeqCond_IsAlive")
          ;
}