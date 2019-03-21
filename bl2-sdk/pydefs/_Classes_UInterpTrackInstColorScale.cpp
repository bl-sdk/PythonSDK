#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstColorScale()
{
    class_< UInterpTrackInstColorScale, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstColorScale", no_init)
        .def("StaticClass", &UInterpTrackInstColorScale::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}