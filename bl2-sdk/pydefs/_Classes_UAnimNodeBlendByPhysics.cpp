#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendByPhysics()
{
    class_< UAnimNodeBlendByPhysics, bases< UAnimNodeBlendList >  , boost::noncopyable>("UAnimNodeBlendByPhysics", no_init)
        .def_readwrite("DelayBeforeStartingBlend", &UAnimNodeBlendByPhysics::DelayBeforeStartingBlend)
        .def_readwrite("WaitingToDoBlend", &UAnimNodeBlendByPhysics::WaitingToDoBlend)
        .def("StaticClass", &UAnimNodeBlendByPhysics::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}