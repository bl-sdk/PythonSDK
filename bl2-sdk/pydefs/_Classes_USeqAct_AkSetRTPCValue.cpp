#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AkSetRTPCValue(py::module &m)
{
    py::class_< USeqAct_AkSetRTPCValue,  USeqAct_Latent   >(m, "USeqAct_AkSetRTPCValue")
        .def_readwrite("AkRtpc", &USeqAct_AkSetRTPCValue::AkRtpc)
        .def_readwrite("Value", &USeqAct_AkSetRTPCValue::Value)
          ;
}