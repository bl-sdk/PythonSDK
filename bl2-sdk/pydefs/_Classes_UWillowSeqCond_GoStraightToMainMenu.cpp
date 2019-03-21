#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_GoStraightToMainMenu()
{
    class_< UWillowSeqCond_GoStraightToMainMenu, bases< USequenceCondition >  , boost::noncopyable>("UWillowSeqCond_GoStraightToMainMenu", no_init)
        .def("StaticClass", &UWillowSeqCond_GoStraightToMainMenu::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}