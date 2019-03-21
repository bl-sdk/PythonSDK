#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MarkExitedRegion()
{
    class_< UWillowSeqAct_MarkExitedRegion, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_MarkExitedRegion", no_init)
        .def_readwrite("Region", &UWillowSeqAct_MarkExitedRegion::Region)
        .def("StaticClass", &UWillowSeqAct_MarkExitedRegion::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}