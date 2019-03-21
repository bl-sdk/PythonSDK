#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstDirector()
{
    class_< UInterpTrackInstDirector, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstDirector", no_init)
        .def_readwrite("OldViewTarget", &UInterpTrackInstDirector::OldViewTarget)
        .def_readwrite("OldRenderingOverrides", &UInterpTrackInstDirector::OldRenderingOverrides)
        .def("StaticClass", &UInterpTrackInstDirector::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}