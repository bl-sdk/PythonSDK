#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_CameraShake()
{
    class_< UGearboxSeqAct_CameraShake, bases< USequenceAction >  , boost::noncopyable>("UGearboxSeqAct_CameraShake", no_init)
        .def_readwrite("CameraShake", &UGearboxSeqAct_CameraShake::CameraShake)
        .def("StaticClass", &UGearboxSeqAct_CameraShake::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}