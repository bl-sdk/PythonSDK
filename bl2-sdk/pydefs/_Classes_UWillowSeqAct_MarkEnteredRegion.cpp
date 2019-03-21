#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MarkEnteredRegion()
{
    class_< UWillowSeqAct_MarkEnteredRegion, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_MarkEnteredRegion", no_init)
        .def_readwrite("Region", &UWillowSeqAct_MarkEnteredRegion::Region)
        .def("StaticClass", &UWillowSeqAct_MarkEnteredRegion::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}