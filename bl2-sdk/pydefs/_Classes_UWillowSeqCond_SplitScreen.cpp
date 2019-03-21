#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_SplitScreen()
{
    class_< UWillowSeqCond_SplitScreen, bases< USequenceCondition >  , boost::noncopyable>("UWillowSeqCond_SplitScreen", no_init)
        .def("StaticClass", &UWillowSeqCond_SplitScreen::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}