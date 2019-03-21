#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_ShouldStartNewGameCinematics()
{
    class_< UWillowSeqCond_ShouldStartNewGameCinematics, bases< USequenceCondition >  , boost::noncopyable>("UWillowSeqCond_ShouldStartNewGameCinematics", no_init)
        .def("StaticClass", &UWillowSeqCond_ShouldStartNewGameCinematics::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}