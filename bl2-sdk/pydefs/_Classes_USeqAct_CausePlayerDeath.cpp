#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_CausePlayerDeath(py::module &m)
{
    py::class_< USeqAct_CausePlayerDeath,  USequenceAction   >(m, "USeqAct_CausePlayerDeath")
          ;
}