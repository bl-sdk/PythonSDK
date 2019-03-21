#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ToggleRestrictions()
{
    class_< UWillowSeqAct_ToggleRestrictions, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ToggleRestrictions", no_init)
        .def("StaticClass", &UWillowSeqAct_ToggleRestrictions::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}