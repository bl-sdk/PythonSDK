#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_CloseColiseumOverlay()
{
    class_< UWillowSeqAct_CloseColiseumOverlay, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_CloseColiseumOverlay", no_init)
        .def("StaticClass", &UWillowSeqAct_CloseColiseumOverlay::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &UWillowSeqAct_CloseColiseumOverlay::eventActivated)
        .staticmethod("StaticClass")
  ;
}