#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AkSetSwitch()
{
    py::class_< USeqAct_AkSetSwitch,  USequenceAction   >("USeqAct_AkSetSwitch")
        .def_readwrite("AkSwitch", &USeqAct_AkSetSwitch::AkSwitch)
        .def("StaticClass", &USeqAct_AkSetSwitch::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}