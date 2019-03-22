#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ProceduralSwitch(py::module &m)
{
    py::class_< USeqAct_ProceduralSwitch,  USequenceAction   >(m, "USeqAct_ProceduralSwitch")
        .def_readwrite("Possibilities", &USeqAct_ProceduralSwitch::Possibilities)
          ;
}