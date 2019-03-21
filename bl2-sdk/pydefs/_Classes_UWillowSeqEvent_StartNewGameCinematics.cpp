#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_StartNewGameCinematics()
{
    class_< UWillowSeqEvent_StartNewGameCinematics, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_StartNewGameCinematics", no_init)
        .def("StaticClass", &UWillowSeqEvent_StartNewGameCinematics::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}