#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AkSetRTPCValue()
{
    py::class_< USeqAct_AkSetRTPCValue,  USeqAct_Latent   >("USeqAct_AkSetRTPCValue")
        .def_readwrite("AkRtpc", &USeqAct_AkSetRTPCValue::AkRtpc)
        .def_readwrite("Value", &USeqAct_AkSetRTPCValue::Value)
        .def("StaticClass", &USeqAct_AkSetRTPCValue::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}