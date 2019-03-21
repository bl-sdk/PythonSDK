#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ToggleCinematicMode()
{
    class_< USeqAct_ToggleCinematicMode, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ToggleCinematicMode", no_init)
        .def("StaticClass", &USeqAct_ToggleCinematicMode::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}