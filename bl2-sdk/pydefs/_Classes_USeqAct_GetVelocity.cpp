#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_GetVelocity()
{
    class_< USeqAct_GetVelocity, bases< USequenceAction >  , boost::noncopyable>("USeqAct_GetVelocity", no_init)
        .def_readwrite("VelocityMag", &USeqAct_GetVelocity::VelocityMag)
        .def_readwrite("VelocityVect", &USeqAct_GetVelocity::VelocityVect)
        .def("StaticClass", &USeqAct_GetVelocity::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_GetVelocity::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}