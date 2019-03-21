#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_OpenColiseumOverlay()
{
    class_< UWillowSeqAct_OpenColiseumOverlay, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_OpenColiseumOverlay", no_init)
        .def_readwrite("OverlayDefinition", &UWillowSeqAct_OpenColiseumOverlay::OverlayDefinition)
        .def("StaticClass", &UWillowSeqAct_OpenColiseumOverlay::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &UWillowSeqAct_OpenColiseumOverlay::eventActivated)
        .staticmethod("StaticClass")
  ;
}