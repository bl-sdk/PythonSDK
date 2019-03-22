#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_SwitchPlatform(py::module &m)
{
    py::class_< USeqCond_SwitchPlatform,  USequenceCondition   >(m, "USeqCond_SwitchPlatform")
          ;
}