#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetVelocity()
{
    class_< USeqAct_SetVelocity, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetVelocity", no_init)
        .def_readwrite("VelocityDir", &USeqAct_SetVelocity::VelocityDir)
        .def_readwrite("VelocityMag", &USeqAct_SetVelocity::VelocityMag)
        .def("StaticClass", &USeqAct_SetVelocity::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_SetVelocity::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}