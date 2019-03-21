#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_ForceFeedback()
{
    class_< UPlayerBehavior_ForceFeedback, bases< UPlayerBehaviorBase >  , boost::noncopyable>("UPlayerBehavior_ForceFeedback", no_init)
        .def_readwrite("FFWaveform", &UPlayerBehavior_ForceFeedback::FFWaveform)
        .def("StaticClass", &UPlayerBehavior_ForceFeedback::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UPlayerBehavior_ForceFeedback::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}