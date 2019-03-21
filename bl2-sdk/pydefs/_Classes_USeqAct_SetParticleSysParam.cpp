#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetParticleSysParam()
{
    class_< USeqAct_SetParticleSysParam, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetParticleSysParam", no_init)
        .def_readwrite("InstanceParameters", &USeqAct_SetParticleSysParam::InstanceParameters)
        .def_readwrite("ScalarValue", &USeqAct_SetParticleSysParam::ScalarValue)
        .def("StaticClass", &USeqAct_SetParticleSysParam::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}