#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FViewTargetTransitionParams()
{
    class_< FViewTargetTransitionParams >("FViewTargetTransitionParams", no_init)
        .def_readwrite("BlendTime", &FViewTargetTransitionParams::BlendTime)
        .def_readwrite("BlendFunction", &FViewTargetTransitionParams::BlendFunction)
        .def_readwrite("BlendExp", &FViewTargetTransitionParams::BlendExp)
  ;
}