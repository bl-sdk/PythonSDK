#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_ClimbLadder()
{
    class_< UWillowAnimNode_ClimbLadder, bases< UAnimNodeScaleRateBySpeed >  , boost::noncopyable>("UWillowAnimNode_ClimbLadder", no_init)
        .def("StaticClass", &UWillowAnimNode_ClimbLadder::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}