#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_TogglePostRenderFor()
{
    class_< UWillowSeqAct_TogglePostRenderFor, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_TogglePostRenderFor", no_init)
        .def("StaticClass", &UWillowSeqAct_TogglePostRenderFor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}