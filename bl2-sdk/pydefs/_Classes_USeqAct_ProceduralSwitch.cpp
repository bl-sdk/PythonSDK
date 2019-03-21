#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ProceduralSwitch()
{
    py::class_< USeqAct_ProceduralSwitch,  USequenceAction   >("USeqAct_ProceduralSwitch")
        .def_readwrite("Possibilities", &USeqAct_ProceduralSwitch::Possibilities)
        .def("StaticClass", &USeqAct_ProceduralSwitch::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}