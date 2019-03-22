#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ProceduralSwitchNumeric(py::module &m)
{
    py::class_< USeqAct_ProceduralSwitchNumeric,  USequenceAction   >(m, "USeqAct_ProceduralSwitchNumeric")
        .def_readwrite("Possibilities", &USeqAct_ProceduralSwitchNumeric::Possibilities)
          ;
}