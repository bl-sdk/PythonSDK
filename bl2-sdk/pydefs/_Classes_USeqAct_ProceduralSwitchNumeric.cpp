#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ProceduralSwitchNumeric()
{
    py::class_< USeqAct_ProceduralSwitchNumeric,  USequenceAction   >("USeqAct_ProceduralSwitchNumeric")
        .def_readwrite("Possibilities", &USeqAct_ProceduralSwitchNumeric::Possibilities)
        .def("StaticClass", &USeqAct_ProceduralSwitchNumeric::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}