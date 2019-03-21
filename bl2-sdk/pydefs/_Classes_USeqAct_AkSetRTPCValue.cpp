#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AkSetRTPCValue()
{
    class_< USeqAct_AkSetRTPCValue, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_AkSetRTPCValue", no_init)
        .def_readwrite("AkRtpc", &USeqAct_AkSetRTPCValue::AkRtpc)
        .def_readwrite("Value", &USeqAct_AkSetRTPCValue::Value)
        .def("StaticClass", &USeqAct_AkSetRTPCValue::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}